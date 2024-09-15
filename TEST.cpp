#include <stdio.h>
#include <string.h>
#include <windows.h>

// Define the structure with direct inclusion of the number of precincts
typedef struct {
    char name[10];
    int votes[5];
    int totalVotes;
    double percentVotes;
} Candidate;

// Function to move the cursor to a specific position
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to print the tally table
void printTable(Candidate candidates[], int numCandidates, int numPrecincts) {
    gotoxy(0, 0);
    printf("TALLY OF VOTE PER PRECINCT\n");

    gotoxy(0, 1);
    printf("Precincts");

    for (int i = 0; i < numCandidates; i++) {
        gotoxy(10 + i * 10, 1);
        printf("%s", candidates[i].name);
    }

    for (int i = 0; i < numPrecincts; i++) {
        gotoxy(0, 2 + i);
        printf("%d", i + 1);
        for (int j = 0; j < numCandidates; j++) {
            gotoxy(10 + j * 10, 2 + i);
            printf("%d", candidates[j].votes[i]);
        }
    }
}

// Function to calculate total and percentage votes for each candidate
void calculateTotals(Candidate candidates[], int numCandidates, int numPrecincts) {
    int totalVotesAllCandidates = 0;
    for (int i = 0; i < numCandidates; i++) {
        candidates[i].totalVotes = 0;
        for (int j = 0; j < numPrecincts; j++) {
            candidates[i].totalVotes += candidates[i].votes[j];
        }
        totalVotesAllCandidates += candidates[i].totalVotes;
    }

    for (int i = 0; i < numCandidates; i++) {
        candidates[i].percentVotes = ((double)candidates[i].totalVotes / totalVotesAllCandidates) * 100;
    }
}

// Function to determine and print the election results
void printResults(Candidate candidates[], int numCandidates) {
    gotoxy(0, 10);
    printf("\nResults:\n");
    for (int i = 0; i < numCandidates; i++) {
        printf("Candidate %s received %d votes (%.2f%%)\n", candidates[i].name, candidates[i].totalVotes, candidates[i].percentVotes);
    }

    // Determine if any candidate received more than 50% of the votes
    int winnerIndex = -1;
    for (int i = 0; i < numCandidates; i++) {
        if (candidates[i].percentVotes > 50.0) {
            winnerIndex = i;
            break;
        }
    }

    // Determine if a run-off is needed
    if (winnerIndex != -1) {
        printf("\nCandidate %s is the winner!\n", candidates[winnerIndex].name);
    } else {
        // Find the top two candidates for the run-off
        int firstHighestIndex = 0, secondHighestIndex = 1;
        if (candidates[1].totalVotes > candidates[0].totalVotes) {
            firstHighestIndex = 1;
            secondHighestIndex = 0;
        }
        for (int i = 2; i < numCandidates; i++) {
            if (candidates[i].totalVotes > candidates[firstHighestIndex].totalVotes) {
                secondHighestIndex = firstHighestIndex;
                firstHighestIndex = i;
            } else if (candidates[i].totalVotes > candidates[secondHighestIndex].totalVotes) {
                secondHighestIndex = i;
            }
        }
        printf("\nA run-off is needed between %s and %s.\n", candidates[firstHighestIndex].name, candidates[secondHighestIndex].name);
    }
}

int main() {
    int numCandidates = 4;
    int numPrecincts = 5;
    Candidate candidates[4];

    // Get candidate names
    for (int i = 0; i < numCandidates; i++) {
        printf("Enter name for candidate %d: ", i + 1);
        scanf("%s", candidates[i].name);
    }

    // Get votes for each candidate in each precinct
    for (int i = 0; i < numPrecincts; i++) {
        for (int j = 0; j < numCandidates; j++) {
            printf("Enter votes for %s in precinct %d: ", candidates[j].name, i + 1);
            scanf("%d", &candidates[j].votes[i]);
        }
    }

    // Clear the screen
    system("cls");

    // Print the tally table
    printTable(candidates, numCandidates, numPrecincts);

    // Calculate totals and percentages
    calculateTotals(candidates, numCandidates, numPrecincts);

    // Print the results
    printResults(candidates, numCandidates);



    // Recalculate totals and percentages
    calculateTotals(candidates, numCandidates, numPrecincts);

    // Print the results with modified votes
    printResults(candidates, numCandidates);

    return 0;
}


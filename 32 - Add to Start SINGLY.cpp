#include <stdio.h> // Include standard input-output library
#include <stdlib.h> // Include standard library
#include <ctype.h> // Include functions for character handling
#include <conio.h> // Include library for console input/output functions (specific to certain compilers)

typedef struct Node { // Define a structure called Node
    int data; // Integer data stored in the node
    struct Node *next; // Pointer to the next node
} Node; // Define an alias for the structure

void createList(Node **Start); // Function prototype to create a linked list
void addToStart(Node **Start); // Function prototype to add a node at the start
void addToEnd(Node **Start); // Function prototype to add a node at the end
void deleteAtStart(Node **Start); // Function prototype to delete a node from the start
void deleteAtEnd(Node **Start); // Function prototype to delete a node from the end

int main() { // Main function where execution begins
    Node *Start = NULL; // Initialize the start of the linked list to NULL
    int choice; // Variable to store user choice
    
    // Creation of Single/Singly Linked List
    createList(&Start); // Function call to create a linked list

    // Displaying the initial list
    printf("\nInitial List:\n");
    Node *current = Start; // Create a pointer to traverse the list, starting from the beginning
    while (current != NULL) { // Loop until the end of the list is reached
        printf("%d -> ", current->data); // Print the data of the current node
        current = current->next; // Move to the next node
    }
    printf("NULL\n\n");

    do { // Start a do-while loop to perform actions based on user choice
        // Asking user for action choice
        printf("Choose an action:\n");
        printf("1. Add a node at the start\n");
        printf("2. Add a node at the end\n");
        printf("3. Delete a node at the start\n");
        printf("4. Delete a node at the end\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); // Read user choice
        
        switch (choice) { // Start switch case to perform different actions based on user choice
            case 1: // If user chooses to add a node at the start
                addToStart(&Start); // Function call to add a node at the start
                break; // Exit the switch case
            case 2: // If user chooses to add a node at the end
                addToEnd(&Start); // Function call to add a node at the end
                break; // Exit the switch case
            case 3: // If user chooses to delete a node at the start
                deleteAtStart(&Start); // Function call to delete a node from the start
                break; // Exit the switch case
            case 4: // If user chooses to delete a node at the end
                deleteAtEnd(&Start); // Function call to delete a node from the end
                break; // Exit the switch case
            case 0: // If user chooses to exit
                printf("Exiting...\n"); // Print a message
                break; // Exit the switch case
            default: // If user chooses an invalid option
                printf("Invalid choice!\n"); // Print a message
                break; // Exit the switch case
        }

        // Displaying the updated list
        printf("\nUpdated List:\n");
        current = Start; // Reset the pointer to the start of the list
        while (current != NULL) { // Loop until the end of the list is reached
            printf("%d -> ", current->data); // Print the data of the current node
            current = current->next; // Move to the next node
        }
        printf("NULL\n\n");

    } while (choice != 0); // Continue the loop until the user chooses to exit

    return 0; // Exit the program with success
}

void createList(Node **Start) { // Function definition to create a linked list
    Node *newNode, *temp; // Declare pointers to nodes
    int data; // Variable to store data entered by the user
    char resp; // Variable to store user response
    
    printf("<@@ Creation of Single/Singly Linked List @@>\n"); // Print a message
    do { // Start a do-while loop to add nodes until user decides to stop
        printf("Enter data for new node: "); // Prompt the user to enter data
        scanf("%d", &data); // Read the data entered by the user

        newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for a new node
        newNode->data = data; // Set the data of the new node
        newNode->next = NULL; // Set the next pointer of the new node to NULL

        if (*Start == NULL) { // If the list is empty
            *Start = newNode; // Set the start pointer to the new node
            temp = newNode; // Set a temporary pointer to the new node
        } else { // If the list is not empty
            temp->next = newNode; // Link the new node to the end of the list
            temp = newNode; // Move the temporary pointer to the new node
        }

        printf("Create new node? [Y/N]: "); // Ask the user if they want to create another node
        scanf(" %c", &resp); // Read the user's response
    } while (toupper(resp) == 'Y'); // Continue the loop if the user's response is 'Y'
}

void addToStart(Node **Start) { // Function definition to add a node at the start
    Node *newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for a new node
    newNode->next = NULL; // Set the next pointer of the new node to NULL
    
    printf("\n!! Adding new node at the Start !!\n\n"); // Print a message
    printf("Enter data for new node: "); // Prompt the user to enter data
    scanf("%d", &newNode->data); // Read the data entered by the user
    
    if (*Start == NULL) { // If the list is empty
        *Start = newNode; // Set the start pointer to the new node
    } else { // If the list is not empty
        newNode->next = *Start; // Link the new node to the current start of the list
        *Start = newNode; // Update the start pointer to the new node
    }
    
    printf("Node added successfully!\n"); // Print a message
}

void addToEnd(Node **Start) { // Function definition to add a node at the end
    Node *newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for a new node
    newNode->next = NULL; // Set the next pointer of the new node to NULL
    
    printf("\n!! Adding new node at the End !!\n\n"); // Print a message
    printf("Enter data for new node: "); // Prompt the user to enter data
    scanf("%d", &newNode->data); // Read the data entered by the user
    
    if (*Start == NULL) { // If the list is empty
        *Start = newNode; // Set the start pointer to the new node
    } else { // If the list is not empty
        Node *current = *Start; // Create a pointer to traverse the list
        while (current->next != NULL) { // Loop until the end of the list is reached
            current = current->next; // Move to the next node
        }
        current->next = newNode; // Link the new node to the end of the list
    }
    
    printf("Node added successfully!\n"); // Print a message
}

void deleteAtStart(Node **Start) { // Function definition to delete a node from the start
    if (*Start == NULL) { // If the list is empty
        printf("List is already empty!\n"); // Print a message
    } else { // If the list is not empty
        Node *temp = *Start; // Create a temporary pointer to the start node
        *Start = (*Start)->next; // Update the start pointer to the next node
        free(temp); // Free the memory of the deleted node
        printf("Node deleted from the start successfully!\n"); // Print a message
    }
}

void deleteAtEnd(Node **Start) { // Function definition to delete a node from the end
    if (*Start == NULL) { // If the list is empty
        printf("List is already empty!\n"); // Print a message
    } else if ((*Start)->next == NULL) { // If there is only one node in the list
        free(*Start); // Free the memory of the node
        *Start = NULL; // Set the start pointer to NULL
        printf("Node deleted from the end successfully!\n"); // Print a message
    } else { // If there are multiple nodes in the list
        Node *current = *Start; // Create a pointer to traverse the list
        Node *prev = NULL; // Create a pointer to keep track of the previous node
        while (current->next != NULL) { // Loop until the end of the list is reached
            prev = current; // Move the previous pointer to the current node
            current = current->next; // Move to the next node
        }
        prev->next = NULL; // Set the next pointer of the second-to-last node to NULL
        free(current); // Free the memory of the deleted node
        printf("Node deleted from the end successfully!\n"); // Print a message
    }
}





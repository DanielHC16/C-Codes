#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;

struct Node {
    string StudNo;
    string StudName;
    string CrsYr;
    double gwa;
    Node* next;
    Node* prev;
};

class StudentList {
private:
    Node* Head;
    Node* Tail;

public:
    StudentList() {
        Head = NULL;
        Tail = NULL;
    }

    void mainMenu();
    void addStudent();
    void addBefore();
    void addAfter();
    void delRecord();
    void traverseForward();
    void traverseBackward();
    void searchRecord();
};

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    StudentList list;
    list.mainMenu();
    return 0;
}

void StudentList::mainMenu() {
    int choice;
    do {
        system("cls"); 
        cout << "\n\n<===== Main Menu =====>\n";
        cout << "[1] Add a New Student Record\n";
        cout << "[2] Add a New Student Record Before a Given Student Number\n";
        cout << "[3] Add a New Student Record After a Given Student Number\n";
        cout << "[4] Delete a Student Record\n";
        cout << "[5] Traverse Forward\n";
        cout << "[6] Traverse Backward\n";
        cout << "[7] Search a Student Record\n";
        cout << "[0] Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                addBefore();
                break;
            case 3:
                addAfter();
                break;
            case 4:
                delRecord();
                break;
            case 5:
                traverseForward();
                break;
            case 6:
                traverseBackward();
                break;
            case 7:
                searchRecord();
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                system("pause");
        }
    } while (choice != 0);
}

void StudentList::addStudent() {
    system("cls"); 
    Node* NewNode = new Node();

    cout << "\n\n<@@ Add a New Student Record @@>\n";
    cout << "Enter Student No.: ";
    cin.ignore(); 
    getline(cin, NewNode->StudNo);

    cout << "Enter Student Name: ";
    getline(cin, NewNode->StudName);

    cout << "Enter Course and Year: ";
    getline(cin, NewNode->CrsYr);

    cout << "Enter General Weighted Average: ";
    cin >> NewNode->gwa;
    cin.ignore();

    NewNode->next = Head;
    NewNode->prev = NULL;

    if (Head != NULL) {
        Head->prev = NewNode;
    }

    Head = NewNode;

    if (Tail == NULL) {
        Tail = NewNode;
    }

    system("cls");
}

void StudentList::addBefore() {
    system("cls"); 
    string key;
    Node* currNode = Head;

    cout << "\n\n<@@ Add a New Student Record Before a Given Student Number @@>\n";
    cout << "Enter Student Number to add before: ";
    getline(cin, key);

    while (currNode != NULL && currNode->StudNo != key) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        cout << "Student number not found.\n";
        system("pause");
        return;
    }

    Node* NewNode = new Node();

    cout << "Enter New Student No.: ";
    getline(cin, NewNode->StudNo);

    cout << "Enter New Student Name: ";
    getline(cin, NewNode->StudName);

    cout << "Enter New Course and Year: ";
    getline(cin, NewNode->CrsYr);

    cout << "Enter General Weighted Average: ";
    cin >> NewNode->gwa;
    cin.ignore();

    NewNode->next = currNode;
    NewNode->prev = currNode->prev;

    if (currNode->prev != NULL) {
        currNode->prev->next = NewNode;
    } else {
        Head = NewNode;
    }

    currNode->prev = NewNode;
    system("cls"); 
}

void StudentList::addAfter() {
    system("cls"); 
    string key;
    Node* currNode = Head;

    cout << "\n\n<@@ Add a New Student Record After a Given Student Number @@>\n";
    cout << "Enter Student Number to add after: ";
    getline(cin, key);

    while (currNode != NULL && currNode->StudNo != key) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        cout << "Student number not found.\n";
        system("pause");
        return;
    }

    Node* NewNode = new Node();

    cout << "Enter New Student No.: ";
    getline(cin, NewNode->StudNo);

    cout << "Enter New Student Name: ";
    getline(cin, NewNode->StudName);

    cout << "Enter New Course and Year: ";
    getline(cin, NewNode->CrsYr);

    cout << "Enter General Weighted Average: ";
    cin >> NewNode->gwa;
    cin.ignore();

    NewNode->next = currNode->next;
    NewNode->prev = currNode;

    if (currNode->next != NULL) {
        currNode->next->prev = NewNode;
    } else {
        Tail = NewNode;
    }

    currNode->next = NewNode;
    system("cls"); 
}

void StudentList::delRecord() {
    system("cls"); 
    string key;
    Node* currNode = Head;

    cout << "\n\n<@@ Delete a Student Record @@>\n";
    cout << "Enter Student Number to delete: ";
    getline(cin, key);

    while (currNode != NULL && currNode->StudNo != key) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        cout << "Student number not found.\n";
        system("pause");
        return;
    }

    if (currNode->prev != NULL) {
        currNode->prev->next = currNode->next;
    } else {
        Head = currNode->next;
    }

    if (currNode->next != NULL) {
        currNode->next->prev = currNode->prev;
    } else {
        Tail = currNode->prev;
    }

    delete currNode;
    cout << "Record deleted.\n";
    system("pause");
    system("cls"); 
}

void StudentList::traverseForward() {
    system("cls"); 
    Node* currNode = Head;
    int y = 5; 

    cout << "\n\n<@@ Traverse Forward @@>\n";
    gotoxy(0, 3); cout << "Student No.";
    gotoxy(15, 3); cout << "Student Name";
    gotoxy(40, 3); cout << "Course and Year";
    gotoxy(60, 3); cout << "GWA";
    gotoxy(0, 4); cout << "-----------------------------------------------------------------";

    while (currNode != NULL) {
        gotoxy(0, y); cout << currNode->StudNo;
        gotoxy(15, y); cout << currNode->StudName;
        gotoxy(40, y); cout << currNode->CrsYr;
        gotoxy(60, y); cout << currNode->gwa;
        y++;
        currNode = currNode->next;
    }
    gotoxy(0, y+2); system("pause");
    system("cls"); 
}

void StudentList::traverseBackward() {
    system("cls");
    Node* currNode = Tail;
    int y = 5; 

    cout << "\n\n<@@ Traverse Backward @@>\n";
    gotoxy(0, 3); cout << "Student No.";
    gotoxy(15, 3); cout << "Student Name";
    gotoxy(40, 3); cout << "Course and Year";
    gotoxy(60, 3); cout << "GWA";
    gotoxy(0, 4); cout << "-----------------------------------------------------------------";

    while (currNode != NULL) {
        gotoxy(0, y); cout << currNode->StudNo;
        gotoxy(15, y); cout << currNode->StudName;
        gotoxy(40, y); cout << currNode->CrsYr;
        gotoxy(60, y); cout << currNode->gwa;
        y++;
        currNode = currNode->prev;
    }
    gotoxy(0, y+2); system("pause");
    system("cls"); 
}

void StudentList::searchRecord() {
    system("cls"); 
    string key;
    Node* currNode = Head;

    cout << "\n\n<@@ Search a Student Record @@>\n";
    cout << "Enter Student Number to search: ";
    getline(cin, key);

    while (currNode != NULL && currNode->StudNo != key) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        cout << "Student number not found.\n";
    } else {
        system("cls"); 
        cout << "\n\n<@@ Student Record Found @@>\n";
        cout << "Student No.: " << currNode->StudNo << "\n";
        cout << "Student Name: " << currNode->StudName << "\n";
        cout << "Course and Year: " << currNode->CrsYr << "\n";
        cout << "GWA: " << currNode->gwa << "\n";
    }
    system("pause");
    system("cls"); 
}


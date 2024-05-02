#include <string>
#include <iostream>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node* START = NULL;
void addnode() {
    Node* newNode = new Node(); // step 1: create a new node
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs; //assign value to the data field of the new node
    cout << "\nEnter the name of the student: "; 
    cin >> newNode->name; //assign value to the data field of the new node
     
    //insert th new node in the list
    if (START == NULL || newNode->noMhs <= START->noMhs) {
        cout << "\033(31mDuplicate roll numbers bit allowed\033(0m" << endl;
        return;
    }
    //if the list is empty, make the new node the START
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

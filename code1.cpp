// SINGLY LINKED LIST
// INSERTION AT THE BEGINNING
#include <iostream>
using namespace std;

// Step 1: Create structure (node)
struct Node {
    int data;
    Node* next;
};
//[data | next]
// Step 2: Global head pointer
Node* head = NULL;

// Step 3: Insert at beginning
void Insert(int x)
{
    Node* temp = new Node();  // create new node

    temp->data = x;           // store value
    temp->next = head;        // link to previous list

    head = temp;              // update head
}

// Step 4: Print the list
void Print()
{
    Node* temp = head;        // start from head

    cout << "List is: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;    // move to next node
    }

    cout << endl;
}

// Step 5: Main function
int main()
{
    int n, x;

    cout << "How many numbers? ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> x;

        Insert(x);   // insert at beginning
        Print();     // show current list
    }

    return 0;
}
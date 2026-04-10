#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void insert(int data, int n)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (n == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;

    for (int i = 1; i < n - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void printList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    insert(10, 1);
    insert(20, 2);
    insert(30, 3);
    insert(25, 3);
    printList();
    return 0;
}

#include <iostream>
#include <time.h>
using namespace std;
// #include "Header_3.h"
struct Node
{
    string data;
    struct Node *next;
};
Node *insert(Node *&, string &);    // function prototype
void deleteNode(Node **, string &); // function prototype
int findlength(Node *&);

Node *insert(Node *&last, string &data) // function declaration
{

    if (last == NULL)
    {
        Node *temp = new Node;
        temp->data = data;
        last = temp;
        last->next = last;
        return last;
    }

    Node *temp = new Node;

    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    last = temp;
    return last;
}

int findlength(Node *&last)
{
    int length = 0;
    struct Node *node;
    if (last == NULL)
    {
        return 0;
    }

    node = last->next;
    do
    {
        length++;
        node = node->next;
    } while (node != last->next);

    return length;
}

void deleteNode(Node **head, string &key)
{

    if (*head == NULL)
        return;

    if ((*head)->data == key && (*head)->next == *head)
    {

        cout << (*head)->data << "\n";
        delete (*head);
        *head = NULL;
        return;
    }

    Node *last = *head, *d;

    if ((*head)->data == key)
    {

        while (last->next != *head)
            last = last->next;

        last->next = (*head)->next;
        cout << (*head)->data << "\n";
        delete (*head);
        *head = last->next;
    }
}

int main()
{
    srand(time(0));
    Node *head = NULL;
    cout << "enter the number of Person\n";
    int N;
    cin >> N;
    cout << "Enter the names\n";
    for (int i = 0; i < N; i++)
    {
        string name;
        getline(cin >> ws, name);
        head = insert(head, name);
    }
    int select;
    int m = findlength(head);
    select = rand() % m;
    cout << " The required ranking from last to top is\n";
    while (findlength(head) > 0)
    {

        // cout<<select<<endl;
        Node *last = head;
        for (int i = 0; i < select; i++)
            last = last->next;
        deleteNode(&head, last->data);
    }
    cout<<"Last member is the winner"<<endl;
}

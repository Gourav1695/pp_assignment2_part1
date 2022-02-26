
#include <iostream>
#include <time.h>
// #include "Header_3.h"
struct Node
{
    std::string data;
    struct Node * next;
}; 
Node* insert(Node* &,std::string &);//function prototype
void deleteNode(Node**,std::string &);//function prototype
int findlength(Node* &);

// #include<iostream>
// #include"Header_3.h"


Node* insert(Node * & last,std::string &data)//function declaration
{
    
    if (last == NULL)
    {
    Node* temp =new Node;
    temp -> data = data;
    last = temp;
    last -> next = last;
    return last;
    }
    
    Node *temp =new Node;
    
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
    last = temp;
    return last;

}

int findlength(Node * &last)
{  int length=0;
    struct Node *node;
    if (last == NULL)
    { 
      return 0;
    }
    
    node = last -> next;
    do
    {   length++;
        node = node -> next;
    } while(node != last -> next);

  return length;
}

void deleteNode(Node** head,std::string &key)
{
 
    if(*head == NULL)
        return;
         
  
    if((*head)->data==key && (*head)->next==*head)
    {
        
        std::cout<<(*head)->data<<"\n";
        delete(*head);
        *head=NULL;
        return;
    }
     
    Node *last=*head,*d;

     
    
    if((*head)->data==key)
    {
         
        
        while(last->next!=*head)
        last=last->next;
             
        last->next=(*head)->next;
        std::cout<<(*head)->data<<"\n";
        delete(*head);
        *head=last->next;
    }
}

int main()
{
  srand(time(0));
  Node *head = NULL;
  std::cout << "enter the number of Person\n";
  int N;
  std::cin >> N;
  std::cout << "Enter the names\n";
  for (int i = 0; i < N; i++)
  {
    std::string name;
    std::getline(std::cin >> std::ws, name);
    head = insert(head, name);
  }
  std::cout << " The required ranking from last to top is\n";
  while (findlength(head) > 0)
  {
    int select;
    int m = findlength(head);
    select = rand() % m;
    Node *last = head;
    for (int i = 0; i < select; i++)
      last = last->next;
    deleteNode(&head, last->data);
  }
}

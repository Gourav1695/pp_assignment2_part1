#ifndef Header_3_h

#define Header_3_h
 
struct Node
{
    std::string data;
    struct Node * next;
}; 
Node* insert(Node* &,std::string &);
void deleteNode(Node**,std::string &);

int findlength(Node* &);

#endif 
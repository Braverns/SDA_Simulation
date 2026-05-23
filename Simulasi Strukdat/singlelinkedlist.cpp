#include <iostream>
#include <string>


using namespace std;

struct Node{
    int data;

    Node *next;
};

void addLast(Node *&head, int databaru) {
    Node *nodeBaru = new Node;
    nodeBaru->data = databaru;
    nodeBaru->next = nullptr;
     if (head == nullptr){
        head = nodeBaru;
        cout << "head pertama tak ada";
        return;
        }
    Node *temp = head;
    while (temp->next != nullptr) {
            temp = temp->next;
    }
    cout << "\nhead pertama ada";
}

int main(){
   Node *head=nullptr;

   addLast(head, 10);
   addLast(head, 20);
   return 0;
}

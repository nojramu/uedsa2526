#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = nullptr;
    }
};

class LinkedList {
    Node* head;
    public:
    LinkedList() {
        head = nullptr;
    }
    
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        newNode->next = this->head;
        this->head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main(){
    LinkedList listahan;
    listahan.insert(80);
    listahan.insert(100);
    listahan.insert(20);
    listahan.insert(40);
    listahan.insert(60);

    listahan.display();
}
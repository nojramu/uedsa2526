#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        this->data = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyList {
    Node* head;
    public:

    DoublyList() {
        head = nullptr;
    }
    
    void frontInsert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        newNode->next = this->head;
        this->head->prev = newNode;
        this->head = newNode;
    }
    
    void backInsert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
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
    DoublyList listahan;
    listahan.backInsert(80);
    listahan.backInsert(100);
    listahan.frontInsert(20);
    listahan.frontInsert(40);
    listahan.backInsert(60);
    listahan.display();
}
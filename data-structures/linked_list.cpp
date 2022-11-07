#include "linked_list.h"
#include <iostream>

Node::Node (int d, Node *p = nullptr) {
    data = d;
    next = p;
}

LinkedList::LinkedList() {
        head = nullptr;
}
LinkedList::~LinkedList() {
    Node *next;
    while (head != nullptr) {
        next = head->next;
        delete head;
        head = next;
    }
}
void LinkedList::insert(int val) {
    Node *new_node = new Node(val, head);
    if (head == nullptr) {
        head = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
}

void LinkedList::display() {
    Node *temp = head;
    while (temp != nullptr) {
        std::cout << "Data: " << temp->data << " ";
        std::cout << "Next: " << temp->next << " " << std::endl;
        temp = temp->next;
    }
}


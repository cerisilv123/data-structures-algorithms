//
//  linked_list.h
//  data-structures-algorithms
//
//  Created by Ceri Silvester on 07/11/2022.
//

#ifndef linked_list_h
#define linked_list_h

struct Node {
    int data;
    Node *next;
    Node (int d, Node *p);
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList();
    ~LinkedList();
    void insert(int val);
    void display();
};


#endif /* linked_list_h */

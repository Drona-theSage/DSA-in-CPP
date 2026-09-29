#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>
#include <vector>


// Represents a single node
struct Node {

    int data;
    Node* next;

    Node(int value)
        : data(value), next(nullptr) {}
};


// Represents the entire Linked List
class LinkedList {

private:

    Node* head;


public:

    // Constructor
    LinkedList()
        : head(nullptr) {}


    // Insert at beginning
    void insertAtBeginning(int value) {

        Node* newNode = new Node(value);

        newNode->next = head;

        head = newNode;
    }


    // Insert at end
    void insertAtEnd(int value) {

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
    }


    // Create Linked List from vector
    void createFromVector(const std::vector<int>& values) {

        for (int value : values) {
            insertAtEnd(value);
        }
    }


    // Get head of Linked List
    Node* getHead() const {
        return head;
    }


    // Update head
    void setHead(Node* newHead) {
        head = newHead;
    }


    // Print Linked List
    void printList() const {

        Node* temp = head;

        while (temp != nullptr) {

            std::cout << temp->data;

            if (temp->next != nullptr) {
                std::cout << " -> ";
            }

            temp = temp->next;
        }

        std::cout << " -> NULL\n";
    }


    // Destructor
    ~LinkedList() {

        Node* current = head;

        while (current != nullptr) {

            Node* nextNode = current->next;

            delete current;

            current = nextNode;
        }
    }
    
};


#endif
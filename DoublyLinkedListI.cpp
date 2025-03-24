#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* prev;
        Node* next;

        // Constructor to initialize a new node with data
        Node(int data) {
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

class DoublyLinkedList {
    public:
        Node* head;

        // Constructor for the linked list
        DoublyLinkedList() {
            head = NULL;
        }

        void insertAtBeginning(int data) {
            Node* newNode = new Node(data);
            newNode->next = head;

            if (head != NULL) {
                head->prev = newNode;
            }

            head = newNode;
        }

        void insertAtEnd(int data) {
            Node* newNode = new Node(data);
            newNode->next = NULL;

            if (head == NULL) {
                newNode->prev = NULL;
                head = newNode;
                return;
            }

            Node* last = head;
            while (last->next != NULL) {
                last = last->next;
            }

            last->next = newNode;
            newNode->prev = last;
        }

        void insertAtMiddle(int data, int position) {
            Node* newNode = new Node(data);

            if (position == 0) {
                insertAtBeginning(data);
                return;
            }

            Node* temp = head;
            int count = 0;

            while (temp != NULL && count < position - 1) {
                temp = temp->next;
                count++;
            }

            if (temp == NULL) {
                cout << "Position out of range" << endl;
                return;
            }

            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next = newNode;

            if (newNode->next != NULL) {
                newNode->next->prev = newNode;
            }
        }

        void printList() {
            Node* current = head;
            cout << "Forward List: ";
            while (current != NULL) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

int main() {
    DoublyLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);
    list.printList();

    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAtEnd(60);
    list.printList();

    list.insertAtMiddle(25, 2);
    list.printList();

    return 0;
}

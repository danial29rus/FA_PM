#include <iostream>

class ListNode {
public:
    int value;
    ListNode *next;

    ListNode(int value) : value(value), next(nullptr) {}
};

class LinkedList {
private:
    ListNode *head;

public:
    LinkedList() : head(nullptr) {}

    void append(int value) {
        ListNode *newNode = new ListNode(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            ListNode *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() const {
        ListNode *current = head;
        while (current != nullptr) {
            std::cout << current->value << " -> ";
            current = current->next;
        }
        std::cout << "NULL\n";
    }

    ~LinkedList() {
        ListNode *current = head;
        while (current != nullptr) {
            ListNode *temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    std::cout << "Linked List: ";
    list.display();

    return 0;
}

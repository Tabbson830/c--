#include <iostream>
#include <string>

class Node {
public:
    std::string name;
    Node* next;
    
    Node(std::string name) : name(name), next(nullptr) {}
};

void print_fifth_item(Node* head) {
    if (head == nullptr) {
        std::cout << "The list is empty." << std::endl;
        return;
    }
    
    Node* current = head;
    int count = 1;
    
    while (current != nullptr && count < 5) {
        current = current->next;
        count++;
    }
    
    if (count == 5 && current != nullptr) {
        std::cout << "The 5th item in the list is: " << current->name << std::endl;
    } else {
        std::cout << "The list has fewer than 5 items." << std::endl;
    }
}


int main() {
    Node* head = new Node("First");
    head->next = new Node("Second");
    head->next->next = new Node("Third");
    head->next->next->next = new Node("Fourth");
    head->next->next->next->next = new Node("Fifth");
    
    print_fifth_item(head);
    
    // Remember to free the allocated memory in a real program
    return 0;
}
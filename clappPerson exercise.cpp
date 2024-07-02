#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person* neighbour;

    Person(string name) {
        this->name = name;
        this->neighbour = nullptr;
    }
};

int main() {
    Person* front = new Person("Person 1");
    Person* current = front;

    for (int i = 2; i <= 100; ++i) {
        current->neighbour = new Person("Person " + to_string(i));
        current = current->neighbour;
    }

    cout << "Linked list before deletion:" << endl;
    current = front;
    while (current != nullptr) {
        cout << current->name << " -> ";
        current = current->neighbour;
    }
    cout << "nullptr" << endl;

    // Deleting the first item in the queue (front)
    Person* temp = front;
    front = front->neighbour;
    delete temp;

    // Display the list after deletion
    cout << "Linked list after deletion of the first item:" << endl;
    current = front;
    while (current != nullptr) {
        cout << current->name << " -> ";
        current = current->neighbour;
    }
    cout << "nullptr" << endl;

    // Clean up remaining items
    while (front != nullptr) {
        Person* temp = front;
        front = front->neighbour;
        delete temp;
    }

    return 0;
}

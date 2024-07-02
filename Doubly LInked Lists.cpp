#include <iostream>
using namespace std;

class Fruit {
public:
    string name;
    Fruit* next = nullptr;
    Fruit* prev = nullptr;
    Fruit(string name) {
        this->name = name;
    }
};

void printList(Fruit* head) {
    while (head != nullptr) {
        cout << head->name << " ";
        head = head->next;
    }
    cout << endl;
}

bool deleteFruit(Fruit*& head, string name) {
    Fruit* temp = head;

    while (head && head->name != name) {
        temp = head;
        head = head->next;
    }

    if (head) {
        if (head == temp) {
            head = head->next;
            if (head) {
                head->prev = nullptr;
            }
        } else {
            temp->next = head->next;
            if (head->next) {
                head->next->prev = temp;
        }
        delete head;
        cout << "deleted " << name << endl;
        return true;
    }
    return false;
}

int main() {
    Fruit* a = new Fruit("Guava");
    Fruit* b = new Fruit("Lemon");
    Fruit* c = new Fruit("Melon");
    Fruit* d = new Fruit("Mango");

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;

    a->prev = nullptr;
    b->prev = a;
    c->prev = b;
    d->prev = c;

    printList(a);

    if (deleteFruit(a, "Lemon")) {
        printList(a);
    } else {
        cout << "Fruit not found" << endl;
    }

    return 0;
}

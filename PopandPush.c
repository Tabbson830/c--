#include <iostream>
using namespace std;

class Fruit{
    public:
    string name;
    Fruit *next = NULL;
    Fruit (string name){
        this->name = name;
    }
}

void push (Fruit *head, string name)
{
    Fruit *f = new Fruit(name);
    while (head -> != NULL){
        head -> head -> next;
        head ->next = f;
    }

}

Fruit pop (Fruit *head)
{
    if (head == NULL) return;
    Fruit*temp = head;
    head = head -> next; //not necessary
    delete temp; 
    temp = NULL;

}

void print (Fruit *head){
    cout << "\n\n";
    while (head != NULL){
        cout << head->name<< endl;
        head = head->next;
    }
    
}

int main()
{
    Fruit *f1 = new Fruit("Mango");
    Fruit *f2 = new Fruit("Melon");
    Fruit *f3 = new Fruit("Guava");

    f1->next = f2;
    f2->next =f3;

    print (f1);
    push(f1, "Banana");
    push(f1, "Melon");
    print(f1) ;
    pop (f1);
    print (f1);

    return 0;

};  


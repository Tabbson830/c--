#include <iostream>
using namespace std;

class Fruit{
    public:
    string name;
    Fruit *next = NULL;
    Fruit *prev = NULL;
    Fruit (string name){
        this->name = name;
    }
};

void print(Fruit *head)
{
    while(head!=NULL)
    {
        head = head->next;

    }
   cout << head->name<<endl;
   head = head->next;

};

bool deleteInside (Fruit *head, string name){
    Fruit *temp = head;

    while(head -> name != name) {
        temp = head;
        head=head->next;
    }

if(head!=NULL){
        temp->next = head;
        head->next->prev = temp;
        delete head;
        return true;
    }
    return false;
}

int main()
{
    Fruit *a = new Fruit("Guava");
    Fruit *b = new Fruit("Lemon");
    Fruit *c = new Fruit("Melon");
    Fruit *d = new Fruit("Mango");

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;

    a->prev = nullptr;
    b->prev = a;
    c->prev = b;
    d->prev = c;




    print(a);

    delete(a);

    print (a);

    return 0;

}
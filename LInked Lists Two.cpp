#include <iostream>
using namespace std;

class Fruit{

    public:
    string name;
    double price;
    Fruit *next = NULL;
    Fruit (string name, double price){
        this-> name = name;
        this-> price = price;
    }
};

int main(){
    Fruit *a = new Fruit ("Mango", 12.5);
    Fruit *b = new Fruit("Guava", 10.0);
    Fruit *c = new Fruit("Melon", 9.3);
    Fruit *d = new Fruit("Lemon", 2.1);
    a->next = b;
    b->next =c;
    c->next = d;

    // print one item
    cout << a-> name << "\t" << a -> price;

    Fruit *e = new Fruit ("Papaya", 17.38);
    Fruit *f = new Fruit ("Mponda", 42.0);

    e->next = f;
    //print list;
    Fruit *temp = e;

    do {
        cout << temp -> name<<"\t" <<"\n"<< temp -> price << endl;
        temp = temp->next;
    }
    while (temp != NULL);
    return 0;
};

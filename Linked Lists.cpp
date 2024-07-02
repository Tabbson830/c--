include <iostream>
using namespace std;

class Fruit{
    public: 
    string name;
    double price;
    Fruit (string name, double price){
        this-> name = name;
        this-> price = price;
    }
};

int main{
    Fruit *a = new Fruit ("Mango", 12.5);
    Fruit *b = new Fruit("Guava", 10.0);
    Fruit *c = new Fruit("Melon", 9.3);
    Fruit *d = new Fruit("Lemon", 2.1);

    // print one item
    cout << a-> name << "\t" << a -> price;
    //print list;
    Fruit *temp = a;

    do {
        cout << temp -> name <<"\t"<< temp -> price << endl;
        temp = temp->next;
    }
    while (temp != NULL);
    return 0;
};
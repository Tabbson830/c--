#include <iostream>
using namespace std;

class Fruit
{
    public:
        string name;
        Fruit *left = NULL;
        Fruit *right = NULL;
        Fruit (string name)
        {
            this -> name = name;
        }
};

void printInOrder (Fruit *head)
{
    if(head == NULL) return;
    printInOrder(head->left);
    cout << head -> name << endl;
    printInOrder (head->right);
}

void printPreOrder(Fruit *head)
{
    if(head == NULL) return;    
    cout << head -> name << endl;    
    printPreOrder(head->left);
    printPreOrder(head->right);
}

void printPostOrder(Fruit *head)
{
    if(head == NULL) return;    
    printPostOrder(head->left); 
    printPosttOrder(head->right);   
    cout << head -> name << endl;
}

int main()
{
    Fruit *F1 = new Fruit ("Banana");
    Fruit *F2 = new Fruit ("Mango");
    Fruit *F3 = new Fruit ("Orange");
    Fruit *F4 = new Fruit ("Melon");
    Fruit *F5 = new Fruit ("Guava");
    Fruit *F6 = new Fruit ("Lemon");
    F1->left = F2;
    F1->right = F3;
    F2->left = F4;
    F2->right = F5;
    F5->left = F6;
    F5->right = new Fruit("Pear");

    cout << "Code in In Order is:" << endl;
    printInOrder(F1);
    cout<<endl;
    cout << "Code in Pre Order is:" << endl;
    printPreOrder(F1);
    cout<<endl;
    cout << "Code in Post Order is:" << endl;
    printPostOrder(F1);
};

#include <iostream>
using namespace std;
int main()
{
    int value;
    int nums [10] = {3,2,5,10,4,13,42,34,56,31 };
    cout << "Enter the number you're searching for" << endl;
    cin >> value;
    int pos = -1;
    for (int i = 0; i < 10; i++) 
    {
        if (nums[i] == value)
        {
            pos = i;
        }
    }
    if (pos < 0)
    {
        cout << "Item not found in array" << endl;
    }
    else
    {
        cout << "Item found at position " << pos << endl;
    }

    return 0;
}
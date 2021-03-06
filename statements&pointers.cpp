#include <iostream>
using namespace std;

int main()
{
 //***************for running the code --> make each section a comment**************

//Break statement
    for (int i = 1; i < 20; i++)
    {
        if (i == 10)//will stop at 10
        {
            break;
        }

        cout << i << endl;
    }

//Continue Statement
    for (int i = 1; i < 20; ++i)
    {
        if (i == 10)//will miss 10
        {
            continue;
        }
        cout << i << endl;
    }

//Pointers --> data types which holds the address of the other data types
    int a = 5;
    int *b = &a; //Address of operator a
    cout << "The address of a is :" << b << endl;
    cout << &a << endl;
    //*b --> value at address b
    cout << "The value at address b is " << *b << endl;

    int **c = &b;
    cout << " the address of pointer b is " << c << endl;
    cout << "The value of pointer to pointer c is " << **c << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    //***************for running the code --> make each section a comment**************

    int age;
    cout << "Invitaion to party. Enter you age:" << endl;
    cin >> age; 

     //selection control structure: if-else ladder
    if (age <= 16)
    {
        cout << "You are a kid. Go to your bed" << endl;
    }
    else if (age < 19)
    { //((age>16) && (age<19))
        cout << "Study for your enterance exam\n";
    }
    else
    {
        cout << "Party starts at 9pm on Sunday" << endl;
    }

    //switch case structure
    switch (age)
    {
    case 18:
        cout << "You are invited" << endl;
        break;
    case 17:
        cout << "You are invited for next year\n";
        break;
    default:
        cout << "Too old for this one" << endl;
        break;
    }
    cout << "Follow above statement";

    // For loop
    for (int i = 0; i < 50; i++)
    {
        cout << i << endl;
    }

    // Ctrl+c for stobing to run
    // infinite for loop ---> condition is always true --> dont left this running!!!
    for (int i = 1; 1 < 10; i++)
    {
        cout << i << endl;
    }

    //while loop
    int i = 1;
    while (i <= 50)
    {
        cout << i << endl;
        i++;
    }

    //Example of infinite while loop 
    int i = 1;
    while (true)
    {
        cout << i << endl;
        i++;
    }

    //do-while loop -->will run at least once before checking the condition
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 20);



    return 0;
}
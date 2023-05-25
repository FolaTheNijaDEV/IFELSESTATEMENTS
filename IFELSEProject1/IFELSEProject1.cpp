#include <iostream>
using namespace std;


int main()
{
    int number;
    cout << "Please Enter a whole number: \n";
    cin >>  number;

    if (number % 2 == 0)
    {
        cout << "You have entered an even number\n";
    }

    else
    {
        cout << "You have entered an odd number\n ";
    }
    system("pause>0");
}

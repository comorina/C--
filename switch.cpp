#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Please enter the key A to D: ";
    cin >> button;
    switch (button)
    {
    case 'A':
        cout << "Shivam Pandey" << endl;
        break;
    case 'B':
        cout << "Karan Pandey" << endl;
        break;
    case 'C':
        cout << "Satyam Pandey" << endl;
        break;
    case 'D':
        cout << "Shashank Pandey" << endl;
        break;
    default:
        cout << "Is still learning!" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    char button;
    cout << "Press any operator button for performming operation: ";
    cin >> button;
   

    switch (button)
    {

    case '+':
        cout << "Add a and b: " << a + b << endl;
        break;
    case '*':
        cout << "Multiplication: " << a * b << endl;
        break;
    case '/':
        cout << "Division: " << a / b << endl;
        break;
    case '-':
        cout << "Substract: " << a - b << endl;
        break;
    default:
        cout << "!---CPU is not capable for this operation---!";
    }

    return 0;
}
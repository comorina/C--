#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int i;
    int count = 0;
    for (int num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }

        if (i == num)
        {
            count += 1;
            cout << num << endl;
        }
    }
    cout << "Number of Prime: " << count << endl;
}
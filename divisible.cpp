#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            count += 1;
            continue;
        }
        cout << i << endl;
    }
    cout << "How many numbers are not divisible by 3 between 0 to 100 :" << count << endl;
    return 0;
}
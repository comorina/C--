#include <iostream>
using namespace std;

int main()
{

    int pocketmoney = 3000;
    int count = 0;
    for (int date = 1; date <= 30; date++)
    {

        if (date % 2 == 0)
        {

            count = count + 1;
            continue;
        }

        if (pocketmoney == 0)
        {
            break;
        }
        cout << "Go out today" << endl;
        pocketmoney = pocketmoney - 300;
    }
    cout << "how many days her not go out :" << count << endl;

    return 0;
}

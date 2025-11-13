#include <iostream>
using namespace std;
int main()
{
    int i = 11;
    while (1)
    {
        if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
        {
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}
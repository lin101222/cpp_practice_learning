#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 1; i < 20; i++)
    {
        for (int j = (100 - 5 * i); j > 0; j--)
        {
            int k = 100 - 5 * i - j;
            if (k % 2 == 0 && k != 0)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
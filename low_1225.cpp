#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // 输出第1行
    for (int j = 0; j < n - 1; j++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    for (int i = 0; i < n - 2; i++)
    {
        // 输出前置空格
        for (int j = 0; j < n - i - 2; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    // 封底
    for (int i = 0; i < n * 2 - 1; i++)
    {
        cout << "*";
    }

    return 0;
}
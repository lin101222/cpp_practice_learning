// ### 1019 - 求1!+2!+…+N!
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total = 0;
    int num = 1;

    for (int j = 1; j <= n; j++) // 阶乘的最大数
    {

        num *= j;

        total += num;
    }

    cout << total << endl;
    return 0;
}
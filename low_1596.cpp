/*如下图所示，摆 1 个火柴棒三角形需要 3 根火柴，那么摆2 个火柴棒三角形就需要 6 根火柴，请问摆 n 个火柴棒三角形需要多少根火柴？*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=3*n;
    cout<<num<<endl;
    return 0;
}
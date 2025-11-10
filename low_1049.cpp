// 输入某个整数，如果输入的整数在 1～9 范围内，则输出相对应的单词，否则输出 `out`。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"one"<<endl;
        break;
    case 2:
        cout<<"two"<<endl;
        break;
    case 3:
        cout<<"three"<<endl;
        break;
    case 4:
        cout<<"four"<<endl;
        break;
    case 5:
        cout<<"five"<<endl;
        break;
    case 6:
        cout<<"six"<<endl;
        break;
    case 7:
        cout<<"seven"<<endl;
        break;
    case 8:
        cout<<"eight"<<endl;
        break;
    case 9:
        cout<<"nine"<<endl;
        break;
        
        default:
        cout<<"out"<<endl;
        break;
    }
    return 0;
}

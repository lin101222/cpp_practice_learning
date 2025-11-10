// ### 题目描述
// 新学年就要开始了，爸爸把 N 元钱给了小青，让他购买一批文具，并作了以下要求：只能买圆珠笔、铅笔和铅笔芯，并且每样至少买一支，总数要超过 30 支，而且钱要全部花完。
// 当小青去到文具店时，发现圆珠笔 8 角钱一支、铅笔 2 角钱一支、铅笔芯 1 角钱一支。小青怎么买才能符合爸爸的要求呢？
// 请你编个程序帮他算出符合购买要求的所有方案总数。

// ### 输入
// 一个整数 N，表示购买文具一共的元数。（1 ≤ N ≤ 50）

// ### 输出
// 一个整数，即符合购买要求的所有方案总数。
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    //先确定每样都买一支后剩余的钱
    N=N*10-11;
    int count=0;
    for (int i = 0; i <= N; i++)
    {
        int left=N-i;
        if (left%2==0)
        {
            for (int j = 0; j <=left/2 ; j++)
            {
                int left2=left-2*j;
                if (left2%8==0)
                {
                    
                        int k=left2/8;
                        if (i+j+k>27)
                        {
                            count++;
                        }
                        

                    
                    
                }
                
            }
            
        }
        
    }
    cout<<count<<endl;
    
    
    return 0;
}
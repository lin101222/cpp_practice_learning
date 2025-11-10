// 输入一个三位正整数，然后与它倒过来的数相加，输出和。

// 如：输入 
// 167则和为
// 167+761=928。

// 输入
// 只有一行，一个三位正整数。

// 输出
// 一个正整数
#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    // 步骤1：保存原数（避免后续修改后丢失）
    int original = num;
    
    // 步骤2：拆分原数，计算反转数（无需数组存储，直接计算）
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;  // 取当前末位数字
        reversed = reversed * 10 + digit;  // 构建反转数
        num = num /10;  // 去掉末位数字
    }
    
    // 步骤3：原数 + 反转数，输出结果
    int result = original + reversed;
    cout << result << endl;
    
    return 0;
}
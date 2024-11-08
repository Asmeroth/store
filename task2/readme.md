# <center>简单计算器程序</center>

### <center>姓名：张照博&emsp;&emsp;&emsp;&emsp;&emsp;学号：320240924771</center>

### **任务摘要**：
从键盘输入数学算式并计算其结果，读入整数和浮点数，要求实现加、减、乘、除、求余运算，不考虑运算符的优先级别。
### 1.基本思路

首先从键盘读入一个数作为最初的答案，然后每次读入一个运算符和一个数，输出操作的答案。
对于读入每一个运算符，我们使用一个 $while$ 循环读入字符并扔掉非运算符的无效字符。

### 2.测试结果
对于部分代表性数据进行测试
#### 部分数据：
```cpp
input:
1+2*3
output:
3
9
```
```cpp
input:
-3%2.5
output:
-0.5
```
```cpp
input:
-80.75 / 6.2+ 7
output:
-13.0242
-6.02419
```
```cpp
input:
6e8+4e9%7.2
output:
4.6e+09
6.4
```

### 3.Pains and Gains

<p style="color:#9f11FF;"><b>Null</b></p>

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool is_o(char ch)
{
    return ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%';
}
char get_o()
{
    char c=getchar();
    while(!is_o(c)&&c!=EOF)c=getchar();
    return c;
}
int main()
{
    double ans,x;
    char op;
    scanf("%lf",&ans);
    while((op=get_o())!=EOF)
    {
        scanf("%lf",&x);
        switch(op)
        {
            case '+':
            {
                ans+=x;
            }break;
            case '-':
            {
                ans-=x;
            }break;
            case '*':
            {
                ans*=x;
            }break;
            case '/':
            {
                x?ans/=x:printf("error:div 0!\n");
            }break;
            case '%':
            {
                x?ans=ans-((long long)(ans/x))*x:printf("error:div 0!\n");
            }break;
        }
        printf("%g\n",ans);
    }
    return 0;
}
```

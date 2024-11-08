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

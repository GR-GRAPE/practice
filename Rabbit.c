#include<stdio.h>

int main()
{
    int num = 2;

    int input_month;
    scanf("%d",&input_month);

    for (int month = 0; month < input_month; month += 3)
    {
        num *= 2;
    }
    printf("%d",num);

    return 0;

}
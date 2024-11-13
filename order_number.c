#include<stdio.h>

// 获得两者中较大的一个数字
int big_num(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}

// 获取两者中较小的一个数字
int small_number(int x,int y)
{
    if (x < y)
    {
        return x;
    }
    return y;
}

int main()
{

    int a,b,c;
    int numbers[2];
    scanf("%d %d %d", &a, &b, &c);
    // 从大到小进行存储
    numbers[0] = big_num(big_num(a, b),big_num(b, c));
    numbers[2] = small_number(small_number(a, b),small_number(b, c));
    if (a != numbers[0] && a != numbers[2])
    {
        numbers[1] = a;
    }
    if (b != numbers[0] && b != numbers[2])
    {
        numbers[1] = b;
    }
    if (c != numbers[0] && c != numbers[2])
    {
        numbers[1] = c;
    }
    printf("%d %d %d", numbers[0], numbers[1], numbers[2]);
    
    return 0;
}
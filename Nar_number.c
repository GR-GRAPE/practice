#include<stdio.h>
#include<math.h>

// 例如输入23，输出2；
int length_num(int num)
{
    int count = 1;
    for (; num / 10 != 0; num /= 10)
    {
        count ++;
    }

return count;
}

int nar_number(int num)
{

    // 存储数字的初始值
    int org_num = num;
    // 得到数字的长度
    int length = length_num(num);
    // 得到对应数组
    int number[length - 1];
  
    // 存入每一位
    for (int i = length; i > 0; i--)
    {
        number[i - 1] = num % 10;
        num /= 10; 
    }
    
    // 初始化存储结果的变量
    int cube = 0;

    for (int count = length; count > 0; count--)
    {   

        cube = cube + pow(number[count - 1],length);

    }
    
    if ((int)(cube) == org_num)
    {
        return 1;
    }
return 0;
}

int main()
{

   
    // 存入下限值和上限制
    int down_num,up_num;
    scanf("%d %d",&down_num,&up_num);
    // 初始化计数器
    int count = 0;
    for (int k = down_num; k <= up_num; k++)
    {
       if (k >= 100)
       {
            if (nar_number(k))
            {
                count++;
            }
       }
       
    }

    printf("%d",count);
    return 0;

}


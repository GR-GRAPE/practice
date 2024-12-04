#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max_and_min(int* max, int* min, int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        } 
    }
    
    for (int i = 0; i < length; i++)
    {
        if (*min > arr[i])
        {
            *min = arr[i];
        }
        
    }
    



}


int main()
{

    // 将数字转化为字符串存入
    char num[100] = " ";
    printf("Please the number divided by space\n");
    fgets(num, sizeof(num),stdin);
    char space[2] = " "; 

    // 初始化数组
    int num_sec[50] = {0};

    // 将空格作为分隔符
    char* token;
    token = strtok(num, space);
    int i = 0;

    // 存入数组
    while (token != NULL)
    {
        num_sec[i] = atoi(token);
        token = strtok(NULL, space);
        i ++;
    }    

    int max = num_sec[0];
    int min = num_sec[0];

    max_and_min(&max, &min, num_sec, i);
    printf("%d %d", max, min);

    return 0 ;
}
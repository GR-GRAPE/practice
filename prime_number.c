#include<stdio.h>
#include<math.h>

int prime_num(int x)
{
    if (x % 2 == 0)
    {
        return 0;
    }

    else if (x == 2)
    {
        return 1;
    }
    
    else
    {
        for (int i = 3; i <= sqrt(x) + 1; i += 2)
        {
            if (x % i == 0)
            {
                return 0;
            }
            
        }
    
    }

return 1;

}

int main()
{
    for (int i = 100; i <= 200; i++)
    {
        if (prime_num(i))
        {
            printf("%d ", i);
        }
        
    }
    
return 0;

}
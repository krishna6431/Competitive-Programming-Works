#include <stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d", &n);
    int key = 3;
    int flag = 0;
    while (n)
    {
        int rem = n % 10;
        if (rem == key)
        {
            flag = 1;
        }
        n /= 10;
    }
    printf("\nOutput: ");
    if (flag)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
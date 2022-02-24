#include <stdio.h>

int main(void)
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, k;
        scanf("%lld %lld", &n, &k);
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        long long int out = sum / k;
        printf("%lld\n", out + 1);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int ans = 0;
        int gasoline = 0;
        for (int i = 0; i < n; i++)
        {
            gasoline += arr[i];
            if (gasoline >= 1)
            {
                ans++;
                gasoline--;
            }
            else
            {
                break;
            }
        }
        printf("%d\n", ans + gasoline);
    }
    return 0;
}
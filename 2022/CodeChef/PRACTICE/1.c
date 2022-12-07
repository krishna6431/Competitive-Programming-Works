#include <stdio.h>
#include <string.h>
int main()
{
    char arr[300];
    printf("Enter the Message = ");
    scanf("%s", arr);
    int length = strlen(arr);
    printf("\nEnter the Key = ");
    int key[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &key[i]);
    }
    int ans[300];
    for (int i = 0; i < length; i++)
    {
        ans[i] = (arr[i] - 'a' + 1) + key[i % 4];
    }
    printf("\nString is : [");
    for (int i = 0; i < length - 1; i++)
    {
        printf("%d,", ans[i]);
    }
    printf("%d", ans[length - 1]);
    printf("].");
    return 0;
}
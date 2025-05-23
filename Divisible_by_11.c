#include <stdio.h>
#include <string.h>

int main()
{
    char num[105];
    scanf("%s", num);
    int len = strlen(num);
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += num[i] - '0';
        }
        else
        {
            odd_sum += num[i] - '0';
        }
    }
    int diff = even_sum - odd_sum;
    if (diff % 11 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
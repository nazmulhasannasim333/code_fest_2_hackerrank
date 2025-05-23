#include <stdio.h>
#include <stdbool.h>

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    bool found = false;
    for (int i = l; i <= r; i++)
    {
        int even = 0, odd = 0, n = i;
        while (n)
        {
            if ((n % 10) % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            n /= 10;
        }
        if (even == odd && even > 0)
        {
            printf("%d\n", i);
            found = true;
        }
    }
    if (!found)
    {
        printf("-1\n");
    }
    return 0;
}
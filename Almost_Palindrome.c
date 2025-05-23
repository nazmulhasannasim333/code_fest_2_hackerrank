#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        char s[1005];
        scanf("%s", s);
        int n = strlen(s);
        int cnt = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
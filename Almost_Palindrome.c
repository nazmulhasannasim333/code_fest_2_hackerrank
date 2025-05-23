#include <stdio.h>
#include <string.h>

int minAddPalindrome(char *S)
{
    int freq[26] = {0};
    int len = strlen(S);
    for (int i = 0; i < len; ++i)
    {
        freq[S[i] - 'a']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] % 2)
            odd++;
    }
    if (odd == 0)
        return 0;
    return odd - 1;
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        char S[1005];
        scanf("%s", S);
        int res = minAddPalindrome(S);
        printf("%d\n", res);
    }
    return 0;
}
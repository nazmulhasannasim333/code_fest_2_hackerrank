#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, a[1005];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
    int left = 0, right = n - 1, shots = 0;
    while (left < right) {
        if (a[left] + a[right] <= k) {
            shots++;
            left++;
            right--;
        } else {
            right--;
        }
    }
    printf("%d\n", shots);
    return 0;
}
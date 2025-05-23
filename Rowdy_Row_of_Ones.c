#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int max_ones = -1;
    int row_index = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
        int j = 0;
        while(j < m && a[i][j] == 0) {
            j++;
        }
        count = m - j;
        if(count > max_ones){
            max_ones = count;
            row_index = i;
        }
    }

    printf("%d\n", row_index);

    return 0;
}
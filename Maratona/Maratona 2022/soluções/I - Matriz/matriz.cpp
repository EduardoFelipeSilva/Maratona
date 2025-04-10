#include <bits/stdc++.h>

int main() {
    int N, C = 0;

    while(scanf("%d", &N) && N) {
        if(C) printf("\n");
        int M[N][N];

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                scanf("%d", &M[i][j]);
                printf("%d", M[i][j]);
            }
            printf("\n");
        }

        printf("transposta\n");

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                printf("%d", M[j][i]);
            }
            printf("\n");
        }

        C++;
    }
}
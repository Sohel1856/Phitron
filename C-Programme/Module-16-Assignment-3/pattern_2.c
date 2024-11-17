#include<stdio.h>

int main() {
    int n,k=1;
    scanf("%d", &n);
    for (int i =1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int j = k; j >= 1; j--) {
            printf("%d", j);
        }
        k++;
        printf("\n");
    }
    return 0;
}

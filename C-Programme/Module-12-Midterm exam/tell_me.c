#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
        }
        int x;
        scanf("%d", &x);
        int ctn = 0;
        for (int i = 0; i < n; i++) {
            if (ar[i] == x) {
                ctn = 1;
                break;
            }
        }
        if (ctn == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n % 2 == 1) printf("0\n");
        else printf("%d\n", n / 4 + 1);
    }
    return 0;
}
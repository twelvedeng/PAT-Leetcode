#include <iostream>
using namespace std;
int main() {
    int n, a[11], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int sum1, sum2;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            sum1 = a[i]*10 + a[j];
            sum2 = a[i] + a[j]*10;
            sum = sum +sum1 +sum2;
        }
    }
    printf("%d", sum);
    return 0;
}

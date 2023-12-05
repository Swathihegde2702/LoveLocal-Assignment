#include <stdio.h>
int countDigitOne(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 1) {
                count++;
            }
            num /= 10;
        }
    }

    return count;
}

int main() {
 
    int n1 = 13;
    int n2 = 0;

    int result1 = countDigitOne(n1);
    printf("Example 1: %d\n", result1);

    int result2 = countDigitOne(n2);
    printf("Example 2: %d\n", result2);

    return 0;
}

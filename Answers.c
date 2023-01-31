#include <stdio.h>

void print_squares(int n, int m) {
    int min = (n < m) ? n : m;
    int max = (n > m) ? n : m;

    printf("largest square size is %d x %d\n", min, min);
    int remaininglength = max - min;

    int remainingsquares = remaininglength * min;
    printf("%d squares of size %d x %d \n", remainingsquares, 1, 1);


    for (int i = min; i >= 1; i--) {
        if (n % i == 0 && m % i == 0) {
            int a = n / i;
            int b = m / i;
            printf("%d squares of size %d x %d\n", a * b, i, i);
            break;
        }
    }
}

int main() {
    int n, m;
    printf("Enter the length and width of the paper: ");
    scanf_s("%d%d", &n, &m);
    print_squares(n, m);
    return 0;
}
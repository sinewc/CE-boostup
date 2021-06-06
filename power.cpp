#include <stdio.h>
int power(int n1, int n2);

int main() {
	int num, p;
    unsigned long long  sum;
    printf("number: ");
    scanf("%d", &num);
    printf("power number: ");
    scanf("%d", &p);
    sum = power(num, p);
    printf("%d^%d = %u", num, p, sum);
    return 0;
}

int power(int num, int p) {
    if (p != 0)
        return (num * power(num, p - 1));
    else
        return 1;
}

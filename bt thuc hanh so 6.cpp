#include <stdio.h>
int primeCheck(int currentNumber) {
    for (int i = 2; i <= currentNumber / 2; i++) {
        if (currentNumber % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    int foundPrimes = 0;
    int currentNumber = 2;
    printf("Nhap vao so nguyen duong: ");
    scanf("%d", &N);
    printf("Cac so nguyen to dau tien trong ds la: ");
    while (foundPrimes < N) {
        if (primeCheck(currentNumber)) {
            printf("%d ", currentNumber);
            foundPrimes++;
        }
        currentNumber++;
    }
    return 0;
}

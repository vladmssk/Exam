#include <stdio.h>

float amount(int n) {
    float nums = 0.0;
    int i;
    
    for (i = 1; i <= n; i++) {
        float x = 1.0;
        int j;
        
        for (j = 1; j <= i; j++) {
            x /= i;
        }
        
        nums += x;
    }
    
    return nums;
}

int main() {
    int n;
    printf("Введите значение n: ");
    scanf("%d", &n);
    
    float result = amount(n);
    printf("Сумма: %f\n", result);
    
    return 0;
}

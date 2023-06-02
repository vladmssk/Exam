#include <stdio.h>


int main() {
    int one = 0;
    int two = 0;
    int num;
    

    while (1) {
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        if (num % 2 == 0) {
            if (num > one) {
                two = one;
                one = num;
            } else if (num > two) {
                two = num;
            }
        }
    }
    

    printf("%d\n", two);
    return 0;
}

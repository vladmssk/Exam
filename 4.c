#include <stdio.h>

int countOccurrences(char str[], char letter) {
    int i = 0;
    int occurrenceCount = 0;
    
    while (str[i]) {
        if (str[i] == letter) {
            occurrenceCount++;
        }
        
        i++;
    }
    
    return occurrenceCount;
}

int main() {
    char str[100];
    char letter;
    
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Введите символ: ");
    scanf(" %c", &letter);
    
    int result = countOccurrences(str, letter);
    printf("Количество вхождений: %d\n", result);
    
    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Coord {
    int coord_one;
    int coord_two;
};


int get(struct Coord start, struct Coord finish) {
    int d_one = abs(start.coord_one - finish.coord_one);
    int d_two = abs(start.coord_two - finish.coord_two);
    
    if ((d_one == 2 && d_two == 1) || (d_one == 1 && d_two == 2)) {
        return 1; 
    } else {
        return 0; 
    }
}


int main() {
    struct Coord start, finish;
    printf("Введите координаты первой клетки (coord_one coord_two): ");
    scanf("%d %d", &start.coord_one, &start.coord_two);
    printf("Введите координаты второй клетки (coord_one coord_two): ");
    scanf("%d %d", &finish.coord_one, &finish.coord_two);
    
    int result = get(start, finish);
    if (result == 1) {
        printf("Можно попасть одним ходом.\n");
    } else {
        printf("Нельзя попасть одним ходом.\n");
    }
    
    return 0;
}

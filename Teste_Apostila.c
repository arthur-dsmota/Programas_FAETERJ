//
#include <stdio.h>
void trocar(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Dentro: a=%d, b=%d\n", a, b);
}
int main(void) {
    int x = 5, y = 10;
    trocar(x, y);
    printf("Fora: x=%d, y=%d\n", x, y);
    return 0;
}

#include <stdio.h>
/**
* main - Entry point
* Return: 0 (Always seccess)
*/

int main() {
    int num = 50;
    unsigned long long first = 1, second = 2, next;
    int count;

    printf("%llu, %llu, ", first, second);

    for (count = 3; count <= num; count++) {
        next = first + second;
        printf("%llu", next);

        if (count < num) {
            printf(", ");
        } else {
            printf("\n");
        }

        first = second;
        second = next;
    }

    return 0;
}

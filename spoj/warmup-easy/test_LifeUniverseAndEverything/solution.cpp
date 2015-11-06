#include <stdio.h>

int main() {
    int num;
    for (scanf("%d\n", &num); num != 42; scanf("%d\n", &num))
        printf("%d\n", num);
    return 0;
}

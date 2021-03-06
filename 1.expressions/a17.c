#include <stdio.h>

const char* season(int month) {
    switch (month) {
    case 1: case 2: case 12:
        return "winter";
    case 3: case 4: case 5:
        return "spring";
    case 6: case 7: case 8:
        return "summer";
    case 9: case 10: case 11:
        return "autumn";
    default:
        return 0;
    }
}

int main() {
    int month;
    scanf("%d", &month);
    printf("%s\n", season(month));
}

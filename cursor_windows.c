#include <windows.h>
#include <stdio.h>

int main() {
    int x = 100;
    int y = 100;

    while (1) {
        SetCursorPos(x, y);

        x += 10;
        y += 10;

        Sleep(100);

        if (x > 1000) x = 100;
        if (y > 1000) y = 100;
    }

    return 0;
}

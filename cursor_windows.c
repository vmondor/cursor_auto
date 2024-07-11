#include <windows.h>
#include <stdio.h>

int main() {
    int x = 800;
    int y = 100;

    while (1) {
        SetCursorPos(x, y);

        x += 1;
        // y += 10;

        Sleep(100);

        if (x > 1000) x = 800;
        if (y > 1000) y = 100;
    }

    return 0;
}

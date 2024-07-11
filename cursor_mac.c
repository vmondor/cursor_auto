#include <ApplicationServices/ApplicationServices.h>
#include <unistd.h>

int main() {
    int x = 800;
    int y = 500;

    while (1) {
        CGEventRef move = CGEventCreateMouseEvent(NULL, kCGEventMouseMoved, CGPointMake(x, y), kCGMouseButtonLeft);
        CGEventPost(kCGHIDEventTap, move);
        CFRelease(move);

        x += 1;
        // y += 10;

        usleep(10000);

        if (x > 1000) x = 800;
        if (y > 1000) y = 500;
    }

    return 0;
}

#include <X11/Xlib.h>
#include <unistd.h>

int main() {
    Display *display;
    Window root_window;
    int screen;

    display = XOpenDisplay(NULL);
    if (display == NULL) {
        return -1;
    }

    screen = DefaultScreen(display);
    root_window = RootWindow(display, screen);

    int x = 500;
    int y = 100;

    while (1) {
        XWarpPointer(display, None, root_window, 0, 0, 0, 0, x, y);
        XFlush(display);

        x += 1;
        // y += 10;

        usleep(10000);
        if (x > 1000) x = 500;
        if (y > 1000) y = 500;
    }

    XCloseDisplay(display);
    return 0;
}
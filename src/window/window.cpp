#include "window.h"
#include <winuser.h>

const char CLASS_NAME[] = "Softboiled Engine";

int createWindow(HINSTANCE hInstance) {
    WNDCLASS window_class = {};

    window_class.lpfnWndProc = windowProc;
    window_class.hInstance = hInstance;
    window_class.lpszClassName = CLASS_NAME;

    RegisterClass(&window_class);

    HWND hwnd = CreateWindowExW(
            0,
            CLASS_NAME,
            L"Test Window Text",
            WS_OVERLAPPEDWINDOW,

            // Size and position
            CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

            NULL,       // Parent window    
            NULL,       // Menu
            hInstance,  // Instance handle
            NULL        // Additional application data
    );

    if (hwnd == NULL)
    {
        return 0;
    }   
}

LRESULT CALLBACK windowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_SIZE:
            break;
        default:
            break;
    }

    return 0;
}

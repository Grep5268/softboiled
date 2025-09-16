#include <stdio.h>
#include <Windows.h>
#include "window/window.h"

int wWinMain(HINSTANCE hInstance, HINSTANCE hPrefInstance, PWSTR pCmdLine, int nCmdShow) {
    int win_result = createWindow(hInstance);

    if (win_result != 0) {
        printf("Error creating window!\n");
    }
}


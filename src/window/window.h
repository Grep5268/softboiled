#pragma once
#include <Windows.h>

int createWindow(HINSTANCE hInstance);

LRESULT CALLBACK windowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

#pragma once

#include <stdbool.h>

struct IDirect3DDevice9;

bool GUI_handleInput(HWND, UINT, WPARAM, LPARAM);
void GUI_init(struct IDirect3DDevice9*);
void GUI_render(void);

struct nk_context;
extern struct nk_context* ctx;
// nk_d3d9_handle_event(window, msg, wParam, lParam)
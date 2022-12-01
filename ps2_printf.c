/************************************************************************************
*************************************************************************************
** BSD 2-Clause License                                                            **
**                                                                                 **
** Copyright (c) 2022, André Guilherme                                             **
** All rights reserved.                                                            **
**                                                                                 **
** Redistribution and use in source and binary forms, with or without              **
** modification, are permitted provided that the following conditions are met:     **
**                                                                                 **
** 1. Redistributions of source code must retain the above copyright notice, this  **
** list of conditions and the following disclaimer.                                **
**                                                                                 **
** 2. Redistributions in binary form must reproduce the above copyright notice,    **
** this list of conditions and the following disclaimer in the documentation       **
** and/or other materials provided with the distribution.                          **
**                                                                                 **
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"     **
** AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE       **
** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE  **
** DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE    **
** FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL      **
** DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR      **
** SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER      **
** CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,   **
** OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE   **
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.            **
**                                                                                 **
*************************************************************************************
*************************************************************************************/

#include "ps2_printf.h"

void ps2_printf(const char *str, u32 secs, ...)
{
    init_scr();

    scr_printf(str);
    
    sleep(secs);

    scr_clear();
}

void ps2_printf_PutChar(const char* str, u32 secs, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setBgColor(const char* str, u32 secs, u32 bg_color, ...)
{
    init_scr();

    scr_setbgcolor(bg_color);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setFontColor(const char* str, u32 secs, u32 font_color, ...)
{
    init_scr();

    scr_setfontcolor(font_color);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursor(const char* str, int enable_cursor, u32 secs, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setBgColor_PutChar(const char* str, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setbgcolor(bg_color);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setFontColor_PutChar(const char* str, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setfontcolor(font_color);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursorColor(const char* str, int enable_cursor, u32 secs, u32 cursor_color, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setcursorcolor(cursor_color);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursorBgColor(const char* str, int enable_cursor, u32 secs, u32 bg_color, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursorFontColor(const char* str, int enable_cursor, u32 secs, u32 font_color, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setfontcolor(font_color);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursorPutChar(const char* str, int enable_cursor, u32 secs, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_putchar(x, y, color, ch);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursorColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 cursor_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setcursorcolor(cursor_color);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursorBgColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_setCursorFontColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setfontcolor(font_color);

    scr_printf(str);

    scr_putchar(x, y, font_color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf(const char *str, va_list opt, u32 secs, ...)
{
    init_scr();

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_putChar(const char *str, va_list opt, u32 secs, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_vprintf(str, opt);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setbgColor(const char *str, va_list opt, u32 secs, u32 bg_color, ...)
{
    init_scr();

    scr_setbgcolor(bg_color);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setFontColor(const char *str, va_list opt, u32 secs, u32 font_color, ...)
{
    init_scr();

    scr_setbgcolor(font_color);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setBgColor_PutChar(const char *str, va_list opt, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setbgcolor(bg_color);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setFontColor_PutChar(const char *str, va_list opt, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setfontcolor(font_color);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setCursor(const char *str, va_list opt, int enable_cursor, u32 secs, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setCursorColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 cursor_color, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setcursorcolor(cursor_color);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setCursorBgColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setCursorFontColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 font_color, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setfontcolor(font_color);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setCursor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_vprintf(str, opt);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setCursorBgColor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_vprintf(str, opt);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_setCursorFontColor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setfontcolor(font_color);

    scr_vprintf(str, opt);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY(const char *str, u32 secs, int x, int y, ...)
{
    init_scr();

    scr_setXY(x, y);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_PutChar(const char* str, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setXY(width_x, height_y);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_setBgColor(const char* str, u32 secs, u32 bg_color, int x, int y, ...)
{
    init_scr();

    scr_setbgcolor(bg_color);

    scr_setXY(x, y);

    scr_printf(str);

    sleep(secs);

    scr_clear();    
}

void ps2_printf_XY_setFontColor(const char* str, u32 secs, u32 font_color, int x, int y, ...)
{
    init_scr();

    scr_setfontcolor(font_color);

    scr_setXY(x, y);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_setCursor(const char* str, int enable_cursor, u32 secs, int x, int y, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setXY(x, y);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_setCursorColor(const char* str, int enable_cursor, u32 secs, u32 color, int x, int y, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setcursorcolor(color);

    scr_setXY(x, y);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_setCursorBgColor(const char* str, int enable_cursor, u32 secs, u32 bg_color, int x, int y, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_setXY(x, y);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_setCursorFontColor(const char* str, int enable_cursor, u32 secs, u32 font_color, int x, int y, ...)
{
    init_scr();
    
    scr_setCursor(enable_cursor);

    scr_setbgcolor(font_color);

    scr_setXY(x, y);

    scr_printf(str);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_setCursor_PutChar(const char* str, int enable_cursor, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setXY(width_x, height_y);
    
    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);    

    scr_clear();
}

void ps2_printf_XY_setCursorColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 cursor_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setcursorcolor(cursor_color);

    scr_setXY(x, y);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_printf_XY_setCursorBgColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 bg_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_setXY(x, y);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();

}

void ps2_printf_XY_setCursorFontColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 font_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setfontcolor(font_color);

    scr_setXY(x, y);

    scr_printf(str);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY(const char *str, va_list opt, u32 secs, int x, int y, ...)
{
    init_scr();

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_PutChar(const char *str, va_list opt, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setBgColor(const char *str, va_list opt, u32 secs, u32 bg_color, int x, int y, ...)
{
    init_scr();

    scr_setbgcolor(bg_color);

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setFontColor(const char *str, va_list opt, u32 secs, u32 font_color, int x, int y, ...)
{
    init_scr();

    scr_setfontcolor(font_color);

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursor(const char *str, va_list opt, int enable_cursor, u32 secs, int x, int y, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursorColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 color, int x, int y, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setcursorcolor(color);

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursorBgColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, int x, int y, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursorFontColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int x, int y, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setfontcolor(font_color);

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursor_PutChar(const char *str, va_list opt, int enable_cursor, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setXY(x, y);

    scr_vprintf(str, opt);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursorColor_PutChar(const char *str, va_list opt, int enable_cursor, u32 secs, u32 cursor_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setcursorcolor(cursor_color);

    scr_setXY(width_x, height_y);

    scr_vprintf(str, opt);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursorBgColor_PutChar(const char *str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setbgcolor(bg_color);

    scr_setXY(width_x, height_y);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}

void ps2_vprintf_XY_setCursorFontColor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...)
{
    init_scr();

    scr_setCursor(enable_cursor);

    scr_setfontcolor(font_color);

    scr_setXY(width_x, height_y);

    scr_putchar(x, y, color, ch);

    sleep(secs);

    scr_clear();
}
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

#include <stdio.h>
#include <tamtypes.h>
#include <debug.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif



/*************************************************************************************
**************************************************************************************
* ps2_printf
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
**************************************************************************************
**************************************************************************************/
extern void ps2_printf(const char *str, u32 secs, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_PutChar
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_PutChar(const char* str, u32 secs, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setBgColor
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setBgColor(const char* str, u32 secs, u32 bg_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setBgColor
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setFontColor(const char* str, u32 secs, u32 font_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setBgColor_PutChar
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setBgColor_PutChar(const char* str, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...);


/*************************************************************************************
**************************************************************************************
* ps2_printf_setFontColor_PutChar
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setFontColor_PutChar(const char* str, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursor
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursor(const char* str, int enable_cursor, u32 secs, ...);


/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursorColor
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param cursor_color the cursor color
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursorColor(const char* str, int enable_cursor, u32 secs, u32 cursor_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursorBgColor
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursorBgColor(const char* str, int enable_cursor, u32 secs, u32 bg_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursorFontColor
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursorFontColor(const char* str, int enable_cursor, u32 secs, u32 font_color, ...);




/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursorPutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param color background color of the string 
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursorPutChar(const char* str, int enable_cursor, u32 secs, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursorPutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param cursor_color the cursor color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursorColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 cursor_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursorBgColor_PutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursorBgColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_setCursorBgColor_PutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_setCursorFontColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf(const char *str, va_list opt, u32 secs, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_putChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_putChar(const char *str, va_list opt, u32 secs, int x, int y, u32 color, int ch, ...);


/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setBgColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setbgColor(const char *str, va_list opt, u32 secs, u32 bg_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setBgColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setFontColor(const char *str, va_list opt, u32 secs, u32 font_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setCursor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setCursor(const char *str, va_list opt, int enable_cursor, u32 secs, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setBgColor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setBgColor_PutChar(const char *str, va_list opt, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setFontColor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setFontColor_PutChar(const char *str, va_list opt, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...);




/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setCursorColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param cursor_color the cursor color
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setCursorColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 cursor_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setCursorBgColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setCursorBgColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setCursorFontColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setCursorFontColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 font_color, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setCursor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setCursor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setCursorBg_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setCursorBgColor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_setCursorFontColor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_setCursorFontColor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY(const char *str, u32 secs, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_PutChar
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param width_x the x position of the cursor
* @param width_y the y position of the cursor
* @param x the x position of the string
* @param y the y position of the string
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_PutChar(const char* str, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setBgColor
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setBgColor(const char* str, u32 secs, u32 bg_color, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setFontColor
* @param str A string value to print the screen 
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setFontColor(const char* str, u32 secs, u32 font_color, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursor
* @param str A string value to print the screen
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param x the x position of the cursor
* @param y the y position of the curso
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursor(const char* str, int enable_cursor, u32 secs, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursorColor
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param color the color of string
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursorColor(const char* str, int enable_cursor, u32 secs, u32 color, int x, int y, ...);


/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursorBgColor
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursorBgColor(const char* str, int enable_cursor, u32 secs, u32 bg_color, int x, int y, ...);




/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursorFontColor
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursorFontColor(const char* str, int enable_cursor, u32 secs, u32 font_color, int x, int y, ...);




/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursor_PutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the char
* @param y the y position of the char
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursor_PutChar(const char* str, int enable_cursor, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursorColor_PutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param cursor_color the cursor color
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the char
* @param y the y position of the char
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursorColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 cursor_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursorBgColor_PutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the char
* @param y the y position of the char
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursorBgColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 bg_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_printf_XY_setCursorFomtColor_PutChar
* @param str A string value to print the screen 
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param fomt_color the font color
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the char
* @param y the y position of the char
* @param color the color of string
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_printf_XY_setCursorFontColor_PutChar(const char* str, int enable_cursor, u32 secs, u32 font_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY(const char *str, va_list opt, u32 secs, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param witdth_x the x position of the cursor
* @param height_y the y position of the cursor
* @param x the x position of the char
* @param y the y position of the char
* @param color the color of char
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_PutChar(const char *str, va_list opt, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setBgColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setBgColor(const char *str, va_list opt, u32 secs, u32 bg_color, int x, int y, ...);


/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setFontColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setFontColor(const char *str, va_list opt, u32 secs, u32 font_color, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursor(const char *str, va_list opt, int enable_cursor, u32 secs, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursorColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param color the color of string
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursorColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 color, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursorBgColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursorBgColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursorFontColor
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param x the x position of the cursor
* @param y the y position of the cursor
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursorFontColor(const char *str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int x, int y, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of char
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursor_PutChar(const char *str, va_list opt, int enable_cursor, u32 secs, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursorColor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param cursor_color the cursor color
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of char
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursorColor_PutChar(const char *str, va_list opt, int enable_cursor, u32 secs, u32 cursor_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursorBgColor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param bg_color the background color
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of char
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursorBgColor_PutChar(const char *str, va_list opt, int enable_cursor, u32 secs, u32 bg_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...);



/*************************************************************************************
**************************************************************************************
* ps2_vprintf_XY_setCursorFontColor_PutChar
* @param str A string value to print the screen 
* @param opt vpritntf list
* @param enable_cursor enables the cursor with 1
* @param secs time when the screen is showing up before shutdowns
* @param font_color the font color
* @param width_x the position of the cursor
* @param height_y the position of the cursor
* @param x the x position of the cursor
* @param y the y position of the cursor
* @param color the color of char
* @param ch the char value
**************************************************************************************
**************************************************************************************/
extern void ps2_vprintf_XY_setCursorFontColor_PutChar(const char* str, va_list opt, int enable_cursor, u32 secs, u32 font_color, int width_x, int height_y, int x, int y, u32 color, int ch, ...);

#ifdef __cplusplus
}
#endif
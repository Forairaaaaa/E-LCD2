/**
 * @file lv_port_disp_templ.h
 *
 */

 /*Copy this file as "lv_port_disp.h" and set this value to "1" to enable content*/
#if 1

#ifndef LV_PORT_DISP_TEMPL_H
#define LV_PORT_DISP_TEMPL_H

// #ifdef __cplusplus
// extern "C" {
// #endif

/*********************
 *      INCLUDES
 *********************/
// #include "lvgl/lvgl.h"

/* LVGL */
#include <lvgl.h>
/* LCD basic driver */
#include <TFT_eSPI.h>

/*********************
 *      DEFINES
 *********************/

/* LCD rotation */
#define LCD_ROTATION 1

/* LCD RES */
#if LCD_ROTATION == 0
    #define MY_DISP_HOR_RES 240
    #define MY_DISP_VER_RES 320
#endif
#if LCD_ROTATION == 1
    #define MY_DISP_HOR_RES 320
    #define MY_DISP_VER_RES 240
#endif
#if LCD_ROTATION == 2
    #define MY_DISP_HOR_RES 240
    #define MY_DISP_VER_RES 320
#endif
#if LCD_ROTATION == 3
    #define MY_DISP_HOR_RES 320
    #define MY_DISP_VER_RES 240
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void lv_port_disp_init(void);

/**********************
 *      MACROS
 **********************/


// #ifdef __cplusplus
// } /*extern "C"*/
// #endif

#endif /*LV_PORT_DISP_TEMPL_H*/

#endif /*Disable/Enable content*/

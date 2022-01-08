
/**
 * @file lv_port_indev_templ.h
 *
 */

 /*Copy this file as "lv_port_indev.h" and set this value to "1" to enable content*/
#if 1

#ifndef LV_PORT_INDEV_TEMPL_H
#define LV_PORT_INDEV_TEMPL_H

// #ifdef __cplusplus
// extern "C" {
// #endif

/*********************
 *      INCLUDES
 *********************/
// #include "lvgl/lvgl.h"
#include <lvgl.h>
#include <Arduino.h>
/*********************
 *      DEFINES
 *********************/

/* Keys setup */
#define KeyA_Pin 13
#define KeyB_Pin 2
#define KeyC_Pin 15
#define getKeyA digitalRead(KeyA_Pin)
#define getKeyB digitalRead(KeyB_Pin)
#define getKeyC digitalRead(KeyC_Pin)


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_port_indev_init(void);
/**********************
 *      MACROS
 **********************/

// #ifdef __cplusplus
// } /*extern "C"*/
// #endif

#endif /*LV_PORT_INDEV_TEMPL_H*/

#endif /*Disable/Enable content*/

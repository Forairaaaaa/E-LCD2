#include <Arduino.h>
/* LVGL include */
#include <lvgl.h>
#include <lv_port_disp.h>
#include <lv_port_indev.h>
/* LVGL demo */
#include <lv_demo.h>

/* main setup */
void setup()
{
    /* LVGL init */
    lv_init();
    lv_port_disp_init();
    lv_port_indev_init();

    // lv_demo_benchmark();
    // lv_demo_stress();
    // lv_demo_music();
    lv_demo_keypad_encoder();
    /* lv_demo_widgets 会报错：LoadProhibited，不知是否与 PSRAM 有关 */
    // lv_demo_widgets();
}


/* main loop */
void loop()
{
    /* let the GUI do its work */
    lv_timer_handler();
    delay(5);
}

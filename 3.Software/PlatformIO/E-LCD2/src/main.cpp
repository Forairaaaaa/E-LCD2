#include <Arduino.h>
/* LVGL setup */
#include <lvgl.h>
#include <lv_port_disp.h>
#include <lv_port_indev.h>
/* LVGL demo */
#include <lv_demo.h>

/* main setup */
void setup()
{
    lv_init();
    lv_port_disp_init();
    lv_port_indev_init();

    // lv_demo_benchmark();
    // lv_demo_stress();
    // lv_demo_music();
    lv_demo_keypad_encoder();

}


/* main loop */
void loop()
{
    /* let the GUI do its work */
    lv_timer_handler();
    delay(5);
}
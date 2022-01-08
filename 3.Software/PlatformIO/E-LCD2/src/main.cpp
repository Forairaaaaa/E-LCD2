#include <Arduino.h>
/* LVGL include */
#include <lvgl.h>
#include <lv_port_disp.h>
#include <lv_port_indev.h>
/* LVGL demo */
#include <lv_demo.h>

static lv_group_t*  g;

void lv_encoder_setup(void)
{
    g = lv_group_create();
    lv_group_set_default(g);

    lv_indev_t* cur_drv = NULL;
    for (;;) {
        cur_drv = lv_indev_get_next(cur_drv);
        if (!cur_drv) {
            break;
        }
        if (cur_drv->driver->type == LV_INDEV_TYPE_ENCODER) {
                lv_indev_set_group(cur_drv, g);
            }
    }
}

static void event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if(code == LV_EVENT_CLICKED) {
        LV_LOG_USER("Clicked");
    }
    else if(code == LV_EVENT_VALUE_CHANGED) {
        LV_LOG_USER("Toggled");
    }
}

void lv_example_btn_1(void)
{
    lv_obj_t * label;

    lv_obj_t * btn1 = lv_btn_create(lv_scr_act());
    lv_obj_add_event_cb(btn1, event_handler, LV_EVENT_ALL, NULL);
    lv_obj_align(btn1, LV_ALIGN_CENTER, 0, -40);

    label = lv_label_create(btn1);
    lv_label_set_text(label, "Button");
    lv_obj_center(label);

    lv_obj_t * btn2 = lv_btn_create(lv_scr_act());
    lv_obj_add_event_cb(btn2, event_handler, LV_EVENT_ALL, NULL);
    lv_obj_align(btn2, LV_ALIGN_CENTER, 0, 40);
    lv_obj_add_flag(btn2, LV_OBJ_FLAG_CHECKABLE);
    lv_obj_set_height(btn2, LV_SIZE_CONTENT);

    label = lv_label_create(btn2);
    lv_label_set_text(label, "Toggle");
    lv_obj_center(label);

    lv_group_add_obj(g, btn1);
    lv_group_add_obj(g, btn2);
}

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
    // lv_demo_keypad_encoder();
    /* lv_demo_widgets 会报错：LoadProhibited，不知是否与 PSRAM 有关 */
    // lv_demo_widgets();

    lv_encoder_setup();
    lv_example_btn_1();
}


/* main loop */
void loop()
{
    /* let the GUI do its work */
    lv_timer_handler();
    delay(5);
}

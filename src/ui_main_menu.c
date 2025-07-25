#include "ui.h"

void ui_MainMenu_screen_init(void)
{
    ui_MainMenu = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MainMenu, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MainMenu, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainMenu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpButton1 = lv_btn_create(ui_MainMenu);
    lv_obj_set_width(ui_PumpButton1, 195);
    lv_obj_set_height(ui_PumpButton1, 50);
    lv_obj_set_x(ui_PumpButton1, 1);
    lv_obj_set_y(ui_PumpButton1, -75);
    lv_obj_set_align(ui_PumpButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PumpButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PumpButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PumpButton1, lv_color_hex(0x0FE4CA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PumpButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpLabel1 = lv_label_create(ui_MainMenu);
    lv_obj_set_width(ui_PumpLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PumpLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PumpLabel1, 2);
    lv_obj_set_y(ui_PumpLabel1, -74);
    lv_obj_set_align(ui_PumpLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PumpLabel1, "Pump 1");
    lv_obj_set_style_text_color(ui_PumpLabel1, lv_color_hex(0x040000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PumpLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpButton2 = lv_btn_create(ui_MainMenu);
    lv_obj_set_width(ui_PumpButton2, 195);
    lv_obj_set_height(ui_PumpButton2, 50);
    lv_obj_set_x(ui_PumpButton2, 0);
    lv_obj_set_y(ui_PumpButton2, -4);
    lv_obj_set_align(ui_PumpButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PumpButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PumpButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PumpButton2, lv_color_hex(0x0FE4CA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PumpButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpButton3 = lv_btn_create(ui_MainMenu);
    lv_obj_set_width(ui_PumpButton3, 195);
    lv_obj_set_height(ui_PumpButton3, 50);
    lv_obj_set_x(ui_PumpButton3, -1);
    lv_obj_set_y(ui_PumpButton3, 71);
    lv_obj_set_align(ui_PumpButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PumpButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PumpButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PumpButton3, lv_color_hex(0x0FE4CA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PumpButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpLabel2 = lv_label_create(ui_MainMenu);
    lv_obj_set_width(ui_PumpLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PumpLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PumpLabel2, 1);
    lv_obj_set_y(ui_PumpLabel2, -4);
    lv_obj_set_align(ui_PumpLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PumpLabel2, "Pump 2");
    lv_obj_set_style_text_color(ui_PumpLabel2, lv_color_hex(0x040000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PumpLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpLabel3 = lv_label_create(ui_MainMenu);
    lv_obj_set_width(ui_PumpLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PumpLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PumpLabel3, 1);
    lv_obj_set_y(ui_PumpLabel3, 70);
    lv_obj_set_align(ui_PumpLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PumpLabel3, "Pump 3");
    lv_obj_set_style_text_color(ui_PumpLabel3, lv_color_hex(0x040000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PumpLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalibrateButton = lv_btn_create(ui_MainMenu);
    lv_obj_set_width(ui_CalibrateButton, 85);
    lv_obj_set_height(ui_CalibrateButton, 35);
    lv_obj_set_x(ui_CalibrateButton, -175);
    lv_obj_set_y(ui_CalibrateButton, 125);
    lv_obj_set_align(ui_CalibrateButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CalibrateButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_CalibrateButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_CalibrateButton, lv_color_hex(0xF034D9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CalibrateButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalibrateLabel = lv_label_create(ui_MainMenu);
    lv_obj_set_width(ui_CalibrateLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CalibrateLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CalibrateLabel, -175);
    lv_obj_set_y(ui_CalibrateLabel, 125);
    lv_obj_set_align(ui_CalibrateLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CalibrateLabel, "Calibrate");
    lv_obj_set_style_text_color(ui_CalibrateLabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CalibrateLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ManualButton = lv_btn_create(ui_MainMenu);
    lv_obj_set_width(ui_ManualButton, 85);
    lv_obj_set_height(ui_ManualButton, 35);
    lv_obj_set_x(ui_ManualButton, 175);
    lv_obj_set_y(ui_ManualButton, 125);
    lv_obj_set_align(ui_ManualButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ManualButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ManualButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ManualButton, lv_color_hex(0xF034D9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ManualButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ManualLabel = lv_label_create(ui_MainMenu);
    lv_obj_set_width(ui_ManualLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ManualLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ManualLabel, 175);
    lv_obj_set_y(ui_ManualLabel, 125);
    lv_obj_set_align(ui_ManualLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ManualLabel, "Manual");
    lv_obj_set_style_text_color(ui_ManualLabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ManualLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_PumpButton1, ui_event_PumpButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PumpButton2, ui_event_PumpButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PumpButton3, ui_event_PumpButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CalibrateButton, ui_event_CalibrateButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ManualButton, ui_event_ManualButton, LV_EVENT_ALL, NULL);

}

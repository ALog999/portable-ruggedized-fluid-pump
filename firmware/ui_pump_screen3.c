#include "ui.h"

void ui_PumpScreen3_screen_init(void)
{
    ui_PumpScreen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PumpScreen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_FlowRate3 = lv_textarea_create(ui_PumpScreen3);
    lv_obj_set_width(ui_FlowRate3, 195);
    lv_obj_set_height(ui_FlowRate3, 48);
    lv_obj_set_x(ui_FlowRate3, -5);
    lv_obj_set_y(ui_FlowRate3, -125);
    lv_obj_set_align(ui_FlowRate3, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_FlowRate3, "flow rate i.e. 150 (in mL) ");
    lv_obj_add_state(ui_FlowRate3, LV_STATE_FOCUSED);       /// States
    lv_obj_set_style_border_color(ui_FlowRate3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_FlowRate3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeButton3 = lv_btn_create(ui_PumpScreen3);
    lv_obj_set_width(ui_VolumeButton3, 115);
    lv_obj_set_height(ui_VolumeButton3, 34);
    lv_obj_set_x(ui_VolumeButton3, -180);
    lv_obj_set_y(ui_VolumeButton3, 100);
    lv_obj_set_align(ui_VolumeButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VolumeButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_VolumeButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_VolumeButton3, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VolumeButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DOTButton3 = lv_btn_create(ui_PumpScreen3);
    lv_obj_set_width(ui_DOTButton3, 115);
    lv_obj_set_height(ui_DOTButton3, 40);
    lv_obj_set_x(ui_DOTButton3, 0);
    lv_obj_set_y(ui_DOTButton3, 100);
    lv_obj_set_align(ui_DOTButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_DOTButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_DOTButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_DOTButton3, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DOTButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DCButton3 = lv_btn_create(ui_PumpScreen3);
    lv_obj_set_width(ui_DCButton3, 115);
    lv_obj_set_height(ui_DCButton3, 35);
    lv_obj_set_x(ui_DCButton3, 180);
    lv_obj_set_y(ui_DCButton3, 99);
    lv_obj_set_align(ui_DCButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_DCButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_DCButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_DCButton3, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DCButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeLabel3 = lv_label_create(ui_PumpScreen3);
    lv_obj_set_width(ui_VolumeLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VolumeLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VolumeLabel3, -180);
    lv_obj_set_y(ui_VolumeLabel3, 100);
    lv_obj_set_align(ui_VolumeLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_VolumeLabel3, "VOLUME");
    lv_obj_set_style_text_color(ui_VolumeLabel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VolumeLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DOTLabel3 = lv_label_create(ui_PumpScreen3);
    lv_obj_set_width(ui_DOTLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DOTLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DOTLabel3, 0);
    lv_obj_set_y(ui_DOTLabel3, 100);
    lv_obj_set_align(ui_DOTLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DOTLabel3, " DISPENSE \nOVER TIME");
    lv_obj_set_style_text_color(ui_DOTLabel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DOTLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DCLabel3 = lv_label_create(ui_PumpScreen3);
    lv_obj_set_width(ui_DCLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DCLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DCLabel3, 180);
    lv_obj_set_y(ui_DCLabel3, 100);
    lv_obj_set_align(ui_DCLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DCLabel3, "CONSTANT");
    lv_obj_set_style_text_color(ui_DCLabel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DCLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButton3 = lv_btn_create(ui_PumpScreen3);
    lv_obj_set_width(ui_StopButton3, 70);
    lv_obj_set_height(ui_StopButton3, 30);
    lv_obj_set_x(ui_StopButton3, -185);
    lv_obj_set_y(ui_StopButton3, -130);
    lv_obj_set_align(ui_StopButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_StopButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_StopButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_StopButton3, lv_color_hex(0xED3D3D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StopButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButtonLabel3 = lv_label_create(ui_PumpScreen3);
    lv_obj_set_width(ui_StopButtonLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_StopButtonLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_StopButtonLabel3, -185);
    lv_obj_set_y(ui_StopButtonLabel3, -130);
    lv_obj_set_align(ui_StopButtonLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_StopButtonLabel3, "STOP");
    lv_obj_set_style_text_color(ui_StopButtonLabel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StopButtonLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_StopButtonLabel3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard3 = lv_keyboard_create(ui_PumpScreen3);
    lv_keyboard_set_mode(ui_Keyboard3, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_Keyboard3, 335);
    lv_obj_set_height(ui_Keyboard3, 155);
    lv_obj_set_x(ui_Keyboard3, 0);
    lv_obj_set_y(ui_Keyboard3, -15);
    lv_obj_set_align(ui_Keyboard3, LV_ALIGN_CENTER);

    ui_MainMenuButton3 = lv_btn_create(ui_PumpScreen3);
    lv_obj_set_width(ui_MainMenuButton3, 125);
    lv_obj_set_height(ui_MainMenuButton3, 25);
    lv_obj_set_x(ui_MainMenuButton3, 0);
    lv_obj_set_y(ui_MainMenuButton3, 145);
    lv_obj_set_align(ui_MainMenuButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MainMenuButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MainMenuButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MainMenuButton3, lv_color_hex(0x4EEA6D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainMenuButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MainMenuLabel3 = lv_label_create(ui_PumpScreen3);
    lv_obj_set_width(ui_MainMenuLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MainMenuLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MainMenuLabel3, 0);
    lv_obj_set_y(ui_MainMenuLabel3, 145);
    lv_obj_set_align(ui_MainMenuLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MainMenuLabel3, "Main Menu");

    ui_PauseButton3 = lv_btn_create(ui_PumpScreen3);
    lv_obj_set_width(ui_PauseButton3, 70);
    lv_obj_set_height(ui_PauseButton3, 30);
    lv_obj_set_x(ui_PauseButton3, 185);
    lv_obj_set_y(ui_PauseButton3, -130);
    lv_obj_set_align(ui_PauseButton3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PauseButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PauseButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PauseButton3, lv_color_hex(0xD3F40C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PauseButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PauseLabel3 = lv_label_create(ui_PumpScreen3);
    lv_obj_set_width(ui_PauseLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PauseLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PauseLabel3, 185);
    lv_obj_set_y(ui_PauseLabel3, -130);
    lv_obj_set_align(ui_PauseLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PauseLabel3, "PAUSE");
    lv_obj_set_style_text_color(ui_PauseLabel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PauseLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpScreenLabel3 = lv_label_create(ui_PumpScreen3);
    lv_obj_set_width(ui_PumpScreenLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PumpScreenLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PumpScreenLabel3, 180);
    lv_obj_set_y(ui_PumpScreenLabel3, 140);
    lv_obj_set_align(ui_PumpScreenLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PumpScreenLabel3, "PUMP THREE");
    lv_obj_set_style_text_color(ui_PumpScreenLabel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PumpScreenLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_FlowRate3, ui_event_FlowRate3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_VolumeButton3, ui_event_VolumeButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DOTButton3, ui_event_DOTButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DCButton3, ui_event_DCButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StopButton3, ui_event_StopButton3, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard3, ui_FlowRate3);
    lv_obj_add_event_cb(ui_MainMenuButton3, ui_event_MainMenuButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseButton3, ui_event_PauseButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseLabel3, ui_event_PauseLabel3, LV_EVENT_ALL, NULL);

}

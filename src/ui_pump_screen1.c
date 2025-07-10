#include "ui.h"

void ui_PumpScreen1_screen_init(void)
{
    ui_PumpScreen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PumpScreen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_FlowRate1 = lv_textarea_create(ui_PumpScreen1);
    lv_obj_set_width(ui_FlowRate1, 195);
    lv_obj_set_height(ui_FlowRate1, 48);
    lv_obj_set_x(ui_FlowRate1, -5);
    lv_obj_set_y(ui_FlowRate1, -125);
    lv_obj_set_align(ui_FlowRate1, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_FlowRate1, "flow rate i.e. 150 (in mL) ");
    lv_obj_add_state(ui_FlowRate1, LV_STATE_FOCUSED);       /// States
    lv_obj_set_style_border_color(ui_FlowRate1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_FlowRate1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeButton1 = lv_btn_create(ui_PumpScreen1);
    lv_obj_set_width(ui_VolumeButton1, 115);
    lv_obj_set_height(ui_VolumeButton1, 34);
    lv_obj_set_x(ui_VolumeButton1, -180);
    lv_obj_set_y(ui_VolumeButton1, 100);
    lv_obj_set_align(ui_VolumeButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VolumeButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_VolumeButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_VolumeButton1, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VolumeButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DOTButton1 = lv_btn_create(ui_PumpScreen1);
    lv_obj_set_width(ui_DOTButton1, 115);
    lv_obj_set_height(ui_DOTButton1, 40);
    lv_obj_set_x(ui_DOTButton1, 0);
    lv_obj_set_y(ui_DOTButton1, 100);
    lv_obj_set_align(ui_DOTButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_DOTButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_DOTButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_DOTButton1, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DOTButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DCButton1 = lv_btn_create(ui_PumpScreen1);
    lv_obj_set_width(ui_DCButton1, 115);
    lv_obj_set_height(ui_DCButton1, 35);
    lv_obj_set_x(ui_DCButton1, 180);
    lv_obj_set_y(ui_DCButton1, 99);
    lv_obj_set_align(ui_DCButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_DCButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_DCButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_DCButton1, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DCButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeLabel1 = lv_label_create(ui_PumpScreen1);
    lv_obj_set_width(ui_VolumeLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VolumeLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VolumeLabel1, -180);
    lv_obj_set_y(ui_VolumeLabel1, 100);
    lv_obj_set_align(ui_VolumeLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_VolumeLabel1, "VOLUME");
    lv_obj_set_style_text_color(ui_VolumeLabel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VolumeLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DOTLabel1 = lv_label_create(ui_PumpScreen1);
    lv_obj_set_width(ui_DOTLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DOTLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DOTLabel1, 0);
    lv_obj_set_y(ui_DOTLabel1, 100);
    lv_obj_set_align(ui_DOTLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DOTLabel1, " DISPENSE \nOVER TIME");
    lv_obj_set_style_text_color(ui_DOTLabel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DOTLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DCLabel1 = lv_label_create(ui_PumpScreen1);
    lv_obj_set_width(ui_DCLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DCLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DCLabel1, 180);
    lv_obj_set_y(ui_DCLabel1, 100);
    lv_obj_set_align(ui_DCLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DCLabel1, "CONSTANT");
    lv_obj_set_style_text_color(ui_DCLabel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DCLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButton1 = lv_btn_create(ui_PumpScreen1);
    lv_obj_set_width(ui_StopButton1, 70);
    lv_obj_set_height(ui_StopButton1, 30);
    lv_obj_set_x(ui_StopButton1, -185);
    lv_obj_set_y(ui_StopButton1, -130);
    lv_obj_set_align(ui_StopButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_StopButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_StopButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_StopButton1, lv_color_hex(0xED3D3D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StopButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButtonLabel1 = lv_label_create(ui_PumpScreen1);
    lv_obj_set_width(ui_StopButtonLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_StopButtonLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_StopButtonLabel1, -185);
    lv_obj_set_y(ui_StopButtonLabel1, -130);
    lv_obj_set_align(ui_StopButtonLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_StopButtonLabel1, "STOP");
    lv_obj_set_style_text_color(ui_StopButtonLabel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StopButtonLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_StopButtonLabel1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard1 = lv_keyboard_create(ui_PumpScreen1);
    lv_keyboard_set_mode(ui_Keyboard1, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_Keyboard1, 335);
    lv_obj_set_height(ui_Keyboard1, 155);
    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, -15);
    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    ui_MainMenuButton1 = lv_btn_create(ui_PumpScreen1);
    lv_obj_set_width(ui_MainMenuButton1, 125);
    lv_obj_set_height(ui_MainMenuButton1, 25);
    lv_obj_set_x(ui_MainMenuButton1, 0);
    lv_obj_set_y(ui_MainMenuButton1, 145);
    lv_obj_set_align(ui_MainMenuButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MainMenuButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MainMenuButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MainMenuButton1, lv_color_hex(0x4EEA6D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainMenuButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MainMenuLabel1 = lv_label_create(ui_PumpScreen1);
    lv_obj_set_width(ui_MainMenuLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MainMenuLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MainMenuLabel1, 0);
    lv_obj_set_y(ui_MainMenuLabel1, 145);
    lv_obj_set_align(ui_MainMenuLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MainMenuLabel1, "Main Menu");

    ui_PauseButton1 = lv_btn_create(ui_PumpScreen1);
    lv_obj_set_width(ui_PauseButton1, 70);
    lv_obj_set_height(ui_PauseButton1, 30);
    lv_obj_set_x(ui_PauseButton1, 185);
    lv_obj_set_y(ui_PauseButton1, -130);
    lv_obj_set_align(ui_PauseButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PauseButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PauseButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PauseButton1, lv_color_hex(0xD3F40C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PauseButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PauseLabel1 = lv_label_create(ui_PumpScreen1);
    lv_obj_set_width(ui_PauseLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PauseLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PauseLabel1, 185);
    lv_obj_set_y(ui_PauseLabel1, -130);
    lv_obj_set_align(ui_PauseLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PauseLabel1, "PAUSE");
    lv_obj_set_style_text_color(ui_PauseLabel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PauseLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpScreenLabel1 = lv_label_create(ui_PumpScreen1);
    lv_obj_set_width(ui_PumpScreenLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PumpScreenLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PumpScreenLabel1, 180);
    lv_obj_set_y(ui_PumpScreenLabel1, 140);
    lv_obj_set_align(ui_PumpScreenLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PumpScreenLabel1, "PUMP ONE");
    lv_obj_set_style_text_color(ui_PumpScreenLabel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PumpScreenLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_FlowRate1, ui_event_FlowRate1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_VolumeButton1, ui_event_VolumeButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DOTButton1, ui_event_DOTButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DCButton1, ui_event_DCButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StopButton1, ui_event_StopButton1, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard1, ui_FlowRate1);
    lv_obj_add_event_cb(ui_MainMenuButton1, ui_event_MainMenuButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseButton1, ui_event_PauseButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseLabel1, ui_event_PauseLabel1, LV_EVENT_ALL, NULL);

}

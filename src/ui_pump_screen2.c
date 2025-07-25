#include "ui.h"

void ui_PumpScreen2_screen_init(void)
{
    ui_PumpScreen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PumpScreen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_FlowRate2 = lv_textarea_create(ui_PumpScreen2);
    lv_obj_set_width(ui_FlowRate2, 195);
    lv_obj_set_height(ui_FlowRate2, 48);
    lv_obj_set_x(ui_FlowRate2, -5);
    lv_obj_set_y(ui_FlowRate2, -125);
    lv_obj_set_align(ui_FlowRate2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_FlowRate2, "flow rate i.e. 150 (in mL) ");
    lv_obj_add_state(ui_FlowRate2, LV_STATE_FOCUSED);       /// States
    lv_obj_set_style_border_color(ui_FlowRate2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_FlowRate2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeButton2 = lv_btn_create(ui_PumpScreen2);
    lv_obj_set_width(ui_VolumeButton2, 115);
    lv_obj_set_height(ui_VolumeButton2, 34);
    lv_obj_set_x(ui_VolumeButton2, -180);
    lv_obj_set_y(ui_VolumeButton2, 100);
    lv_obj_set_align(ui_VolumeButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VolumeButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_VolumeButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_VolumeButton2, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VolumeButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DOTButton2 = lv_btn_create(ui_PumpScreen2);
    lv_obj_set_width(ui_DOTButton2, 115);
    lv_obj_set_height(ui_DOTButton2, 40);
    lv_obj_set_x(ui_DOTButton2, 0);
    lv_obj_set_y(ui_DOTButton2, 100);
    lv_obj_set_align(ui_DOTButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_DOTButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_DOTButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_DOTButton2, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DOTButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DCButton2 = lv_btn_create(ui_PumpScreen2);
    lv_obj_set_width(ui_DCButton2, 115);
    lv_obj_set_height(ui_DCButton2, 35);
    lv_obj_set_x(ui_DCButton2, 180);
    lv_obj_set_y(ui_DCButton2, 99);
    lv_obj_set_align(ui_DCButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_DCButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_DCButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_DCButton2, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DCButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeLabel2 = lv_label_create(ui_PumpScreen2);
    lv_obj_set_width(ui_VolumeLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VolumeLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VolumeLabel2, -180);
    lv_obj_set_y(ui_VolumeLabel2, 100);
    lv_obj_set_align(ui_VolumeLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_VolumeLabel2, "VOLUME");
    lv_obj_set_style_text_color(ui_VolumeLabel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VolumeLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DOTLabel2 = lv_label_create(ui_PumpScreen2);
    lv_obj_set_width(ui_DOTLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DOTLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DOTLabel2, 0);
    lv_obj_set_y(ui_DOTLabel2, 100);
    lv_obj_set_align(ui_DOTLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DOTLabel2, " DISPENSE \nOVER TIME");
    lv_obj_set_style_text_color(ui_DOTLabel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DOTLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DCLabel2 = lv_label_create(ui_PumpScreen2);
    lv_obj_set_width(ui_DCLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DCLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DCLabel2, 180);
    lv_obj_set_y(ui_DCLabel2, 100);
    lv_obj_set_align(ui_DCLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DCLabel2, "CONSTANT");
    lv_obj_set_style_text_color(ui_DCLabel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DCLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButton2 = lv_btn_create(ui_PumpScreen2);
    lv_obj_set_width(ui_StopButton2, 70);
    lv_obj_set_height(ui_StopButton2, 30);
    lv_obj_set_x(ui_StopButton2, -185);
    lv_obj_set_y(ui_StopButton2, -130);
    lv_obj_set_align(ui_StopButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_StopButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_StopButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_StopButton2, lv_color_hex(0xED3D3D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StopButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButtonLabel2 = lv_label_create(ui_PumpScreen2);
    lv_obj_set_width(ui_StopButtonLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_StopButtonLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_StopButtonLabel2, -185);
    lv_obj_set_y(ui_StopButtonLabel2, -130);
    lv_obj_set_align(ui_StopButtonLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_StopButtonLabel2, "STOP");
    lv_obj_set_style_text_color(ui_StopButtonLabel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StopButtonLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_StopButtonLabel2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard2 = lv_keyboard_create(ui_PumpScreen2);
    lv_keyboard_set_mode(ui_Keyboard2, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_Keyboard2, 335);
    lv_obj_set_height(ui_Keyboard2, 155);
    lv_obj_set_x(ui_Keyboard2, 0);
    lv_obj_set_y(ui_Keyboard2, -15);
    lv_obj_set_align(ui_Keyboard2, LV_ALIGN_CENTER);

    ui_MainMenuButton2 = lv_btn_create(ui_PumpScreen2);
    lv_obj_set_width(ui_MainMenuButton2, 125);
    lv_obj_set_height(ui_MainMenuButton2, 25);
    lv_obj_set_x(ui_MainMenuButton2, 0);
    lv_obj_set_y(ui_MainMenuButton2, 145);
    lv_obj_set_align(ui_MainMenuButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MainMenuButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MainMenuButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MainMenuButton2, lv_color_hex(0x4EEA6D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainMenuButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MainMenuLabel2 = lv_label_create(ui_PumpScreen2);
    lv_obj_set_width(ui_MainMenuLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MainMenuLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MainMenuLabel2, 0);
    lv_obj_set_y(ui_MainMenuLabel2, 145);
    lv_obj_set_align(ui_MainMenuLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MainMenuLabel2, "Main Menu");

    ui_PauseButton2 = lv_btn_create(ui_PumpScreen2);
    lv_obj_set_width(ui_PauseButton2, 70);
    lv_obj_set_height(ui_PauseButton2, 30);
    lv_obj_set_x(ui_PauseButton2, 185);
    lv_obj_set_y(ui_PauseButton2, -130);
    lv_obj_set_align(ui_PauseButton2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PauseButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PauseButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PauseButton2, lv_color_hex(0xD3F40C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PauseButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PauseLabel2 = lv_label_create(ui_PumpScreen2);
    lv_obj_set_width(ui_PauseLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PauseLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PauseLabel2, 185);
    lv_obj_set_y(ui_PauseLabel2, -130);
    lv_obj_set_align(ui_PauseLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PauseLabel2, "PAUSE");
    lv_obj_set_style_text_color(ui_PauseLabel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PauseLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PumpScreenLabel2 = lv_label_create(ui_PumpScreen2);
    lv_obj_set_width(ui_PumpScreenLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PumpScreenLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PumpScreenLabel2, 180);
    lv_obj_set_y(ui_PumpScreenLabel2, 140);
    lv_obj_set_align(ui_PumpScreenLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PumpScreenLabel2, "PUMP TWO");
    lv_obj_set_style_text_color(ui_PumpScreenLabel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PumpScreenLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_FlowRate2, ui_event_FlowRate2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_VolumeButton2, ui_event_VolumeButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DOTButton2, ui_event_DOTButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DCButton2, ui_event_DCButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StopButton2, ui_event_StopButton2, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard2, ui_FlowRate2);
    lv_obj_add_event_cb(ui_MainMenuButton2, ui_event_MainMenuButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseButton2, ui_event_PauseButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseLabel2, ui_event_PauseLabel2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PumpScreen2, ui_event_PumpScreen2, LV_EVENT_ALL, NULL);

}

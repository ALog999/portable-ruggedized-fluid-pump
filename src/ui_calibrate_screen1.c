#include "ui.h"

void ui_CalibrateScreen1_screen_init(void)
{
    ui_CalibrateScreen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_CalibrateScreen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_FlowRate4 = lv_textarea_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_FlowRate4, 195);
    lv_obj_set_height(ui_FlowRate4, 48);
    lv_obj_set_x(ui_FlowRate4, -5);
    lv_obj_set_y(ui_FlowRate4, -125);
    lv_obj_set_align(ui_FlowRate4, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_FlowRate4, "flow rate i.e. 150 (in mL) ");
    lv_obj_add_state(ui_FlowRate4, LV_STATE_FOCUSED);       /// States
    lv_obj_set_style_border_color(ui_FlowRate4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_FlowRate4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeButton4 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_VolumeButton4, 65);
    lv_obj_set_height(ui_VolumeButton4, 35);
    lv_obj_set_x(ui_VolumeButton4, -205);
    lv_obj_set_y(ui_VolumeButton4, -21);
    lv_obj_set_align(ui_VolumeButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_VolumeButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_VolumeButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_VolumeButton4, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_VolumeButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalibrateButton1 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalibrateButton1, 65);
    lv_obj_set_height(ui_CalibrateButton1, 35);
    lv_obj_set_x(ui_CalibrateButton1, 205);
    lv_obj_set_y(ui_CalibrateButton1, -20);
    lv_obj_set_align(ui_CalibrateButton1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CalibrateButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_CalibrateButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_CalibrateButton1, lv_color_hex(0x40B5FC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CalibrateButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VolumeLabel4 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_VolumeLabel4, 65);
    lv_obj_set_height(ui_VolumeLabel4, 20);
    lv_obj_set_x(ui_VolumeLabel4, -205);
    lv_obj_set_y(ui_VolumeLabel4, -20);
    lv_obj_set_align(ui_VolumeLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_VolumeLabel4, "VOLUME");
    lv_obj_set_style_text_color(ui_VolumeLabel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_VolumeLabel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalibrateLabel1 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalibrateLabel1, 45);
    lv_obj_set_height(ui_CalibrateLabel1, 35);
    lv_obj_set_x(ui_CalibrateLabel1, 205);
    lv_obj_set_y(ui_CalibrateLabel1, -20);
    lv_obj_set_align(ui_CalibrateLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CalibrateLabel1, "CALIBRATE");
    lv_obj_set_style_text_color(ui_CalibrateLabel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CalibrateLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButton4 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_StopButton4, 70);
    lv_obj_set_height(ui_StopButton4, 30);
    lv_obj_set_x(ui_StopButton4, -185);
    lv_obj_set_y(ui_StopButton4, -130);
    lv_obj_set_align(ui_StopButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_StopButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_StopButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_StopButton4, lv_color_hex(0xED3D3D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StopButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StopButtonLabel4 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_StopButtonLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_StopButtonLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_StopButtonLabel4, -185);
    lv_obj_set_y(ui_StopButtonLabel4, -130);
    lv_obj_set_align(ui_StopButtonLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_StopButtonLabel4, "STOP");
    lv_obj_set_style_text_color(ui_StopButtonLabel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StopButtonLabel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_StopButtonLabel4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard4 = lv_keyboard_create(ui_CalibrateScreen1);
    lv_keyboard_set_mode(ui_Keyboard4, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_Keyboard4, 335);
    lv_obj_set_height(ui_Keyboard4, 155);
    lv_obj_set_x(ui_Keyboard4, 0);
    lv_obj_set_y(ui_Keyboard4, -15);
    lv_obj_set_align(ui_Keyboard4, LV_ALIGN_CENTER);

    ui_MainMenuButton4 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_MainMenuButton4, 125);
    lv_obj_set_height(ui_MainMenuButton4, 25);
    lv_obj_set_x(ui_MainMenuButton4, 0);
    lv_obj_set_y(ui_MainMenuButton4, 145);
    lv_obj_set_align(ui_MainMenuButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MainMenuButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MainMenuButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MainMenuButton4, lv_color_hex(0x4EEA6D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainMenuButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PauseButton4 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_PauseButton4, 70);
    lv_obj_set_height(ui_PauseButton4, 30);
    lv_obj_set_x(ui_PauseButton4, 185);
    lv_obj_set_y(ui_PauseButton4, -130);
    lv_obj_set_align(ui_PauseButton4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PauseButton4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PauseButton4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PauseButton4, lv_color_hex(0xD3F40C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PauseButton4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PauseLabel4 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_PauseLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PauseLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PauseLabel4, 185);
    lv_obj_set_y(ui_PauseLabel4, -130);
    lv_obj_set_align(ui_PauseLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PauseLabel4, "PAUSE");
    lv_obj_set_style_text_color(ui_PauseLabel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PauseLabel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalP1Button1 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalP1Button1, 145);
    lv_obj_set_height(ui_CalP1Button1, 35);
    lv_obj_set_x(ui_CalP1Button1, -165);
    lv_obj_set_y(ui_CalP1Button1, 100);
    lv_obj_set_align(ui_CalP1Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CalP1Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_CalP1Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_CalP1Button1, lv_color_hex(0x0FE4CA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CalP1Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MainMenuLabel4 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_MainMenuLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MainMenuLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MainMenuLabel4, 0);
    lv_obj_set_y(ui_MainMenuLabel4, 145);
    lv_obj_set_align(ui_MainMenuLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MainMenuLabel4, "Main Menu");
    lv_obj_set_style_text_color(ui_MainMenuLabel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MainMenuLabel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalP1Label1 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalP1Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CalP1Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CalP1Label1, -165);
    lv_obj_set_y(ui_CalP1Label1, 100);
    lv_obj_set_align(ui_CalP1Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CalP1Label1, "Calibrate Pump 1");

    ui_CalP2Button2 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalP2Button2, 145);
    lv_obj_set_height(ui_CalP2Button2, 35);
    lv_obj_set_x(ui_CalP2Button2, 0);
    lv_obj_set_y(ui_CalP2Button2, 100);
    lv_obj_set_align(ui_CalP2Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CalP2Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_CalP2Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_CalP2Button2, lv_color_hex(0x0FE4CA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CalP2Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalP2Label2 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalP2Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CalP2Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CalP2Label2, 0);
    lv_obj_set_y(ui_CalP2Label2, 100);
    lv_obj_set_align(ui_CalP2Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CalP2Label2, "Calibrate Pump 2");

    ui_CalP3Button3 = lv_btn_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalP3Button3, 145);
    lv_obj_set_height(ui_CalP3Button3, 35);
    lv_obj_set_x(ui_CalP3Button3, 165);
    lv_obj_set_y(ui_CalP3Button3, 100);
    lv_obj_set_align(ui_CalP3Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CalP3Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_CalP3Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_CalP3Button3, lv_color_hex(0x0FE4CA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CalP3Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CalP3Label3 = lv_label_create(ui_CalibrateScreen1);
    lv_obj_set_width(ui_CalP3Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CalP3Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CalP3Label3, 165);
    lv_obj_set_y(ui_CalP3Label3, 100);
    lv_obj_set_align(ui_CalP3Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CalP3Label3, "Calibrate Pump 3");

    lv_obj_add_event_cb(ui_FlowRate4, ui_event_FlowRate4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_VolumeButton4, ui_event_VolumeButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CalibrateButton1, ui_event_CalibrateButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StopButton4, ui_event_StopButton4, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard4, ui_FlowRate4);
    lv_obj_add_event_cb(ui_MainMenuButton4, ui_event_MainMenuButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseButton4, ui_event_PauseButton4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PauseLabel4, ui_event_PauseLabel4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CalP1Button1, ui_event_CalP1Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CalP2Button2, ui_event_CalP2Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_CalP3Button3, ui_event_CalP3Button3, LV_EVENT_ALL, NULL);

}

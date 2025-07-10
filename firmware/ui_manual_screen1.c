#include "ui.h"

void ui_ManualScreen1_screen_init(void)
{
    ui_ManualScreen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ManualScreen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TextArea2 = lv_textarea_create(ui_ManualScreen1);
    lv_obj_set_width(ui_TextArea2, 475);
    lv_obj_set_height(ui_TextArea2, 275);
    lv_obj_set_x(ui_TextArea2, -1);
    lv_obj_set_y(ui_TextArea2, -18);
    lv_obj_set_align(ui_TextArea2, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_TextArea2,
                         "From the Main Menu screen you will be given the option to choose which pump to begin dispensing from.\n\nVolume dispensing only takes in one parameter, how much volume you wish to dispense.\n\nContant and dispense over time take in two parameters, the volume and the desired time.  To input these values please do as follows:\n\n           * Input the desired volume\n           * Add a period . \n           * Input the desired time\n\nOn ocassion the pumps will need to be calibrated.  To do so simply click on the calibrate button.  Once there, input a random value, click on the desired pump, and press on the volume button.  Then measure the actual amount dispensed, input this and press calibrate.  Congratulations, you have succesfully calibrated a pump.  Repeat this process for the other pumps.");
    lv_textarea_set_placeholder_text(ui_TextArea2, "Placeholder...");
    lv_obj_set_style_text_color(ui_TextArea2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextArea2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_ManualScreen1);
    lv_obj_set_width(ui_Button2, 125);
    lv_obj_set_height(ui_Button2, 25);
    lv_obj_set_x(ui_Button2, 0);
    lv_obj_set_y(ui_Button2, 145);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x4EEA6D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_ManualScreen1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 0);
    lv_obj_set_y(ui_Label3, 145);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Main Menu");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

}

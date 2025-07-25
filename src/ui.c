#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
const char* txt = "";
int selectedPumpAddress = 0; // Initialize to an invalid address initially


// SCREEN: ui_MainMenu
void ui_MainMenu_screen_init(void);
lv_obj_t * ui_MainMenu;
void ui_event_PumpButton1(lv_event_t * e);
lv_obj_t * ui_PumpButton1;
lv_obj_t * ui_PumpLabel1;
void ui_event_PumpButton2(lv_event_t * e);
lv_obj_t * ui_PumpButton2;
void ui_event_PumpButton3(lv_event_t * e);
lv_obj_t * ui_PumpButton3;
lv_obj_t * ui_PumpLabel2;
lv_obj_t * ui_PumpLabel3;
void ui_event_CalibrateButton(lv_event_t * e);
lv_obj_t * ui_CalibrateButton;
lv_obj_t * ui_CalibrateLabel;
void ui_event_ManualButton(lv_event_t * e);
lv_obj_t * ui_ManualButton;
lv_obj_t * ui_ManualLabel;


// SCREEN: ui_PumpScreen1
void ui_PumpScreen1_screen_init(void);
lv_obj_t * ui_PumpScreen1;
void ui_event_FlowRate1(lv_event_t * e);
lv_obj_t * ui_FlowRate1;
void ui_event_VolumeButton1(lv_event_t * e);
lv_obj_t * ui_VolumeButton1;
void ui_event_DOTButton1(lv_event_t * e);
lv_obj_t * ui_DOTButton1;
void ui_event_DCButton1(lv_event_t * e);
lv_obj_t * ui_DCButton1;
lv_obj_t * ui_VolumeLabel1;
lv_obj_t * ui_DOTLabel1;
lv_obj_t * ui_DCLabel1;
void ui_event_StopButton1(lv_event_t * e);
lv_obj_t * ui_StopButton1;
lv_obj_t * ui_StopButtonLabel1;
lv_obj_t * ui_Keyboard1;
void ui_event_MainMenuButton1(lv_event_t * e);
lv_obj_t * ui_MainMenuButton1;
lv_obj_t * ui_MainMenuLabel1;
void ui_event_PauseButton1(lv_event_t * e);
lv_obj_t * ui_PauseButton1;
void ui_event_PauseLabel1(lv_event_t * e);
lv_obj_t * ui_PauseLabel1;
lv_obj_t * ui_PumpScreenLabel1;


// SCREEN: ui_PumpScreen2
void ui_PumpScreen2_screen_init(void);
void ui_event_PumpScreen2(lv_event_t * e);
lv_obj_t * ui_PumpScreen2;
void ui_event_FlowRate2(lv_event_t * e);
lv_obj_t * ui_FlowRate2;
void ui_event_VolumeButton2(lv_event_t * e);
lv_obj_t * ui_VolumeButton2;
void ui_event_DOTButton2(lv_event_t * e);
lv_obj_t * ui_DOTButton2;
void ui_event_DCButton2(lv_event_t * e);
lv_obj_t * ui_DCButton2;
lv_obj_t * ui_VolumeLabel2;
lv_obj_t * ui_DOTLabel2;
lv_obj_t * ui_DCLabel2;
void ui_event_StopButton2(lv_event_t * e);
lv_obj_t * ui_StopButton2;
lv_obj_t * ui_StopButtonLabel2;
lv_obj_t * ui_Keyboard2;
void ui_event_MainMenuButton2(lv_event_t * e);
lv_obj_t * ui_MainMenuButton2;
lv_obj_t * ui_MainMenuLabel2;
void ui_event_PauseButton2(lv_event_t * e);
lv_obj_t * ui_PauseButton2;
void ui_event_PauseLabel2(lv_event_t * e);
lv_obj_t * ui_PauseLabel2;
lv_obj_t * ui_PumpScreenLabel2;


// SCREEN: ui_PumpScreen3
void ui_PumpScreen3_screen_init(void);
lv_obj_t * ui_PumpScreen3;
void ui_event_FlowRate3(lv_event_t * e);
lv_obj_t * ui_FlowRate3;
void ui_event_VolumeButton3(lv_event_t * e);
lv_obj_t * ui_VolumeButton3;
void ui_event_DOTButton3(lv_event_t * e);
lv_obj_t * ui_DOTButton3;
void ui_event_DCButton3(lv_event_t * e);
lv_obj_t * ui_DCButton3;
lv_obj_t * ui_VolumeLabel3;
lv_obj_t * ui_DOTLabel3;
lv_obj_t * ui_DCLabel3;
void ui_event_StopButton3(lv_event_t * e);
lv_obj_t * ui_StopButton3;
lv_obj_t * ui_StopButtonLabel3;
lv_obj_t * ui_Keyboard3;
void ui_event_MainMenuButton3(lv_event_t * e);
lv_obj_t * ui_MainMenuButton3;
lv_obj_t * ui_MainMenuLabel3;
void ui_event_PauseButton3(lv_event_t * e);
lv_obj_t * ui_PauseButton3;
void ui_event_PauseLabel3(lv_event_t * e);
lv_obj_t * ui_PauseLabel3;
lv_obj_t * ui_PumpScreenLabel3;


// SCREEN: ui_CalibrateScreen1
void ui_CalibrateScreen1_screen_init(void);
lv_obj_t * ui_CalibrateScreen1;
void ui_event_FlowRate4(lv_event_t * e);
lv_obj_t * ui_FlowRate4;
void ui_event_VolumeButton4(lv_event_t * e);
lv_obj_t * ui_VolumeButton4;
void ui_event_CalibrateButton1(lv_event_t * e);
lv_obj_t * ui_CalibrateButton1;
lv_obj_t * ui_VolumeLabel4;
lv_obj_t * ui_CalibrateLabel1;
void ui_event_StopButton4(lv_event_t * e);
lv_obj_t * ui_StopButton4;
lv_obj_t * ui_StopButtonLabel4;
lv_obj_t * ui_Keyboard4;
void ui_event_MainMenuButton4(lv_event_t * e);
lv_obj_t * ui_MainMenuButton4;
void ui_event_PauseButton4(lv_event_t * e);
lv_obj_t * ui_PauseButton4;
void ui_event_PauseLabel4(lv_event_t * e);
lv_obj_t * ui_PauseLabel4;
void ui_event_CalP1Button1(lv_event_t * e);
lv_obj_t * ui_CalP1Button1;
lv_obj_t * ui_MainMenuLabel4;
lv_obj_t * ui_CalP1Label1;
void ui_event_CalP2Button2(lv_event_t * e);
lv_obj_t * ui_CalP2Button2;
lv_obj_t * ui_CalP2Label2;
void ui_event_CalP3Button3(lv_event_t * e);
lv_obj_t * ui_CalP3Button3;
lv_obj_t * ui_CalP3Label3;


// SCREEN: ui_ManualScreen1
void ui_ManualScreen1_screen_init(void);
lv_obj_t * ui_ManualScreen1;
lv_obj_t * ui_TextArea2;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label3;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_PumpButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_PumpScreen1, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, &ui_PumpScreen1_screen_init);
        _ui_screen_delete(&ui_MainMenu);

        selectedPumpAddress = 109; // Set the address for Pump 1
    }
}
void ui_event_PumpButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_delete(&ui_MainMenu);
        _ui_screen_change(&ui_PumpScreen2, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0, &ui_PumpScreen2_screen_init);

        selectedPumpAddress = 110; // Set the address for Pump 2
    }
}
void ui_event_PumpButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_PumpScreen3, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_PumpScreen3_screen_init);
        _ui_screen_delete(&ui_MainMenu);

        selectedPumpAddress = 111; // Set the address for Pump 3
    }
}
void ui_event_CalibrateButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_CalibrateScreen1, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0, &ui_CalibrateScreen1_screen_init);
        _ui_screen_delete(&ui_MainMenu);
    }
}
void ui_event_ManualButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ManualScreen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_ManualScreen1_screen_init);
        _ui_screen_delete(&ui_MainMenu);
    }
}
void ui_event_FlowRate1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    txt = lv_textarea_get_text(ui_FlowRate1);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_FlowRate1);
        getValue(e);
    }
}
void ui_event_VolumeButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        volumeDispense(e);
    }
}
void ui_event_DOTButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        overTimeDispense(e);
    }
}
void ui_event_DCButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        constantDispense(e);
    }
}
void ui_event_StopButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        stopDispense(e);
    }
}
void ui_event_MainMenuButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_MainMenu, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0, &ui_MainMenu_screen_init);
        _ui_screen_delete(&ui_PumpScreen1);
    }
}
void ui_event_PauseButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        pauseDispense(e);
    }
}
void ui_event_PauseLabel1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        StartDispensing(e);
    }
}
void ui_event_PumpScreen2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard1,  ui_FlowRate1);
    }
}
void ui_event_FlowRate2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    txt = lv_textarea_get_text(ui_FlowRate2);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard2,  ui_FlowRate2);
        getValue(e);
    }
}
void ui_event_VolumeButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        volumeDispense(e);
    }
}
void ui_event_DOTButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        overTimeDispense(e);
    }
}
void ui_event_DCButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        constantDispense(e);
    }
}
void ui_event_StopButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        stopDispense(e);
    }
}
void ui_event_MainMenuButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_MainMenu, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, &ui_MainMenu_screen_init);
        _ui_screen_delete(&ui_PumpScreen2);
    }
}
void ui_event_PauseButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        pauseDispense(e);
    }
}
void ui_event_PauseLabel2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        StartDispensing(e);
    }
}
void ui_event_FlowRate3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);

    txt = lv_textarea_get_text(ui_FlowRate3);

    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard3,  ui_FlowRate3);
        getValue(e);
    }
}
void ui_event_VolumeButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        volumeDispense(e);
    }
}
void ui_event_DOTButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        overTimeDispense(e);
    }
}
void ui_event_DCButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        constantDispense(e);
    }
}
void ui_event_StopButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        stopDispense(e);
    }
}
void ui_event_MainMenuButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_MainMenu, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 500, 0, &ui_MainMenu_screen_init);
        _ui_screen_delete(&ui_PumpScreen3);
    }
}
void ui_event_PauseButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        pauseDispense(e);
    }
}
void ui_event_PauseLabel3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        StartDispensing(e);
    }
}
void ui_event_FlowRate4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard4,  ui_FlowRate4);
        getValue(e);
    }
}
void ui_event_VolumeButton4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        volumeDispense(e);
    }
}
void ui_event_CalibrateButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        calibrateDispense(e);
    }
}
void ui_event_StopButton4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        stopDispense(e);
    }
}
void ui_event_MainMenuButton4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_MainMenu, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_MainMenu_screen_init);
        _ui_screen_delete(&ui_CalibrateScreen1);
    }
}
void ui_event_PauseButton4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        pauseDispense(e);
    }
}
void ui_event_PauseLabel4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        StartDispensing(e);
    }
}
void ui_event_CalP1Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        setPump1(e);
    }
}
void ui_event_CalP2Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        setPump2(e);
    }
}
void ui_event_CalP3Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        setPump3(e);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_delete(&ui_ManualScreen1);
        _ui_screen_change(&ui_MainMenu, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_MainMenu_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_MainMenu_screen_init();
    ui_PumpScreen1_screen_init();
    ui_PumpScreen2_screen_init();
    ui_PumpScreen3_screen_init();
    ui_CalibrateScreen1_screen_init();
    ui_ManualScreen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_MainMenu);
}

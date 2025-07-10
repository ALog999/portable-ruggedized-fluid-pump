#ifndef _FINAL_P4_UI_H
#define _FINAL_P4_UI_H

extern const char* txt;
extern int selectedPumpAddress;


#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_MainMenu
void ui_MainMenu_screen_init(void);
extern lv_obj_t * ui_MainMenu;
void ui_event_PumpButton1(lv_event_t * e);
extern lv_obj_t * ui_PumpButton1;
extern lv_obj_t * ui_PumpLabel1;
void ui_event_PumpButton2(lv_event_t * e);
extern lv_obj_t * ui_PumpButton2;
void ui_event_PumpButton3(lv_event_t * e);
extern lv_obj_t * ui_PumpButton3;
extern lv_obj_t * ui_PumpLabel2;
extern lv_obj_t * ui_PumpLabel3;
void ui_event_CalibrateButton(lv_event_t * e);
extern lv_obj_t * ui_CalibrateButton;
extern lv_obj_t * ui_CalibrateLabel;
void ui_event_ManualButton(lv_event_t * e);
extern lv_obj_t * ui_ManualButton;
extern lv_obj_t * ui_ManualLabel;
// SCREEN: ui_PumpScreen1
void ui_PumpScreen1_screen_init(void);
extern lv_obj_t * ui_PumpScreen1;
void ui_event_FlowRate1(lv_event_t * e);
extern lv_obj_t * ui_FlowRate1;
void ui_event_VolumeButton1(lv_event_t * e);
extern lv_obj_t * ui_VolumeButton1;
void ui_event_DOTButton1(lv_event_t * e);
extern lv_obj_t * ui_DOTButton1;
void ui_event_DCButton1(lv_event_t * e);
extern lv_obj_t * ui_DCButton1;
extern lv_obj_t * ui_VolumeLabel1;
extern lv_obj_t * ui_DOTLabel1;
extern lv_obj_t * ui_DCLabel1;
void ui_event_StopButton1(lv_event_t * e);
extern lv_obj_t * ui_StopButton1;
extern lv_obj_t * ui_StopButtonLabel1;
extern lv_obj_t * ui_Keyboard1;
void ui_event_MainMenuButton1(lv_event_t * e);
extern lv_obj_t * ui_MainMenuButton1;
extern lv_obj_t * ui_MainMenuLabel1;
void ui_event_PauseButton1(lv_event_t * e);
extern lv_obj_t * ui_PauseButton1;
void ui_event_PauseLabel1(lv_event_t * e);
extern lv_obj_t * ui_PauseLabel1;
extern lv_obj_t * ui_PumpScreenLabel1;
// SCREEN: ui_PumpScreen2
void ui_PumpScreen2_screen_init(void);
void ui_event_PumpScreen2(lv_event_t * e);
extern lv_obj_t * ui_PumpScreen2;
void ui_event_FlowRate2(lv_event_t * e);
extern lv_obj_t * ui_FlowRate2;
void ui_event_VolumeButton2(lv_event_t * e);
extern lv_obj_t * ui_VolumeButton2;
void ui_event_DOTButton2(lv_event_t * e);
extern lv_obj_t * ui_DOTButton2;
void ui_event_DCButton2(lv_event_t * e);
extern lv_obj_t * ui_DCButton2;
extern lv_obj_t * ui_VolumeLabel2;
extern lv_obj_t * ui_DOTLabel2;
extern lv_obj_t * ui_DCLabel2;
void ui_event_StopButton2(lv_event_t * e);
extern lv_obj_t * ui_StopButton2;
extern lv_obj_t * ui_StopButtonLabel2;
extern lv_obj_t * ui_Keyboard2;
void ui_event_MainMenuButton2(lv_event_t * e);
extern lv_obj_t * ui_MainMenuButton2;
extern lv_obj_t * ui_MainMenuLabel2;
void ui_event_PauseButton2(lv_event_t * e);
extern lv_obj_t * ui_PauseButton2;
void ui_event_PauseLabel2(lv_event_t * e);
extern lv_obj_t * ui_PauseLabel2;
extern lv_obj_t * ui_PumpScreenLabel2;
// SCREEN: ui_PumpScreen3
void ui_PumpScreen3_screen_init(void);
extern lv_obj_t * ui_PumpScreen3;
void ui_event_FlowRate3(lv_event_t * e);
extern lv_obj_t * ui_FlowRate3;
void ui_event_VolumeButton3(lv_event_t * e);
extern lv_obj_t * ui_VolumeButton3;
void ui_event_DOTButton3(lv_event_t * e);
extern lv_obj_t * ui_DOTButton3;
void ui_event_DCButton3(lv_event_t * e);
extern lv_obj_t * ui_DCButton3;
extern lv_obj_t * ui_VolumeLabel3;
extern lv_obj_t * ui_DOTLabel3;
extern lv_obj_t * ui_DCLabel3;
void ui_event_StopButton3(lv_event_t * e);
extern lv_obj_t * ui_StopButton3;
extern lv_obj_t * ui_StopButtonLabel3;
extern lv_obj_t * ui_Keyboard3;
void ui_event_MainMenuButton3(lv_event_t * e);
extern lv_obj_t * ui_MainMenuButton3;
extern lv_obj_t * ui_MainMenuLabel3;
void ui_event_PauseButton3(lv_event_t * e);
extern lv_obj_t * ui_PauseButton3;
void ui_event_PauseLabel3(lv_event_t * e);
extern lv_obj_t * ui_PauseLabel3;
extern lv_obj_t * ui_PumpScreenLabel3;
// SCREEN: ui_CalibrateScreen1
void ui_CalibrateScreen1_screen_init(void);
extern lv_obj_t * ui_CalibrateScreen1;
void ui_event_FlowRate4(lv_event_t * e);
extern lv_obj_t * ui_FlowRate4;
void ui_event_VolumeButton4(lv_event_t * e);
extern lv_obj_t * ui_VolumeButton4;
void ui_event_CalibrateButton1(lv_event_t * e);
extern lv_obj_t * ui_CalibrateButton1;
extern lv_obj_t * ui_VolumeLabel4;
extern lv_obj_t * ui_CalibrateLabel1;
void ui_event_StopButton4(lv_event_t * e);
extern lv_obj_t * ui_StopButton4;
extern lv_obj_t * ui_StopButtonLabel4;
extern lv_obj_t * ui_Keyboard4;
void ui_event_MainMenuButton4(lv_event_t * e);
extern lv_obj_t * ui_MainMenuButton4;
void ui_event_PauseButton4(lv_event_t * e);
extern lv_obj_t * ui_PauseButton4;
void ui_event_PauseLabel4(lv_event_t * e);
extern lv_obj_t * ui_PauseLabel4;
void ui_event_CalP1Button1(lv_event_t * e);
extern lv_obj_t * ui_CalP1Button1;
extern lv_obj_t * ui_MainMenuLabel4;
extern lv_obj_t * ui_CalP1Label1;
void ui_event_CalP2Button2(lv_event_t * e);
extern lv_obj_t * ui_CalP2Button2;
extern lv_obj_t * ui_CalP2Label2;
void ui_event_CalP3Button3(lv_event_t * e);
extern lv_obj_t * ui_CalP3Button3;
extern lv_obj_t * ui_CalP3Label3;
// SCREEN: ui_ManualScreen1
void ui_ManualScreen1_screen_init(void);
extern lv_obj_t * ui_ManualScreen1;
extern lv_obj_t * ui_TextArea2;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui____initial_actions0;




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif

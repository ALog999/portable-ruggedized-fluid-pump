#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void getValue(lv_event_t * e);
void volumeDispense(lv_event_t * e);
void overTimeDispense(lv_event_t * e);
void constantDispense(lv_event_t * e);
void stopDispense(lv_event_t * e);
void pauseDispense(lv_event_t * e);
void StartDispensing(lv_event_t * e);
void calibrateDispense(lv_event_t * e);
void setPump1(lv_event_t * e);
void setPump2(lv_event_t * e);
void setPump3(lv_event_t * e);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif

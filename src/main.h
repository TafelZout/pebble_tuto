#pragma once 
static void init();
static void deinit();
int main(void);
static void update_time();
static void tick_handler(struct tm *tick_time, TimeUnits units_changed);
static void main_window_load(Window *window);
static void main_window_unload(Window *window);
static void inbox_received_callback(DictionaryIterator *iterator, void *context);
static void inbox_dropped_callback(AppMessageResult reason, void *context);
static void outbox_failed_callback(DictionaryIterator *iterator, AppMessageResult reason, void *context);
static void outbox_sent_callback(DictionaryIterator *iterator, void *context);
static void battery_callback(BatteryChargeState state);
static void battery_update_proc(Layer *layer, GContext *ctx);
static void bluetooth_callback(bool connected);
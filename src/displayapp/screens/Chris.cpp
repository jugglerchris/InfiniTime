#include "Chris.h"
#include <lvgl/lvgl.h>
#include "Version.h"
#include "../DisplayApp.h"

using namespace Pinetime::Applications::Screens;

namespace {
  static void ButtonEventHandler(lv_obj_t* obj, lv_event_t event) {
    Chris* screen = static_cast<Chris*>(obj->user_data);
    screen->OnButtonEvent(obj, event);
  }

}

Chris::Chris(Pinetime::Applications::DisplayApp* app)
  : Screen {app} {
  labelTitle = lv_label_create(lv_scr_act(), nullptr);
  lv_label_set_text_fmt(labelTitle,
                        "Chris's screen\n");
  lv_obj_align(labelTitle, nullptr, LV_ALIGN_IN_TOP_LEFT, 0, 0);
}

Chris::~Chris() {
  lv_obj_clean(lv_scr_act());
}

void Chris::OnButtonEvent(lv_obj_t* object, lv_event_t event) {
    (void)object;
    (void)event;
}

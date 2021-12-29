#pragma once

#include "Screen.h"
#include <lvgl/src/lv_core/lv_obj.h>

namespace Pinetime {

  namespace Applications {
    namespace Screens {

      class Chris : public Screen {
      public:
        Chris(DisplayApp* app);
        ~Chris() override;

        void OnButtonEvent(lv_obj_t* object, lv_event_t event);

      private:
        lv_obj_t* labelTitle;
      };
    }
  }
}

#include "learnuv.h"

void idle_cb(uv_idle_t* handle) {
  static int64_t count = -1;
  count++;
  if ((count % 10000) == 0) log_report(".");
  if (count >= 50000) uv_idle_stop(handle);
}

int main() {
  uv_idle_t idle_handle;

  /* 1. create the event loop */

  /* 2. initialize an idle handler for the loop */

  /* 3. start the idle handler with a function to call */

  /* 4. start the event loop */

  return 0;
}

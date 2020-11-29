#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void task1(void * params)
{
  while(true)
  {
    printf("reading temperature from %s \n", (char *) params);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}


void app_main(void)
{
  xTaskCreate(&task1, "temperature reading", 2048, "task 1", 2, NULL);
}

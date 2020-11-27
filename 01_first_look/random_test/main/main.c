#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "math.h"
#define TAG "DICE"


void app_main(void)
{
  int dice_role(){
    int random = esp_random(); 
    int positiveNumber = abs(random); 
    int diceNumber = (positiveNumber % 6) + 1; 
    return diceNumber;
  }
  int i = 0; 
  while(1)
  {
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    ESP_LOGI(TAG, "random number %d", dice_role()); 
  }
  
}

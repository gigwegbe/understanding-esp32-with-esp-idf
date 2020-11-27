#include <stdio.h>
#include <string.h>
#include "esp_system.h"
#include "esp_spi_flash.h"

void app_main(void)
{
  uint8_t chipId[6];

  // get mac address
  esp_efuse_mac_get_default(chipId);
  printf("mac / chip id: %02x%02x%02x%02x%02x%02x\n", chipId[0], chipId[1], chipId[2], chipId[3], chipId[4], chipId[5]);
}
/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_log.h"

#include "cModule.h"
#include "cppModule.h"

extern "C" { // This switch allows the ROS C-implementation to find this main
void app_main(void);
}

const char * cModTag = "App";

void app_main(void)
{
    ESP_LOGD(cModTag, "Starting app_main");

    while (true)
    {
        
        
        vTaskDelay(3000 / portTICK_PERIOD_MS);
    }
    
}

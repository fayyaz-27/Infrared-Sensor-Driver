// Project Name: Infrared Sensor Module: Application Code
// Author: Fayyaz Nisar Shaikh
// LinkedIn: https://www.linkedin.com/in/fayyaz-shaikh-7646312a3/
// Email: fayyaz.shaikh7862005@gmail.com
// Phone: +91 8591686239

#include "stdio.h"

#include "esp_system.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "ir_driver.h"

#define TAG "IR MODULE"

void app_main(void){

uint8_t read_gpio = 4;
uint8_t write_gpio = 2;

gpio_set_direction(write_gpio, GPIO_MODE_OUTPUT);
gpio_set_direction(read_gpio, GPIO_MODE_INPUT);

ir_init(read_gpio);

while(1)
{
    uint8_t status = read_ir(read_gpio);

    if(status == 0){
        gpio_set_level(write_gpio, 1);
        ESP_LOGI(TAG, "Object Detected at D4 !!!");
        vTaskDelay(pdMS_TO_TICKS(10));
        gpio_set_level(write_gpio, 0);
    }
        vTaskDelay(pdMS_TO_TICKS(10));
}

}
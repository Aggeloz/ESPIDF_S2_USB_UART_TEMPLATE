/*

 ▄▄▄▄    ██▓     ██ ▄█▀ ▄▄▄▄   ▒██   ██▒
▓█████▄ ▓██▒     ██▄█▒ ▓█████▄ ▒▒ █ █ ▒░
▒██▒ ▄██▒██░    ▓███▄░ ▒██▒ ▄██░░  █   ░
▒██░█▀  ▒██░    ▓██ █▄ ▒██░█▀   ░ █ █ ▒
░▓█  ▀█▓░██████▒▒██▒ █▄░▓█  ▀█▓▒██▒ ▒██▒
░▒▓███▀▒░ ▒░▓  ░▒ ▒▒ ▓▒░▒▓███▀▒▒▒ ░ ░▓ ░
▒░▒   ░ ░ ░ ▒  ░░ ░▒ ▒░▒░▒   ░ ░░   ░▒ ░
 ░    ░   ░ ░   ░ ░░ ░  ░    ░  ░    ░
 ░          ░  ░░  ░    ░       ░    ░
 ░                      ░
 */

#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"
#include "driver/gpio.h"

static const char *TAG = "BlkBx";


extern "C"
{
    void app_main(void);
}

void app_main(void)
{
    // Init logo print
    printf("▄▄▄▄    ██▓     ██ ▄█▀ ▄▄▄▄   ▒██   ██▒\n");
    printf("▓█████▄ ▓██▒     ██▄█▒ ▓█████▄ ▒▒ █ █ ▒░\n");
    printf("▒██▒ ▄██▒██░    ▓███▄░ ▒██▒ ▄██░░  █   ░\n");
    printf("▒██░█▀  ▒██░    ▓██ █▄ ▒██░█▀   ░ █ █ ▒\n");
    printf("░▓█  ▀█▓░██████▒▒██▒ █▄░▓█  ▀█▓▒██▒ ▒██▒\n");
    printf("░▒▓███▀▒░ ▒░▓  ░▒ ▒▒ ▓▒░▒▓███▀▒▒▒ ░ ░▓ ░\n");
    printf("▒░▒   ░ ░ ░ ▒  ░░ ░▒ ▒░▒░▒   ░ ░░   ░▒ ░\n");
    printf("░    ░   ░ ░   ░ ░░ ░  ░    ░  ░    ░\n");
    printf("░          ░  ░░  ░    ░       ░    ░\n");
    printf("░                      ░\n");


    // --Main program--

    gpio_set_direction(GPIO_NUM_15, GPIO_MODE_OUTPUT); // Set GPIO direction

    while (1)
    {
        ESP_LOGI(TAG, "On");
        gpio_set_level(GPIO_NUM_15, 1); // Turn led ON
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(TAG, "Off");
        gpio_set_level(GPIO_NUM_15, 0); // Turn led OFF
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

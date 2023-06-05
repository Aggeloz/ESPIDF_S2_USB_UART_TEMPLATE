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

static const char *TAG = "BlkBx";

extern "C"
{
    void app_main(void);
}

void app_main(void)
{

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

    while (1)
    {
        ESP_LOGI(TAG, "Hello");
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}

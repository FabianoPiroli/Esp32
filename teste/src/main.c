#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG = "SISTEMA";

void task_contador(void *pvParameters) {
    int contador = 0;
    while (1) {
        ESP_LOGI(TAG, "Contador: %d rodando no Core %d", contador++, xPortGetCoreID());
        vTaskDelay(pdMS_TO_TICKS(1000)); // Espera não-bloqueante de 1s
    }
}

void app_main(void) {
    ESP_LOGI(TAG, "Iniciando sistema...");
    // Cria uma tarefa no FreeRTOS
    xTaskCreate(task_contador, "TaskContador", 2048, NULL, 5, NULL);
}
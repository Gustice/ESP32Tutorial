#include <stdio.h>
#include "cppModule.h"
#include "esp_log.h"

const char * cModTag = "Mod";

Module::Module(int init = 0)
{
    value = init;
    ESP_LOGD(cModTag, "Starting app_main");
}

void Module::AddValue(int v)
{
    value += v;
}

int Module::GetValue()
{
    return value;
}
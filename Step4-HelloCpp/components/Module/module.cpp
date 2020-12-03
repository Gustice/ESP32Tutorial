#include <stdio.h>
#include "module.h"

void Module::DoStuffWith(const char * input)
{
    printf("Module %d: Gonna print that '%s' \n", _id, input);
    printf("Pretending to do stuff ... \n");
}
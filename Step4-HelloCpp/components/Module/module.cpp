/**
 * @file module.cpp
 * @author Gustice
 * @brief Just a simple module for demo purpose
 * @version 0.1
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
  */
 
#include <stdio.h>
#include "module.h"

void Module::DoStuffWith(const char * input)
{
    printf("Module %d: Gonna print that '%s' \n", _id, input);
    printf("Pretending to do stuff ... \n");
}
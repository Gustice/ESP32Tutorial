/**
 * @file cppModule.cpp
 * @author Gustice
 * @brief Just a simple module for demo purpose
 * @version 0.1
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include "cppModule.h"

void Module::AddValue(int v)
{
    value += v;
}

int Module::GetValue()
{
    return value;
}
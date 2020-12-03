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
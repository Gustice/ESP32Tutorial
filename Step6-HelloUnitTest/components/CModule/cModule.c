/**
 * @file cModule.c
 * @author Gustice
 * @brief Just a simple module for demo purpose
 * @version 0.1
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
  */
 
#include <stdio.h>

#define LIMIT 100

int SaturatedAdd(int p1, int p2)
{
    if ((p1 >= LIMIT) || (p2 >= LIMIT))
        return LIMIT;

    int s = p1 + p2;
    if (s >= LIMIT)
        return LIMIT;
    
    return s;
}

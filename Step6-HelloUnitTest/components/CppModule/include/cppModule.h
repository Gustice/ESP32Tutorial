/**
 * @file cppModule.h
 * @author Gustice
 * @brief Just a simple module for demo purpose
 * @version 0.1
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#pragma once

class Module
{
public:
    Module(int init = 0) { value = init; }
    ~Module(){};

    void AddValue(int v);
    int GetValue();

private:
    int value;
};

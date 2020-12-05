/**
 * @file module.h
 * @author Gustice
 * @brief Just a simple module for demo purpose
 * @version 0.1
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
  */

#pragma once

class Module
{
public:
    Module(int id) : _id(id) {};
    ~Module(){};

    void DoStuffWith(const char * input);
private:
    const int _id;
};


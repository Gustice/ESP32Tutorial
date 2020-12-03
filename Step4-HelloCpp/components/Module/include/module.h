
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


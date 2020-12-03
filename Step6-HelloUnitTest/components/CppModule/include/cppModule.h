
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

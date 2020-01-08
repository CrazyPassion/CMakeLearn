/* Copyright 2019 Nokia. All rights reserved.*/
#include <iostream>
#include "testclass/testclass.hpp"

using namespace std;

int main(void)
{
    std::cout<<"hello world!\n";
    test t;
    t.settest();
    t.printtest();
    return 0;

}


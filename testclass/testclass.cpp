#include <iostream>
#include "testclass.hpp"

using namespace std;

void test::settest(){
    tt = 100;
}

void test::printtest(){
    std::cout << "tt:" << tt<< " !\n";
}
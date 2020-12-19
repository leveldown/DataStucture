//
// Created by zfanh on 2020/12/17.
//

#ifndef RECURSION_FIBONACCI_H
#define RECURSION_FIBONACCI_H
#include <iostream>

int fibonacci(unsigned int n){
    if (n == 1)
        return 0;
    else if (n == 2){
        return 1;
    }
    else
        return fibonacci(n-2)+fibonacci(n-1);
}
#endif //RECURSION_FIBONACCI_H

//
// Created by zfanh on 2020/12/18.
//

#ifndef RECURSION_GCD_H
#define RECURSION_GCD_H
//计算最大公约数
unsigned int gcd(unsigned int x, unsigned int y){
    if (y == 0)
        return x;
    else
        return gcd(y,x%y);
}
#endif //RECURSION_GCD_H

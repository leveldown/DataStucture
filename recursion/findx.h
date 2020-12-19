//
// Created by zfanh on 2020/12/18.
//

#ifndef RECURSION_FINDX_H
#define RECURSION_FINDX_H
#include <string>

using namespace std;
template<class T>
string findx(T a[], T x,int k){
    if (a[k] == x)
        return "true";
    else if (k == sizeof(a)/sizeof(T))
        return "false";
    else
        return findx(a, x ,k+1);


}

#endif //RECURSION_FINDX_H

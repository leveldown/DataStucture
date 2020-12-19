//
// Created by bowu on 2020/12/17.
#ifndef RECURSION_PERMUTATION_H
#define RECURSION_PERMUTATION_H
#include <iostream>
#include <iterator>
using namespace std;

//输出数组list[k:m]的排列组合
template<class T>
void permutations(T list[], int k, int m)
{
    if (k == m){
        copy(list, list+m+1, ostream_iterator<T>(cout, ""));
        cout << endl;
    }
    else
        for (int i = k; i <= m; i++)
        {
            swap(list[k], list[i]);
            permutations(list, k+1, m);
            swap(list[k], list[i]);
        }
}


#endif
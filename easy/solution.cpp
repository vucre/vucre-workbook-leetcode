//
// Created by lj on 2020/4/9.
//
#include <iostream>
#include "solution.h"
#include <limits.h>

using namespace std;

/**
 * 整数反转
 * @param x
 * @return
 */
int Solution::reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int pop = x % 10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && pop > 7)) {
            return 0;
        }
        if (ans < INT_MIN / 10 || (ans == (INT_MIN / 10) && pop < -8)) {
            return 0;
        }
        ans = ans * 10 + pop;
        x /= 10;
    }
    return ans;
}
//
// Created by 王青龙 on 24/02/2017.
//

#include "solution.h"

int Solution::hammingDistance(int x, int y) {
    int tempInt = x ^y;
    int dis = 0;
    while (tempInt) {
        if ((tempInt >> 1) << 1 != tempInt) {
            ++dis;
        }
        tempInt >>= 1;//注意这里的写法>>=
    }
    return dis;
}

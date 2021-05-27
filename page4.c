/*************************************************************************
	> File Name: page4.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 May 2021 02:37:35 PM CST
 ************************************************************************/

#include <stdio.h>
int main() {
    float a = 4294967244, b = 4294967295;
    /*
     * https://blog.csdn.net/albertsh/article/details/92385277
     * output: 4294967296
     * The blog explain the magnitude of float in C.
    */
    printf("%f %f", a, b);
    return 0;
}

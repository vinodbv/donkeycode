//
// Created by vinod on 29/06/2026.
//
//
// Created by vinod on 29/06/2026.
//
#include <stdio.h>
void main() {

    func_add_num(12,14,13);
    func_add_num(12,13,11);
    return 0;
}

func_add_num(int a, int b,int c) {
    int sum;
    sum = a + b + c;
    printf("sum = %d\n",sum);
}
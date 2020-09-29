/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#include <stdio.h>

extern int add(int x, int y);
extern int sub(int x, int y);

int main() {
	int result = 0;

    result = add(0xF0, 0x0F);
    printf("Result of ADD: 0x%x!\n", result);
    result = sub(0x0F, 0x0F);
    printf("Result of SUB: 0x%x!\n", result);
}

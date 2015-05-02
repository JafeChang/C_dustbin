//
//  main.c
//  C_dustbin
//
//  Created by 张健飞 on 15/5/2.
//  Copyright (c) 2015年 jafee chang. All rights reserved.
//

#include <stdio.h>

#include "myMath.h"

int main(int argc, const char *argv[]) {
	for (int i = 0; i <= 25; i++) {
		printf("%d\t%lld\n", i, factorial(i));
	}
	return 0;
}

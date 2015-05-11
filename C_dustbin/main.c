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
    double d[]={1.0,2.0,3};
    int b=sizeof(d);
    printf("%f\n",++*d);
    sumDouble(d);
	return 0;
}

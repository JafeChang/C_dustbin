//
//  myMath.c
//  C_dustbin
//
//  Created by 张健飞 on 15/5/2.
//  Copyright (c) 2015年 jafee chang. All rights reserved.
//

# include <stdio.h>

/*************************************************
   Function:  sumInt64
   Description:
    To calculate the sum of the numbers for start to end with step
   Input:
    int64_t start - the start number to sum;
    int64_t end - the last number to sum;
    int64_t step - the step of the imcreasing numbers.
   Output: int64_t - the sum of the numbers for start to end with step
   Others: The result of sum may overflow.
*************************************************/

int64_t sumInt64(int64_t start, int64_t end, int64_t step) {
	int64_t sum = 0;
	for (int64_t i = start; i <= end; i += step) {
		sum += i;
	}
	return sum;
}

/*************************************************
   Function:  factorial
   Description:
   Input:
    int64_t number - the number to get its factorial.
   Output: int64_t - the factorial of the numbers.
   Return:
    positive : normal result;
    -1 : input number was negative;
    -2 : input number was too big.
*************************************************/

int64_t factorial(int64_t number) {
	int64_t result = 1;
	if (number < 0) {
		result = -1;
	}
	else if (number > 20) {
		result = -2;
	}
	else {
		for (int64_t i = 1; i <= number; i++) {
			result *= i;
		}
	}
	return result;
}

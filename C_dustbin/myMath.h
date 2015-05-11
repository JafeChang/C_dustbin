//
//  myMath.c
//  C_dustbin
//
//  Created by 张健飞 on 15/5/2.
//  Copyright (c) 2015年 jafee chang. All rights reserved.
//

# include <stdio.h>
int64_t getMinInt(int64_t n1,int64_t n2){
    int64_t minInt=n1<n2?n1:n2;
    return minInt;
}
double getMinDouble(double n1,double n2){
    double minInt=n1<n2?n1:n2;
    return minInt;

}
int64_t getMaxInt(int64_t n1,int64_t n2){
    int64_t maxInt=n1>n2?n1:n2;
    return maxInt;
}

double getMaxDouble(double n1,double n2){
    double maxInt=n1>n2?n1:n2;
    return maxInt;
}
double sortDouble(double doubles[],int len){
    
}
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

double sumDouble(double doubles[],int len){
    int naturalCount=0;
    double sum=0;
//    for(int i=0;i<len;i++){
//        if(doubles[i]>=0){
//            naturalCount++;
//        }
//    }
//    double naturalNumbers[naturalCount];
//    double negativeNumbers[len-naturalCount];
//    int64_t minLen=getMinInt(naturalCount, negativeNumbers);
//    for(int i=0;i<minLen;i++){
//        sum+=
//    }
//   
    return 0.0;
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



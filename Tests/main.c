/*
 * main.c
 *
 *  Created on: 31/8/2017
 *      Author: utnso
 */

#include "test.h"
#include <stdio.h>

void doblechanger(int* num){
	*num = 7;
	printf("doble: %i\n", *num);
}

int main(){
	int num = 2;
	changer(&num);
	num = 2;
	doblechanger(&num);
	printf("num: %i\n", num);
	return 0;
}



/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int,int);

int main(void) {
	int num1,num2,result;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	result=sum(num1,num2);
	printf("relult is :%d",result);
	return EXIT_SUCCESS;
}

int sum(int a,int b){
	int add;
	add=a+b;
	return add;
}

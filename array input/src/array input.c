/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100];
	int i,limit;
	setbuf(stdout,NULL);
	printf("eneter array limit");
	scanf("%d",&limit);
	printf("enter your value");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("enered values are ");
	for(i=0;i<limit;i++){
		printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}

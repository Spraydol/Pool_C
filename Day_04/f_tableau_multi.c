#include<stdio.h>

{
	int n , i ;
	printf("entrer la valeur de n : ");
	scanf("%d" , &n);
	for (i = 1 ; i<=10 ; i++){
		printf("%d * %d = %d \n" , n , i , n*i);
	}
	return 0 ;
}

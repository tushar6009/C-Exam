#include <stdio.h>

main() {
   
	int i, small,n;
   
	int array[n];

	printf("Enter array Size :");
	scanf("%d", &n);
	
	for(i=0;i < n;i++){
		printf("array[%d]",i);
		scanf("%d",&array[i]);
	}
	
	for(i = 0; i <= n; i++){
		printf("%d ",array[i]);
	}
	
	small = array[n];
   
	for(i = 0; i <= n; i++){
    	if( small > array[i] ) 
        	small = array[i];
	}
   
	printf("\n\nSmallest element of array is : %d", small);   
}

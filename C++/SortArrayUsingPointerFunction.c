#include<stdio.h>

void sort(int *f){
	
	int i,j,temp;
	for(i=0;i<23;i++){
		
		for(j=i+1;j<23;j++){ // 0
			
			if(*(f+i)>*(f+j)){  // 2
				
				temp = *(f+i);
				*(f+i) = *(f+j);
				*(f+j) = temp;
			}	
		}
	}
	for(i=0;i<23;i++){
		
		printf("%d ",*(f+i));
	}
}
main(){
	
	// sort and array using pointer and function
	
	int arr[]={1,2,7,4,2,3,1,1,2,55,66,22,33,43,90,89,99,45,65,23,76,44,22};
	
	int *p;
	
	p=&arr[0];
	
	sort(p);	
}

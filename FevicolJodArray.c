#include<stdio.h>


void fevicolKaJod( int x[] ,  int y[] , int size1 , int size2 ){     // 1,2,3,4,5,6    //    24 byte / 4 byte = 6
	
//	int size1 = sizeof(x)/sizeof(int);   // 2
//	int size2 = sizeof(y)/sizeof(int);   // 2
//	
//	printf("%d \n",size1);
//	printf("%d \n",size2);

	int i,h=0;
	
	int	arr3[size1+size2]; // 6
	
	for(i=0;i<size1;i++){
		
		arr3[i]=x[i]; 
	}
	for(i=size1;i<size1+size2;i++){
		
		arr3[i] = y[h];   // h ==0 
		h++;
	}
	
	for(i=0;i<size1+size2;i++){
		
		printf("%d ",arr3[i]);
	}

}


main(){
	
	int n,m;
	
	int i,v;
	printf("Enter the size of first array \n");
	scanf("%d",&n);	
	int arr1[n];
	printf("Enter the elments of the first array \n");
	for(i=0;i<n;i++){
		
		scanf("%d",&v);
		arr1[i]=v;
	}
	
	printf("Enter the size of second array \n");
	scanf("%d",&m);	
	int arr2[m];
	printf("Enter the elments of the second array \n");
	for(i=0;i<n;i++){
		
		scanf("%d",&v); // 11 // 34
		arr2[i]=v;
	}

	fevicolKaJod(arr1,arr2,m,n);
}

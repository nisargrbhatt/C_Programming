// The two variable Sequential Search
#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,high,low,n,a[10],key;
	printf("Enter the Size of array: ");
	scanf("%d",&n);
	printf("Enter the array element: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the Key element: ");
	scanf("%d",&key);
	low=0;
	high = n-1;
	for(i=low,j=high;i<n && j>0;i++,j--){
//		printf("i = %d, j = %d \n",i,j);
		if(a[i]==key){
			printf("The Element is found on %d position",i);
			break;
		}
		if(a[j]==key){
			printf("The Element is found on %d position",j);
			break;
		}
		if(i>=j){
			printf("The element is not found on array.");
			break;
		}
		
	}
	return 0;
	
}



#include<stdio.h>
#include<conio.h>

int main(){
	int n=5;
	int arr[n],i,j,temp;
	int min_idx;
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	 for (i = 0; i < n-1; i++) { 
        
        min_idx = i; 
        for (j = i+1; j < n; j++) {
		
          if (arr[j] < arr[min_idx]){
		  
            min_idx = j; 
			}

		}
        	temp = arr[min_idx];
              arr[min_idx]=arr[i];
              arr[i]=temp;
    } 
	
	printf("Sorted array:");
  	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
  
} 
	

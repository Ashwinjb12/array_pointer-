#include <stdio.h>

int main(){

	int arr[6];
	int *j;
	int *pointer_arr[6];
	int **poi_poi_arr[6];
	int ***poi_3_arr[6];
	
	for(int i=0; i< 6; i++){
		printf("Please provide the %d value of the array!\n",(i+1));
		scanf("%d",&arr[i]);	
	}
		
	for(int i=0; i< 6; i++){
		j =&arr[i];
		pointer_arr[i] =&arr[i];
		poi_poi_arr[i] =&pointer_arr[i];
		poi_3_arr[i]=&poi_poi_arr[i];
		printf("Memory location of %d is %u\n",arr[i],j);
	}
	for(int i=0; i< 6; i++){
		
		printf("PointerArray-Memory location of %d is %u\n",*pointer_arr[i],pointer_arr[i]);
		printf("Pointer2Array-Memory value in location of %u is %d\n",*poi_poi_arr[i],**poi_poi_arr[i]);
		printf("Pointer3Array-Memory value in location of %u is %d\n",**poi_3_arr[i],***poi_3_arr[i]);
	}
	
}
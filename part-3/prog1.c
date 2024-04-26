#include <stdio.h>
 
int largest(int arr[], int max)
{
    int i;
 
    int max = arr[0];
 
    for (i = 0; i < 5 ; i++){
	
        if (arr[i] > max){
		
            max = arr[i];
        }
    return max;
    }
}
 
int main()
{
    int arr[] = { 10, 324, 45, 90, 9808 };
   
    printf("Largest in given array is %d", largest(arr, max));
    return 0;
}

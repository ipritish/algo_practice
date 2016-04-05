#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    qsort(arr, n, sizeof(int), cmpfunc);
   
	printf("%d\n",n); 
    for(int arr_i = 1; arr_i < n; arr_i++){
       if (arr[arr_i] == arr[arr_i - 1]){
			continue;
		}
		else{
			printf("%d\n",(n-arr_i));
		}
    }
    return 0;
}

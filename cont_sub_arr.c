#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    if (a == b ){
        return a;
    }    
    else if (a > b){
        return a;
    }
    else{
        return b;
    }
}

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int findMax(int a[], int size){
    int max_val = a[0];
    for (int i=1; i<size; i++){
        max_val = max(max_val,a[i]);
    }
    return max_val;
}

int maxSumArray(int a[], int size){
    int sum = 0;
    int positive = 0;
    for (int i=0; i< size; i++){
        if (a[i]>=0){
            sum = sum + a[i];
            positive = 1;
        }
    }
    if(positive == 0){
        return findMax(a,size);
    }
    return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    while(t--){
        int N;
        scanf("%d",&N);
        int a[N];
        for (int i=0; i<N; i++){
            scanf("%d",&a[i]);
        }
        printf("%d ",maxSubArraySum(a,N));
        printf("%d\n",maxSumArray(a,N));
    }
    return 0;
}

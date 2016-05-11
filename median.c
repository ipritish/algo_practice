#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
    
    int med_number = (n+1)/2;
    printf("%d",a[med_number-1]);
    return 0;
}


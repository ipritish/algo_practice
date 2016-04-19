#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int j=0; j<100; j++){
        int count = 0;
        for (int k=0; k<n; k++ ){
            if(j == a[k]){
                count++;
            }
            
        }
        for (int p=0;p<count;p++){
            printf("%d ",j);
        }
    }
    return 0;
}

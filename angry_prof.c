#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        int temp_no_students = 0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        for(int a_i = 0; a_i < n; a_i++){
           if ((a[a_i]) <= 0){
               temp_no_students++;
           }
        }
        if(temp_no_students >= k){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
            
    }
    return 0;
}

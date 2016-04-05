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
        int number_found = 0;
        scanf("%d",&n);
        int x = -1;
        int y = -1;
        for (int i = n / 3; i >= 0;i--){
           if ((n - 3 * i) % 5 == 0)
           {
            x = i;
            y = (n - 3 * i) / 5;
            break;
           }
        }
        if (x == -1){
            
            printf("%d\n",-1);
            
        }
        else{
            for(int i = 0; i < 3*x; i++){
                printf("%d",5);
            }
            for(int i = 0; i < 5*y; i++){
                printf("%d",3);
            }
            printf("\n");
        
        }
        
            
            
    }
    return 0;
}


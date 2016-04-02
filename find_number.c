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
        int no_of_divisible_digit = 0;
        int n; 
        scanf("%d",&n);
        int temp = n;
        while (temp != 0) {
            if(temp%10!=0){
                int a = temp%10;
                if(n%a == 0){
                   no_of_divisible_digit++; 
                }
                    
            }
            temp /= 10;
        }
        printf("%d\n",no_of_divisible_digit);
            
    }
    return 0;
}

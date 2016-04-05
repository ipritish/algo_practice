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
        int a = 1;
        scanf("%d",&n);
        for (int i=0 ;i<n;i++){
            if (i%2 == 0)
                a = a*2;
            else
                a++;
        }
        printf("%d\n",a);
    }
    return 0;
}

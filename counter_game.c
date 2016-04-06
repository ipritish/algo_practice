#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 64

int isPowerOfTwo(unsigned long long x)
{
  return ((x != 0) && !(x & (x - 1)));
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 0;
    scanf("%d",&t);
    unsigned long long int i;
    unsigned long long int powers_of_2[100];
    powers_of_2[0] = 1;
    for (i = 1; i < MAX; i++) {
        powers_of_2[i] = powers_of_2[i - 1] * 2;
    }
    for (int ta=0; ta<t; ta++){
        unsigned long long int n;
        unsigned long long int count = 0;
        scanf("%llu",&n);
        while (n > 1){
            if (isPowerOfTwo(n)){
                n = n/2;
            }
            else{
                for (i = 1; i < MAX; i++) {
                    if (n < powers_of_2[i]) {
                        break;
                    }
                }
                n -= powers_of_2[i - 1];
            }
            count++;
        }
        if (count %2 == 0){
            printf("Richard\n");
        }
        else{
            printf("Louise\n");
        }
            
    }
    return 0;
}

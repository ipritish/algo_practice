#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int maxValue = 0;
    for (int i=l; i<=r; i++){
        for (int j=l; j<=r; j++){
            int value = i^j;
            if (value >= maxValue ){
                maxValue = value;
            }
                
        }
    }
    return maxValue;

}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}

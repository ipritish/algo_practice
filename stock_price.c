#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    while(t--){
        int share = 0;
        int n;
        scanf("%d",&n);
        int a[n];
        long long int profit = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int max_current_future_price = 0;
        for (int i=n-1; i>=0; --i) {
            max_current_future_price = max(max_current_future_price, a[i]);
            profit += (long long)max_current_future_price - a[i];
        }
        printf("%lld\n",profit);
    }
    return 0;
}

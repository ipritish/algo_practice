#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define LIMIT 1000000007
#define MAX 100000

long int power_of_2(int n){
    
    if(n==0) {
        return 1;
    }
	if(n%2==0){
		long int x = power_of_2(n/2);
		return (x%LIMIT * x%LIMIT) %LIMIT;
	}
	else{
	   return (2 * power_of_2(n-1)%LIMIT);
	}
    
}
    
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    for (int ta=0; ta<t; ta++ ){
        int n;
        long int a[MAX];
        long int sum = 0;
        scanf("%d",&n);
        for (int i=0; i<n;i++){
            scanf("%ld",&a[i]);
        }
        for (int i=0; i<n; i++){
            sum = sum | a[i];
        }
        sum = ((power_of_2(n-1)%LIMIT) * (sum%LIMIT))%LIMIT;
        printf("%ld\n",sum);
        
    }
    
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int foo(int k, int n)
{
	while(k<0)k+=n;
		return k%n;
}

int main() {

		    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	int n,k,q;
	scanf("%d",&n);
	scanf("%d",&k);
	scanf("%d",&q);
	int a[n];
	for (int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for (int j=0; j<q; j++){
		int idx;
		scanf("%d",&idx);
		printf("%d\n",a[foo(idx-k+n,n)]);
	}
	return 0;
}

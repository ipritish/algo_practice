#include<stdio.h>

#define MOD7 1000000007

long long int power(long long int a, long long int b, long long int c)
{
    if(b==0) 
        return 1;
    if(b==1)
        return a%c;
    if(b%2 == 0)
    {
        long long int temp = power(a,b/2,c);
        return (temp*temp)%c;
    }
    else
    {
        long long int temp = power(a,b/2,c);
        temp = (temp*temp)%c;
        return (temp*a)%c;
    }
}   

int main()
{
        long long int N,i;
       	scanf("%lld",&N);
        int a[N];
        for(i=0 ; i< N ; i++){
			scanf("%d",&a[i]);
		}
           

        long long int outp =1 ;
        for(i=0 ; i< N; i++){
            outp = (outp*(power(2,a[i],MOD7) + 1))%MOD7;
		}
		printf("%lld\n",(outp+MOD7-1)%MOD7);
        return 0;
}

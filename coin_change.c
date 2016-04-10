#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int count( int S[], int m, int n )
{
    int i, j;
    long long int x,y;
 
    // We need n+1 rows as the table is consturcted in bottom up manner using 
    // the base case 0 value case (n = 0)
    long long int table[n+1][m];
    
    // Fill the enteries for 0 value case (n = 0)
    for (i=0; i<m; i++)
        table[0][i] = 1;
 
    // Fill rest of the table enteries in bottom up manner  
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            // Count of solutions including S[j]
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
 
            // Count of solutions excluding S[j]
            y = (j >= 1)? table[i][j-1]: 0;
 
            // total count
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    if (n == 0 || m == 0){
        printf("%d",0);
    }
    else{
        int a[m];
        for (int i=0; i<m ;i++){
            scanf("%d",&a[i]);

        }
        printf("%lld",count(a,m,n));
    }
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int max(long long int a ,long long int b){
    if (a >=b )
        return a;
    else
        return b;
}

long long int GetRequiredCandies(int Students[], int size) {
    int N = size;
    long long int TotalCandies = 0;

    long long int Left[N]; 
    long long int Right[N];
    
    for (int i = 0; i < N; i++) {
        Right[i] = 1;
        Left[i] = 1;
        
    }
    for (int i = N - 2; i >= 0; i--) {
        if (Students[i + 1] < Students[i])
            Right[i] = 1 + Right[i + 1];
    }

    for (int i = 1; i < N; i++) {
        if (Students[i - 1] < Students[i])
            Left[i] = 1 + Left[i - 1];
    }

    for (int i = 0; i < N; i++) {
        TotalCandies += max(Right[i], Left[i]);
    }

    return TotalCandies;
}

int main() {
    int N;
    scanf("%d",&N);

    int Students[N];

    for (int i = 0; i < N; i++) {
        scanf("%d",&Students[i]);
    }

    printf("%lld\n",GetRequiredCandies(Students,N));

    return 0;
}

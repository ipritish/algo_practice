#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
	int h,m,s;
	char c[2];
	scanf("%d:%d:%d%s",&h,&m,&s,c);
	if(!strcmp(c,"PM") && h != 12)h+=12;
	if(!strcmp(c,"AM") && h == 12)h = 0;
	printf("%02d:%02d:%02d\n",h,m,s);
	return 0;
}


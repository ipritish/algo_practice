#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    int last_entry = ar[ar_size-1];
    int first_entry = ar[0];
    
    int i;
    
    for (i=(ar_size-2); i>=0; i--){
        if (ar[i] > last_entry){
            ar[i+1] = ar[i];
            
        }
        else{
            ar[i+1] = last_entry;
            break;
            
        }
    }
    if (first_entry > last_entry){
        ar[0] = last_entry;
    }

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

    for (int i=2; i<= _ar_size; i++){
       insertionSort(i, _ar);
       for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
            printf("%d ", _ar[_ar_i]); 
        }
        printf("\n");
    }    
    
   return 0;
}


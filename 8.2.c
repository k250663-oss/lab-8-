#include <stdio.h>

int main() {
    int sum1 =0  , sum2 = 0 ;
    int year1[] = {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 1};
    int year2[] = {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16};
    
    for(int i=0 ; i<12 ; i++){
        printf("year 1 ,month %d = %d photos\n" ,i+1 , year1[i]);
    }
    for(int i=0 ; i<12 ; i++){
        printf("year 2 ,month %d = %d photos\n" ,i+1 , year2[i]);
    }
 

    return 0;
}

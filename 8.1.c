#include <stdio.h>

int main() {
    int sum1 =0  , sum2 = 0 , sum3 =0;
    int class1[4] = {85, 92 , 78 , 90};
    int class2[4] ={88 , 76 , 95 , 84};
    int class3[4] ={90 , 85, 88 , 92};
    
    for (int i=0 ; i < 4 ; i++){
        sum1 += class1[i];
    }
    
    for(int i =0 ; i<4 ; i++){
        sum2 += class2[i];
    }
    for(int i =0 ; i<4 ; i++){
        sum3 += class3[i];
    }
    
    printf(" avg of class 1 is : %f\n" ,(float)sum1/ 4);
    printf(" avg of class 2 is : %f\n" ,(float)sum2/ 4);
    printf(" avg of class 3 is : %f\n" ,(float)sum3/ 4);
    return 0;
}

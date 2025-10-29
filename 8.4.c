#include <stdio.h>

int main() {
    int row[3][3] = {{1,0,1},{0,0,1},{1,1,0}};
    int sum = 0;
    
    for (int i =0 ; i<3 ; i++){
    	for(int j =0 ; j<3 ; j++){
    		if(row[i][j] == 0){
    			sum = sum +1;
    			printf("empty seat at row %d , seat %d\n" , i +1 , j+1 );
			}
		}
	}
    printf("total empty seats: %d" , sum);

    return 0;
}

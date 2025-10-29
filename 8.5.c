
#include <stdio.h>

int main(){
	
	int i, j;
	int t[4][4] = {{12, 15, 10, 9},{11, 8, 12, 13},{14, 13, 9, 7},{16, 11, 10, 8}};
	
	for (i=0 ; i<4 ; i++){
    	for(j=0 ; j<4 ; j++){
    		if(t[i][j]<t[i][j+1] && t[i][j]<t[i][j-1] && t[i][j]<t[i-1][j] && t[i][j]<t[i+1][j]){
    		printf("At position (%d, %d) with temperature %d\n", i+1, j+1, t[i][j]);
        	}
		}
	}
	
	return 0;
}


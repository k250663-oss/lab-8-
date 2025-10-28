#include<stdio.h>
int main(){
    int sum =0;
	int pic[4][4] = {{1,0,1,0}, {0,1,0,1}, {1,1,0,0}, {0,0,1,1}};
printf("original image:\n");
	for(int i= 0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
		printf("%d", pic[i][j]);	
		}
		printf("\n");
	}
	 for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(pic[i][j] == 0){
                sum = sum +1;
        }
        }
        }
printf("\ninverted image:\n");

	for(int i = 0 ; i<4 ; i++){
	    for(int j= 0 ; j<4 ; j++){
	        pic[i][j] = pic[i][j] ==1 ? 0:1;
	        	printf("%d", pic[i][j]);	
		}
		printf("\n");
	    }
	        
	
	 printf("number of white pixels : %d" , sum);
}
  
	 
	


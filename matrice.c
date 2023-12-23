#include<stdio.h>
#include<string.h>

int main() {
	int a[4][4],b[4][4],c[4][4];
	int i,j,k,t;
	char ope ;
	// operations sur les matrices
    // savoir les deux matrices 
    
    printf("donner la matrice a \n");
    
    for(i=0 ;i<4;i++){
        for(j=0;j<4;j++){
		 printf("%d %d : ",i+1,j+1);
		 scanf("%d",&a[i][j]);
		}
	}
     
     printf("donner la matrice b \n");
	
	for(i=0 ;i<4;i++){
        for(j=0;j<4;j++){
		 printf("%d %d : ",i+1,j+1);
		 scanf("%d",&b[i][j]);
		}
	}
	
	//les operations sur les matrices 
	
    printf("donner le symbole de l'operetion :  ");
    scanf("%s",ope);
    
	if(strcmp(ope,'+') == 0){
		for(i =0 ;i<4;i++){
        	for(j=0;j<4;j++){
        		c[i][j] = a[i][j] + b[i][j];
			}
		}
	}else if(strcmp(ope,'-') == 0){
		for(i =0 ;i<4;i++){
        	for(j=0;j<4;j++){
        		c[i][j] = a[i][j] - b[i][j];
			}
		};
    } else{
		for(i =0 ;i<4;i++){
        	for(j=0;j<4;j++){
        		for(k=0;k<4;k++){
        		c[i][j] = a[i][k] +b[k][j];
        	    }
			}
		};
	}
	
	
	// la matrice resultante 
	
	printf("la matrice a \n");
	for(i =0 ;i<4;i++){
        for(j=0;j<4;j++){ 
    		printf("%d  ",c[i][j]);
		}
		printf("\n");
    }

	
    return 0;
}

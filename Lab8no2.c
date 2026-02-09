#include <stdio.h>
char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
int checkscore(char std[]);

int main() {
    int i,j;
    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},
        	{'D','B','A','B','C','A','E','E','A','D'},
        	{'E','D','D','A','C','B','E','E','A','D'},
        	{'C','B','A','E','D','C','E','E','A','D'},
        	{'A','B','D','C','C','D','E','E','A','D'},
        	{'B','B','E','C','C','D','E','E','A','D'},
        	{'B','B','A','C','C','D','E','E','A','D'},
        	{'E','B','E','C','C','D','E','E','A','D'}};

    
   	for(i=0;i<8;i++){
   		printf("std %d => %d\n", (i+1), checkscore(ans[i]));
	   }
    return 0;
}

int checkscore(char std[]){
    int score=0;
    int i;

    for(i=0;i<10;i++){
        if(std[i] == charkeys[i])
            score++;
        
    }
    return score;
}



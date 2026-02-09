#include <stdio.h>
char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
int hardestQuestion(char ans[][10], int students);


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

    
   	printf("Hardest question is no. %d\n", hardestQuestion(ans, 8));


    return 0;
}

int hardestQuestion(char ans[][10],int students){
    int i,j;
    int minCorrect=students;
    int hardest=0;
    for(j=0;j<10;j++){   
        int count=0;
        for(i=0;i<students; i++){ 
            if(ans[i][j]==charkeys[j])
                count++;
        }
        if(count<minCorrect){
            minCorrect=count;
            hardest=j;
        }
    }
    return hardest+1; 
}



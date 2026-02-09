#include <stdio.h>
char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
int countCorrectQ1(char ans[][10], int students);

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
	   
	printf("Number of students correct in question 1 = %d\n",
       countCorrectQ1(ans, 8));

    return 0;
}

int countCorrectQ1(char ans[][10],int students){
    int count=0;
    int i;
    for(i=0; i<students;i++){
        if(ans[i][0]==charkeys[0])
            count++;
    }
    return count;
}




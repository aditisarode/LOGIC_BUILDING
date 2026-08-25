//input 5
//output 0 1 2 3 4 5
#include<stdio.h>
void disaplay(int i){
    int iCnt=0;
    for(iCnt=0;iCnt<=i;iCnt++){
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main(){
    int ivalue=0;
    printf("enter the number");
    scanf("%d",&ivalue);
    disaplay(ivalue);
    return 0;                                                                   

}
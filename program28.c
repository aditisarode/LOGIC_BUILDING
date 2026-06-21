//objective-> 

#include<stdio.h>

void Display(int iCnt,int n)
{
    for(iCnt=1;iCnt<=n;iCnt++)
    {
        printf("Jay Ganesh..\n");
    }
}
int main()
{
    int iCnt=0;
    int n;

    printf("Enter number of times u want to print on the screen :\n");
    scanf("%d",&n);

    Display(iCnt,n);
}
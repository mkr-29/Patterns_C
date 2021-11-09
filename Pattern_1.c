//optimised code so that it doesnt take up much area
#include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("* ");
        }printf("\n");
    }
}


//non optimised code:
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++) //decides no of rows
    {
        for(j=1; j<=5; j++) //decides no of cols
        {
            printf("* ");  
        }
        printf("\n");
    }
}

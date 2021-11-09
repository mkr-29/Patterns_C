#include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("%d ",i);
        }printf("\n");
    }
}

///////////////////OR/////////////////////(Same code different representation)

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

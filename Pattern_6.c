#include<stdio.h>
//Pattern 6
int main(){
    int i,j,k=1;
    for(i=5; i>=1; i--){
        for(j=5; j>=1; j--){
            printf("%2d ",k++);
        }printf("\n");
    }
}

/////////////////////OR/////////////////////////

#include<stdio.h>
//Pattern 6
int main()
{
    int i,j,k=1;
    for(i=5; i>=1; i--)
    {
        for(j=5; j>=1; j--)
        {
            printf("%2d ",k++);
        }
        printf("\n");
    }
}

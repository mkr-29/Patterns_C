int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        k=i;
        for(j=1; j<=5; j++){
            printf("%2d ",k);
            k+=5;
        }printf("\n");
    }
}

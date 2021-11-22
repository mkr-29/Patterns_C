int main(){
    int i,j,k;
    for(i=0; i<=4; i++){
        k=i;
        for(j=1; j<=5; j++){
            k+=5;
            printf("%c ",k-5+65);
        }printf("\n");
    }
}

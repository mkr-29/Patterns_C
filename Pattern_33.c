int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        k=5-i;
        for(j=1; j<=5; j++){
            printf("%c ",k+65);
            k=k+5;
        }printf("\n");
    }
}

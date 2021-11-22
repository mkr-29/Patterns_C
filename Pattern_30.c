int main(){
    int i,j;
    char c='A';
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("%c ",c);
            if(c<'Z'){
                c++;
            }
            else{
                c='A';
            }
        }printf("\n");
    }
}

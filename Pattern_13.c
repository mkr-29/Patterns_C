int main(){
    int i,j,k,l;
    for(i=1; i<=5; i++){
        k=i;
        l=5-i+1;
        for(j=1; j<=5; j++){
            if(j%2==1){
                printf("%2d ",k);
            }
            else{
                printf("%2d ",l);
            }
            k=k+5;
            l=l+5;
        }printf("\n");
    }
}

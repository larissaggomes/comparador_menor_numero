
int menor(int n,int nm){
 if(n<nm){
    printf("o primeiro e menor");
 }
 else{
    printf("o segundo e menor");
 }
}
int main(void){

int n1,n2,res;

printf("digite um numero:");
scanf("%i",&n1);
printf("digite um numero");
scanf("%i",&n2);
res=menor(n1,n2);
}

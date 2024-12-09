#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int a);
int main(){
    int a;
    for(int i=0; i<2; i++){
    printf("nhap vao so muon kiem tra nguyen to thu %d: ",i+1);
    scanf("%d", &a);
    if(checkPrime(a)){
        printf("\ntrue\n");
    }else 
        printf("\nfalse\n");
    }
    return 0;
}
bool checkPrime(int a){
    int check=0;
    for(int i=2; i<a; i++){
        if(a%i==0){
            check=1;
        }
    }
    if(check==0 && a!=1){
        return true;
    }else
        return false;
}

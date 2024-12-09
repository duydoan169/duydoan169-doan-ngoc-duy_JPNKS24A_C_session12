#include<stdio.h>
int factoFunc(int a);
int main(){
    int facto;
    facto=factoFunc(3);
    printf("%d", facto);
    return 0;
}
int factoFunc(int a){
    int result=1;
    for(a; a>0; a--){
    result=result*a;
    }
    return result;
}
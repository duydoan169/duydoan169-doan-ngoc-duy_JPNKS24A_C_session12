#include<stdio.h>
int maxFind(int array[]);
int main(){
    int lonNhat;
    int array[5]={0,1,2,3,4};
    lonNhat=maxFind(array);
    printf("%d", lonNhat);
    return 0;
}
int maxFind(int array[]){
    int lonNhat=0;
    for(int i=0; i<5; i++){
        if(lonNhat<array[i]){
            lonNhat=array[i];
        }
    }
    return lonNhat;
}
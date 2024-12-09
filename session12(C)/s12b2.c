#include<stdio.h>
void printArr(int array[]);
int main(){
    int array[5]={0,1,2,3,4};
    printArr(array);
    return 0;
}
void printArr(int array[]){
    for(int i=0; i<5; i++){
        printf("%d\n", array[i]);
    }
}
#include<stdio.h>

int main(){
    printf("we are here to thanks you");
    int a=10;
    int b=20;
    int temp=0;

    temp=a;
    a=b;
    b=temp;
    printf("new value of a -> %d \n new value of b -> %d",a,b);
}
#include<stdio.h>
#include "node1.h"
int x=10;
int sendx(){
    return x;
}
void gety(int y){
    printf("%d is the sum",x+y);
}
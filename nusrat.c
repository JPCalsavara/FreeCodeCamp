#include<stdio.h>

int main(){
    float p1 = 7.0,p2,trabalho;
    scanf("%f %f",&p2,&trabalho);
    float media = (p1 + p2)*0.35 + trabalho*0.3;
    printf("%.2f",media);
    return 0;
}
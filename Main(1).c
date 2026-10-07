#include <stdio.h>

float simpleinterest(float principal,float rate,int time);


int main(){
    float p,r,t,SI;

    printf("enter principal, rate and time:\n");
    scanf("%f%f%f",&p,&r,&t);

    SI = simpleinterest(p,r,t);

    printf("simpleinterest = KSH %.2f",SI);

    return 0;
}
float simpleinterest(float principal,float rate ,int time){
    float interest;
    interest=principal*rate/100*time;
}

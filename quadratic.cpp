#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,q;
    printf("Please enter a , b , c from Equation : ");
    scanf("%f %f %f",&a,&b,&c);
    q = sqrt((b*b)-4*a*c);
    if( q > 0 ){
        printf("x = %f , %f",(-b+q)/(2*a) , (-b-q)/(2*a)); 
    }
    else if(q == 0){
        printf("x = %f",-b/(2*a));
    }
    else{
        printf("No answer");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(){
    int order,num,step,i,j,a=1,m;
    scanf("%d",&num);
    
    for(i=2 ; i < num ; i++){
        a = num % i;
        if(a == 0){
            printf("Not prime");
            break;
        }
    }
    if(a != 0){
            printf("Prime");
        }
    
    return 0;
}
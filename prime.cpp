#include <stdio.h>
#include <math.h>
int main(){
    int order,num,i,j=2,a=1,m;
    printf("::");
    scanf("%d",&order);
    order = order + 2;
        for(m=2 ; 1 ;m++){
            for(i=2 ; i<m ; i++ ){
                a = m%i;
                if(a == 0){
                    break;
                }
            }
            if(a != 0){
                num = m;
                printf("%d\n",m);
                j++;
            }
            if(j == order){
                break;
            }
        }
    printf("#%d prime number = %d",order-2,num);
    return 0;
}
#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Please enter number : ");
    scanf("%d",&n);
    for(i=1 ; i < n ; i++){
        if(i%3 == 0 || i%5 == 0){
            printf("%d\n",i);
            sum = sum+i;
        }
    }
    printf("sum is %d",sum);
    return 0;
}
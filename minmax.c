#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,ar[5];
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);

    }
    int min,max;
    min=max=ar[0];
    int sum=ar[0]+ar[1]+ar[2]+ar[3]+ar[3];
    for(i=1;i<5;i++){
        if(ar[i]>max){
            max=ar[i];
        }
        else if(ar[i]<min){
        min=ar[i];
        }
    }
     printf("%d %d", sum-max,sum-min);

    return 0;
}

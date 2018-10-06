#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i,n,rem,ar[60];
    printf("Enter no of array");
    scanf("%d",&n);
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        rem=ar[i]%5;
        printf("%d \n",rem);
        if(ar[i]>38 && rem>=3 ){
            ar[i]=ar[i]+(5-rem);

        }
    }
    for(i=0;i<n;i++){
        printf("%d \n",ar[i]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[5];
    long sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",arr+i);
        sum+=arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%ld %ld",sum-max,sum-min);
}

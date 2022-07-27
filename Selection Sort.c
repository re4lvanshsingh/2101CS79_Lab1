#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }

    //SELECTION SORT
    for(int i=0;i<n;i++){
        int minimum=arr[i];
        int index=i;
        for(int j=i;j<n;j++){
            if(minimum>arr[j]){
                minimum=arr[j];
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=minimum;
        arr[index]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

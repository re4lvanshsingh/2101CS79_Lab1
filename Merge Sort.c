#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
 
    //CREATE TEMPORARY ARRAYS
    int L[n1], R[n2];
 
    //COPYING VALUES TO TEMP ARRAYS
    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
    }
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i<n1 && j<n2){
        if(L[i]<=R[j]) {
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while(j<n2) {
        arr[k]=R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[],int l,int r){
    if(l<r){
        int m=(r+l)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

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

    //MERGE SORT
    MergeSort(arr,0,sizeof(arr)/arr[0]);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int partition(int arr[],int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
        while(pivot>=arr[i])
            i++;
        while(pivot<arr[j])
            j--;
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;

    return j;
}
  
void QuickSort(int arr[],int low,int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        QuickSort(arr,low,pivot - 1);
        QuickSort(arr,pivot+1,high);
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

    //QUICK SORT
    QuickSort(arr,0,sizeof(arr)/arr[0]);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

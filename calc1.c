#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int add(int x,int y){
    return x+y;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    while(true){
        printf("1. Add\n");
        printf("2. Exit\n");
        printf("\nEnter your option\n");
        int x;
        scanf("%d",&x);

        if(x==1){
            int a,b;
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number \n");
            scanf("%d",&b);
            printf("Sum of %d & %d is: %d\n",a,b,add(a,b)); 
        }
        else if(x==2){
            printf("\nExiting...");
            return 0;
        }
        else{
            printf("wrong number entered try again\n");
        }

    }

    return 0;
}

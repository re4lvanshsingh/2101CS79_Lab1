#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int add(int x,int y){
    return x+y;
}

int subtract(int x,int y){
    return x-y;
}

int multiply(int x,int y){
    return x*y;
}

double divide(int x,int y){
    double a=(double)x/y;
    return a;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    while(true){
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
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
            int a,b;
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number: \n");
            scanf("%d",&b);
            printf("Subtraction of %d & %d is: %d\n",a,b,subtract(a,b));
        }
        else if(x==3){
            int a,b;
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number: \n");
            scanf("%d",&b);
            printf("Multiplication of %d & %d is: %d\n",a,b,multiply(a,b));
        }
        else if(x==4){
            int a,b;
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number: \n");
            scanf("%d",&b);
            printf("Division of %d & %d is: %lf\n",a,b,divide(a,b));
        }
        else if(x==5){
            printf("\nExiting...");
            return 0;
        }
        else{
            printf("wrong number entered try again\n");
        }

    }

    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
    int sum=0;
    int rem;
    for(int i=1 ; i<n ; i++){
        rem=n%i;
        if(rem==0){
            sum+=i;
        }
    }

    if(sum==n){
        printf("It's a Perfect Number \n");
    }
    else{
        printf("It's not a Perfect number \n");
    }
    return 0;
}

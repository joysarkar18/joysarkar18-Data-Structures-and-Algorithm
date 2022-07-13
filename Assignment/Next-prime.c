#include <stdio.h>

int nextPrime(int n){
    if(n==0){
     return 2;
 }

 else if (n<0){
     return -1;
 }

 else{
     while (n)
     {  
         int count=0;
        for (int i = 2; i < n; i++)
        {
            if(n%i==0){
            count=1;
            }
        }

        if(count==0){
            return n;
        }
        n++;
     }
     
 }

}
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
 


 printf("The next prime = %d \n",nextPrime(n));
    return 0;
    
}
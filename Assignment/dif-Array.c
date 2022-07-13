#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of your array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements of the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans[n-1];
    for (int i = 0; i < n-1; i++)
    {
        ans[i] = arr[i] - arr[i + 1];
    }
    

    printf("difference between consecutive elements : ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d  ", ans[i]);
    }

   int max=-999999999;
   for (int i = 0; i < n-1; i++)
   {
      if(ans[i]>max){
          max=ans[i];
      }
   }
   
   printf("\nlargest difference of the output array = %d \n",max);



    return 0;
}

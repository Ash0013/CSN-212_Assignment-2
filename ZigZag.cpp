#include <stdio.h>
#include <stdlib.h>
 
int max(int a, int b)
 {
  return (a > b) ? a : b; 
 }
 
int zzis(int arr[], int n)
{
    int Z[n][2];
    
    for (int i = 0; i < n; i++)
        Z[i][0] = Z[i][1] = 1;
 
    int result = 1;
 
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && Z[i][0] < Z[j][1] + 1)
                Z[i][0] = Z[j][1] + 1;
 
            if( arr[j] > arr[i] && Z[i][1] < Z[j][0] + 1)
                Z[i][1] = Z[j][0] + 1;
        }
 
        if (result < max(Z[i][0], Z[i][1]))
            result = max(Z[i][0], Z[i][1]);
    }
 
    return result;
}
 
int main()
{
    int arr[] = { 10, 22, 9, 33, 49, 50, 31, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of Longest Zig-Zag subsequence is %d\n",
            zzis(arr, n) );
    return 0;
}

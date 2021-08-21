#include<stdio.h>
void multiplication(int* x, int* h, int n, int m)
{
    int maxSize = n > m ? n : m;
    int row_vec[maxSize], col_vec[maxSize];
    for (int i = 0; i < maxSize; i++) {
        if (i >= n) {
            row_vec[i] = 0;
        }
        else {
            row_vec[i] = x[i];
        }
    }
   for (int i = 0; i < maxSize; i++) {
        if (i >= m) {
            col_vec[i] = 0;
        }
        else {
            col_vec[i] = h[i];
        }
    }
    int res[maxSize];
  for(int i=0;i<maxSize;i++){
      res[i] = (row_vec[i] * col_vec[i]);
  }
  for (int i=0;i<maxSize;i++){
      printf("%d ",res[i]);
  }
  
   
}
int main()
{
    int n;
    printf("Please give length of array x : ");
    scanf("%d",&n);
    int x[n] ;
     printf("Please give the values of array x: ");
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
   int m;
    printf("Please give length of array h: ");
    scanf("%d",&m);
    int h[m] ;
     printf("Please give the values of array h: ");
    for(int i=0;i<m;i++){
        scanf("%d",&h[i]);
    }
 
    multiplication(x, h, n, m);
 
    return 0;
}

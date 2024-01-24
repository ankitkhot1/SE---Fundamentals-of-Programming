#include <stdio.h>
 
int main()
{
  int i, j, k = 1, rows;
 
  printf("Enter the no. of rows: ");
  scanf("%d", &rows);
 
  printf("pattern:\n");
  for (i = 1; i <= rows; i++)
  {
    for (j = 1; j <= i; j++, k++)
    {
      printf("%2d ", k);
    }
 
    printf("\n");
  }
 
  return 0;
}

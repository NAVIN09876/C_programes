#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("size of array: ");
    scanf("%d", &size);

    // Allocate a single contiguous block for all elements
    int **arr = (int**)calloc(size , sizeof(int*));
    if (!arr)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements
    for (int i = 0; i < size; i++)
    {
      for(int j=0;j<size;j++)
      {
        scanf("%d", (arr+i)+j);
      }
    }

    // Print array
   for (int i = 0; i < size; i++)
    {
      for(int j=0;j<size;j++)
      {
        printf("%d ", *((arr+i)+j));
      }
      printf("\n");
    }

    // Free memory
    free(arr);
    arr = NULL;

    return 0;
}
#include <stdio.h> 

#include <time.h> 

   

int main() 

{ 

    clock_t t; 

    t = clock(); 

    int c, first, last, middle, n, search, array[100]; 

printf("Khushi Arora\nCSE3c\n");
  printf("Enter no of items in array\n");
  scanf("%d", &n); 

  printf("Enter %d elements\n", n); 

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]); 

  printf("Enter element to be found\n");
  scanf("%d", &search); 

  first = 0;
  last = n - 1;
  middle = (first+last)/2; 

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("found at location %d.\n", middle+1);
      break;
    }
    else
      last = middle - 1; 

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);



    t = clock() - t; 

    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 

   

    printf(" %f seconds \n", time_taken); 

    return 0; 

}
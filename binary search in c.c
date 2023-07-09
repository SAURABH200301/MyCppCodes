#include <stdio.h>
int main()
{
  int c, f, l, mid, n, num, array[10];  //c for interation purpose, f: first , l:last n for the number of elements , num : for the element to find 
      
  printf("Enter number of elements\n(MAX: 10)\n");
  scanf("%d", &n);

  printf("Enter elements in ascending order\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &num);

  f = 0;
  l= n - 1;
  mid= (f+l)/2;

  while (f<= l) {
    if (array[mid] < num)
      f = mid + 1;
    else if (array[mid] == num) {
      printf("%d found at location %d.\n", num, mid+1);
      break;
    }
    else
      l = mid - 1;

    mid = (f + l)/2;
  }
  if (f > l)
    printf("Not found! %d isn't present in the list.\n", num);

  return 0;
}

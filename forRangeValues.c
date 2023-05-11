#include <stdio.h>

int main() {
  
  int n1, n2, i = 0;

  printf("\033[1m-> Range values\033[0m\n");
  printf("\nStart number: ");
  scanf("%i", &n1);
  printf("End number: ");
  scanf("%i", &n2);

  for(i=n1; i<=n2; i++) {
    printf("\n%i", i);
  }
    
  for(i=n1; i>=n2; i--) {
    printf("\n%i", i);
  }
}

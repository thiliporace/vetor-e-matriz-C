#include <stdio.h>

int main() {
  int v[3] = {1, 2, 3};
  int m[3][2] = {{1,2},{3,4},{5,6}};
  int i;
  for (i = 0; i < 3; i++) {
    int j;
    printf("%d \n", v[i]);
    for (j=0;j<2;j++){
       printf("%d ",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
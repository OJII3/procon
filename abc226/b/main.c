#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned n;
  scanf("%d", &n);

  int **a;
  a = (int **)calloc(n, sizeof(int));

  for (int i = 0; i < n; ++i) {
    int l;
    scanf("%d", &l);
    a[i] = (int *)calloc(l, sizeof(int));
    for (int j = 0; j < l; ++i) {
      scanf("%d", &a[i][j]);
    }
  }
  return 0;
}

#include <stdio.h >

int result[1001], p[10000], new_size = 0;
int main(){
  int i, j, n;
  p[0] = 1;
  result[0] = 1;
  for(i = 1; i <= 1000; i++){
    for(j = 0; j <= new_size; j++){
      p[j] *= i;
    }
    for(j = 0; j <= new_size; j++){
      p[j+1] += p[j]/10;
      p[j] %= 10;
      result[i] += p[j];
    }
    while(p[new_size+1]){
      new_size++;
      p[new_size+1] += p[new_size]/10;
      p[new_size] %= 10;
      result[i] += p[new_size];
    }
  }
  while(scanf("%d", &n)==1){
    printf("%d\n", result[n]);
  }
  return 0;
}


#include <stdio.h >

__int64  p,temp;
int main(){
  int i, j, n,result, new_size = 0;
  scanf("%d", &n);
  p = 1;
  result = 1;
  for(i = 1; i <=n; i++){
    for(j = 0; j <= new_size; j++){
      p *= i;
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
    printf("%d\n", result);
  return 0;
}


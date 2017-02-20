#include <stdio.h >
int result[10], p[10], new_size = 0;
int main(){
  int i, j, n;
  p[0] = 1;
  result[0] = 1;
  for(i = 1; i <= 5; i++){
    for(j = 0; j <= new_size; j++){
      p[j] *= i;
    }
    for(j = 0; j <= new_size; j++){
            printf("%d\n",p[j+1]);
      p[j+1] += p[j]/10;
      printf("%d\n",p[j+1]);
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
  return 0;
}

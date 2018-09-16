#include <stdio.h>

int main(){
  unsigned int x = 5000000000;
  char * p = &x;
  printf("integer: %x \n", x);

  int i;
  for( i = 0; i < 4; i++){
    printf("byte: %hhx \n", *p);
    p++;
  }

  p = &x;
  int j;
  for( j = 0; j < 4; j++){
    *p++;
    p++;
  }
  printf("increment each byte by 1: %x, %d \n", x, x);

  p = &x;
  int k;
  for( k = 0; k < 4; k++){
    *p += 16;
    p++;
  }
  printf("increment each byte by 16: %x, %d \n", x, x);

  return 0;
}

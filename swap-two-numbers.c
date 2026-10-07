#include <stdio.h>

int main() {
      int a = 7;
      int b = 3;
      int temp = 0;
      printf("%d %d \n", a, b);
      
      temp = a;
      a = b; 
      b = temp; 
           
      printf("%d %d\n", a, temp);
}

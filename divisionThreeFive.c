#include <stdio.h>
int main() {
    int num = 30;

    if(num % 3 == 0) {
     if(num % 5 == 0) {
     printf("Yes, this number - %d, is divisible by 3 and 5\n", num);
     }
    } else {
     printf("No\n");
}
}

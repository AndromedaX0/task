/* #include <stdio.h>
int main() {
    int x = 17;
    if(x % 2 == 0){
     printf("%d --> This number is EVEN\n", x);
    }else{
     printf("%d --> This number is ODD\n", x);
}
}*/

#include <stdio.h>
int main() {
    int num = 0;

    printf("Please Enter number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
      printf("%d --> This number is EVEN\n", num);
    }else{
     printf("%d --> This number is ODD\n", num);
}
}

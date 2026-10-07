/*#include <stdio.h>
int main() {
    int x = 1737;
    printf("%d\n", x % 10);
}*/



/* #include <stdio.h>
int main() {
    int x = 0;
    printf("Please enter four-digit number: ");
    scanf("%d", &x);
    printf("Last number is %d\n", x % 10);
} */

#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "1737";
    int len = strlen(str);

    printf("Last Number is %c \n", str[len - 1]);
    
}

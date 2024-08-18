#include <stdio.h>
#include <string.h>                             
void reverse(char* str) {
      int n = strlen(str);
      for (int i = 0; i < n / 2; i++) {
         char temp = str[i];
         str[i] = str[n - i - 1];
         str[n - i - 1] = temp;
       }
    }
int main(int argc, char *argv[]) {
   char text=reverse(argv[1]);
   printf("Reversed: %s\\n", text);
   return 0;
}
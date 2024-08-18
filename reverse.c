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
int main() {
   char text[] = "''' + MY_TEXT + '''";
   reverse(text);
   printf("Reversed: %s\\n", text);
   return 0;
}
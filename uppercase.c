#include <stdio.h>
#include <ctype.h>
                  
int main() {
    char text[] = "''' + MY_TEXT + '''";
    for(int i = 0; text[i]; i++){
        text[i] = toupper(text[i]);
    }
    printf("Uppercase: %s\\n", text);
    return 0;
}
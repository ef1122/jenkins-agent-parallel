#include <stdio.h>
#include <ctype.h>
                  
int main(int argc, char *argv[]) {
    char text[] = argv[1];
    for(int i = 0; text[i]; i++){
        text[i] = toupper(text[i]);
    }
    printf("Uppercase: %s\\n", text);
    return 0;
}
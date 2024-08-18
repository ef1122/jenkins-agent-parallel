#include <stdio.h>
#include <ctype.h>
                  
int main(int argc, char *argv[]) {
    char text[];
    for(int i = 0; argv[1][i]; i++){
        text[i] = toupper(text[i]);
    }
    printf("Uppercase: %s\\n", text);
    return 0;
}
#include <stdio.h>
#include <ctype.h>
                  
void to_uppercase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <text>\n", argv[0]);
        return 1;
    }

    to_uppercase(argv[1]);

    printf("Text in uppercase: %s\n", argv[1]);

    return 0;
}
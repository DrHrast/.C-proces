#include <stdio.h>
#include <string.h>


void rev(char string[]) {
    for (int i = strlen(string); i >= 0; i--) {
        printf("%c", string[i]);
    }
    
}

int main() {
    char lista[] = "There's a thin line between love and hate.";
    rev(lista);
    return 0;
}
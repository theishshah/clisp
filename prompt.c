#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
    
    puts("clisp");
    puts("ctrl+c to exit");

    while(1){
    
        fputs("clisp> ", stdout);

        fgets(input, 2048, stdin);

        printf("No you're a %s", input);
    }

return 0;
}

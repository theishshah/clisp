#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {
    
    puts("clisp");
    puts("ctrl+c to exit");

    while(1){
        
        char* input = readline("lispy>> ");
    
        add_history(input);

        printf("No you're a %s \n", input);
        
        free(input);
    }

return 0;
}

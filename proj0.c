#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int i;

    // Print the fixed prefix first
    printf(1, "CSE3320 proj0 printing in user space: ");

    // Print all command-line arguments separated by space
    for(i = 1; i < argc; i++){
        printf(1, "%s", argv[i]);
        if(i < argc - 1){
            printf(1, " ");
        }
    }

    // Print a newline at the end
    printf(1, "\n");

    exit();
}

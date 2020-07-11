#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    // This file explains the meanihng of argc and argv
    // argc: the count of the parameters. The default value is the 0 with argv[0] standing for the file name 
    // argv[], stands for the parameters follows 
    int i; 
    printf("argc = %d\n", argc); 
    for(i=0; i < argc; i++){
        // if (i == 0){
        //     argv[i] = 0;
        // }
            
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0; 
}

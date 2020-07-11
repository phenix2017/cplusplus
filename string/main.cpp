#include <stdlib.h>
#include <stdio.h>
// #include <string>
// #include<iostream>
using namespace std; 
int main(int argc, char* argv[]){
    // This file explains the meanihng of argc and argv
    // argc: the count of the parameters. The default value is the 0 with argv[0] standing for the file name 
    // argv[], stands for the parameters follows 
    
    //char * new_char_array[]; // This is not allowed since the size is not unknow
        
    const char * new_char_array[2]; // This is not allowed since the size is not unknow
    new_char_array[0] = "hello"; 
    new_char_array[1] = "nihao"; 
    for( int i=0; i<2; i++){
        printf("The string array %s \n", new_char_array[i]); 
    }
    const char *  char_array = "test string"; 
    // char * char_array = "test string";  // This is not allowed since the char * is not constant. 
    printf("char_arry is a string = %s", char_array);
    return 0; 
}

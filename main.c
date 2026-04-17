#include <stdio.h>
#include <unistd.h> // For the sleep function

int main() {
    // Change "SISTER" to her actual name!
    char name[] = "SISTER"; 
    
    printf("\033[1;31m"); // This turns the text RED
    
    printf("\n");
    printf("         ****     ****         \n");
    printf("       **    ** **    **       \n");
    printf("      **       *       **      \n");
    printf("      **               **      \n");
    printf("       **             **       \n");
    printf("         **         **         \n");
    printf("           **     **           \n");
    printf("             ** **             \n");
    printf("               *               \n");
    
    printf("\033[0m"); // Reset color to white
    
    printf("\n     ERROR: System Overload...\n");
    sleep(1);
    printf("     REASON: Too much awesomeness detected.\n");
    sleep(1);
    printf("\n     [ Hello, %s! You are the best! ]\n\n", name);

    return 0;
}
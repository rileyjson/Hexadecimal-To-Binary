#include <stdio.h>
#include <stdint.h>


int main() {
    char HexDigit[5];
    char HexString[20];  
    uint32_t b;

    while (1) {
    printf("\nEnter a hex digit (0-9, A-F) to convert to binary (Enter 'X' to exit): ");
    scanf("%s", HexDigit);

    if (HexDigit[0] == 'X') {
        printf("Goodbye!");
        break;
    }

    sprintf(HexString, "0x000%s0000", HexDigit); //Stores output instead of printing
    sscanf(HexString, "%X", &b); //Convert to int

    uint32_t a = 0xFFFFFFFF;
    uint32_t r = a & b;

    r >>= 16;

    printf("Binary: ");
    printf("%d%d%d%d ", (r >> 3) & 1, (r >> 2) & 1, (r >> 1) & 1, (r >> 0) & 1);    
      //&1 extracts bits 
    }

    return 0;
}

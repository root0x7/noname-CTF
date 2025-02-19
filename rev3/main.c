#include <stdio.h>
#include <stdlib.h>

__attribute__((section(".hidden"))) const char hidden_flag[] = {
    'f', 0x00, 
    'l', 0x00, 
    'a', 0x00, 
    'g', 0x00, 
    '{', 0x00, 
    'D', 0x00, 
    '3', 0x00, 
    'L', 0x00, 
    'V', 0x00, 
    '3', 0x00, 
    'I', 0x00, 
    'N', 0x00, 
    'T', 0x00, 
    '0', 0x00, 
    '_', 0x00, 
    'C', 0x00, 
    '0', 0x00, 
    'D', 0x00, 
    '3', 0x00, 
    '}', 0x00, 
};

int main() {
    printf("Salom qiziqroq nima bor ekan ? \n");
    for (int i = 0; i < 10; i++) {
        asm volatile ("nop");
    }

    return 0;
}
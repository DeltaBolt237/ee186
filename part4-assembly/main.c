#include <stdint.h>

int main(void)
{
    __asm__ volatile (
        "LDR R0, =0x4002104C\n\t"
        "LDR R1, [R0]\n\t"
        "ORR R1, R1, #0x2\n\t"
        "STR R1, [R0]\n\t"

        "LDR R0, =0x48000400\n\t"
        "LDR R1, [R0]\n\t"
        "BIC R1, R1, #0xC000\n\t"
        "ORR R1, R1, #0x4000\n\t"
        "STR R1, [R0]\n\t"

        "LDR R0, =0x48000414\n\t"
        "LDR R1, [R0]\n\t"
        "ORR R1, R1, #0x80\n\t"
        "STR R1, [R0]\n\t"
    );

    while (1);
}

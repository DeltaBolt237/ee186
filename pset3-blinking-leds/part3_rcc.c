#include <stdint.h>

#define RCC_AHB2ENR (*(volatile uint32_t*)(0x40021000 + 0x4C))

int main(void)
{
    RCC_AHB2ENR |= (1 << 1) | (1 << 2);
    uint32_t x = RCC_AHB2ENR;

    while (1);
}

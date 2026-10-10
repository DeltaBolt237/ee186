#include <stdint.h>

#define RCC_AHB2ENR   (*(volatile uint32_t*)(0x40021000 + 0x4C))
#define GPIOB_MODER   (*(volatile uint32_t*)(0x48000400 + 0x00))
#define GPIOB_ODR     (*(volatile uint32_t*)(0x48000400 + 0x14))
#define GPIOC_MODER   (*(volatile uint32_t*)(0x48000800 + 0x00))
#define GPIOC_ODR     (*(volatile uint32_t*)(0x48000800 + 0x14))

void delay(void)
{
    volatile uint32_t count = 400000;
    while (count > 0)
    {
        count--;
    }
}

int main(void)
{
    RCC_AHB2ENR |= (1 << 1) | (1 << 2);

    GPIOC_MODER &= ~(3 << 14);
    GPIOC_MODER |=  (1 << 14);

    GPIOB_MODER &= ~(3 << 14);
    GPIOB_MODER |=  (1 << 14);

    GPIOB_MODER &= ~(3 << 28);
    GPIOB_MODER |=  (1 << 28);

    while (1)
    {
        GPIOB_ODR &= ~(1 << 14);
        GPIOC_ODR |=  (1 << 7);
        delay();

        GPIOC_ODR &= ~(1 << 7);
        GPIOB_ODR |=  (1 << 7);
        delay();

        GPIOB_ODR &= ~(1 << 7);
        GPIOB_ODR |=  (1 << 14);
        delay();
    }
}

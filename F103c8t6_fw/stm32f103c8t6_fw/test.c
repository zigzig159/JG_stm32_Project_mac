#include <stdint.h> 
#include <stdlib.h> 
#include <stdio.h> 
typedef enum 
{
    GPIO_RESET = 0u,
    GPIO_SET 
} gpio_state_t;

typedef struct test{
    uint32_t gpio_pin; 
    uint32_t gpio_port; 
    uint32_t gpio_state; 
} gpio_tab_t; 


void gpio_set_pin(gpio_tab_t *gpio, uint32_t gpioport, uint32_t gpiopin) 
{
    if(gpio->gpio_state == GPIO_RESET){
     gpio->gpio_pin = gpiopin; gpio->gpio_port = gpioport; gpio->gpio_state = GPIO_SET;
    }
    } 
 
gpio_tab_t gpioa; 
uint32_t gpiob = 0xFFFF; 
uint32_t gpiopin12 = 0x000F; 

int main(void) 
{ 
    gpio_set_pin(&gpioa, gpiob, gpiopin12); 
    printf("%x",gpioa.gpio_pin); 
    printf("GPIO : %d", gpioa.gpio_state);
    return 0;
 }
#include <stdio.h>
#include <stdint.h>

int main() 
{

    uint8_t a;
    uint8_t b = 6;
    
    printf("a \t a==b \t a<b \t a>b \n");

    for(int i =0; i<512; i++) 
    {
        printf("%u \t %d \t %d \t %d \n", a, a == b, a < b, a > b);  
        a++;
    }

    return 0;
}

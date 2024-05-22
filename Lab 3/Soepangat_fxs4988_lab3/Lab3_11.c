#include <stdio.h>
#include <stdint.h>

int main() 
{

    uint8_t a = 0, b = 6;
    int i;
    
    printf("a \t a==b \t a<b \t a>b \n");

    for(i = 0; i < 32; i++) 
    {
        int a_equals_b = 0, a_less_b = 0, a_more_b = 0;

        	if(a == b) 
        {
            a_equals_b = 1;
        } 
        	else if(a < b) 
        {
            a_less_b = 1;
        } 
       		else
            a_more_b = 1;

        printf("%d \t %d \t %d \t %d\n",a, a_equals_b, a_less_b, a_more_b);
        a = (a + 1) % 16;
    }
    
    return 0;
}

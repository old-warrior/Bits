#include <stdio.h>
#include <malloc.h>

union Port
{
    unsigned char Value;
    struct
    {
        unsigned char bit0:1;
        unsigned char bit1:1;
        unsigned char bit2:1;
        unsigned char bit3:1;
        unsigned char bit4:1;
        unsigned char bit5:1;
        unsigned char bit6:1;
        unsigned char bit7:1;
    }byte;
};

int main(void)
{
    union Port PORTA;
    PORTA.Value = 7;
    printf("%d\n",PORTA.Value);
    PORTA.byte.bit5 = 1;
    printf("%d\n",PORTA.Value);
    if(PORTA.byte.bit5 == 1)
    {
        printf("=1=\n");
    }
    return 0;
}

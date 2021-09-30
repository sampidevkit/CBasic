#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef char i8_t;

typedef struct BUFFER_T
{
    char len;
    uint16_t data[128];
} buffer_t;

typedef union BIT_T
{
    char val;

    struct
    {
        unsigned b0:1;
        unsigned __rfu:7;
    };
} bit_t;

typedef enum STATE_T
{
    DONE=0,
    BUSY=1,
    ERROR=(-1)
} state_t;

state_t Xu_ly1(void)
{
    return DONE; // done
}

state_t Xu_ly2(void)
{
    return BUSY; // done
}

int main(int argc, char** argv)
{
    i8_t x;
    buffer_t txbuf;
    bit_t PORTA, PORTB;
    state_t stt;

    txbuf.data[];
    PORTA.b0=0;
    PORTB.b0=1;

    return (EXIT_SUCCESS);
}
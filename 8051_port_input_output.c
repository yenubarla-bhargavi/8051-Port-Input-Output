#include <reg51.h>

void main()
{
    P0 = 0xFF;   // Configure Port 0
    P1 = 0x00;   // Initialize Port 1

    while(1)
    {
        P0 = P1; // Copy input from P1 to P0
    }
}
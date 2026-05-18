# 8051 Port Input-Output Interfacing

## Overview
This project demonstrates basic GPIO Port Input-Output interfacing using 8051 Embedded C programming in Keil uVision.

The program reads input data from Port 0 and transfers the same data to Port 1. Output behavior was verified using the Keil simulator and port monitoring tools.

---

## Objective
- Understand GPIO port operations in 8051
- Learn basic Embedded C programming
- Verify port communication using Keil debugger

---

## Tools & Technologies
- Embedded C
- Keil uVision
- 8051 Architecture

---

## Program Functionality
- Input bits are provided through Port 0
- Same data is transferred to Port 1
- Output is verified in simulation by observing port bit changes

---

## Code Snippet

```c
#include <reg51.h>

void main()
{
    P0 = 0xFF;
    P1 = 0x00;

    while(1)
    {
        P1 = P0;
    }
}
```

---

## Output Verification
The output was verified in Keil uVision by manually toggling Port 0 bits and observing corresponding changes in Port 1.

---

## Learning Outcome
This project helped in understanding:
- GPIO communication
- Port-level operations
- Embedded C fundamentals
- Debugging using Keil simulator

---

## Author
Bhargavi

#include <stdio.h>

/* INFO REGISTERS
    rax            Accumulator
    rbx            Base
    rcx            Counter
    rdx            Data
    rsi            Source Index
    rdi            Destination Index
    rbp            Base Pointer
    rsp            Stack Pointer
*/

int main() {
    for(int i = 0; i < 10; i++) {
        printf("Hello World!\n");
    }
}
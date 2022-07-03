#include <stdio.h>

/*      COMMAND: gdb -q
    (gdb) break main
    (gdb) run
    (gdb) INFO REGISTERS
    rax            Accumulator
    rbx            Base
    rcx            Counter
    rdx            Data
    rsi            Source Index
    rdi            Destination Index
    rbp            Base Pointer
    rsp            Stack Pointer
    ...
    rip            Instruction Pointer

        COMMAND: x (examine) - memory
            x/(o/x/u/t) display octal, hex, unsigned base-10, binary
    (gdb) x/o 0x7ff7655a153d
    0x7ff7655a153d <main()+13>:     077042707
    (gdb) x/x $rip
    0x7ff7655a153d <main()+13>:     0x00fc45c7
    (gdb) x/u $rip
    0x7ff7655a153d <main()+13>:     16532935
    (gdb) x/t $rip
    0x7ff7655a153d <main()+13>:     00000000111111000100010111000111

        COMMAND: x/(b/h/w/g) - byte, halfword (2 bytes), word (4 bytes), giant (8 bytes)

        COMMAND: x/(#)i $rip - examine instruction or #i of instructions
    (gdb) x/3i $rip
    0x7ff7655a153d <main()+13>:  movl   $0x0,-0x4(%rbp)
    0x7ff7655a1544 <main()+20>:  jmp    0x7ff7655a1559 <main()+41>
    0x7ff7655a1546 <main()+22>:  lea    0x7ab3(%rip),%rax        # 0x7ff7655a9000


*/

int main()
{
    int a = 5;
    int b = a + 6;
    return 0;
}
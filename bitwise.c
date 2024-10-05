

#include <stdio.h>

int main() {
    // Declare two integer variables
    int a = 15; // In binary: 1100
    int b = 6;  // In binary: 0101

    // Bitwise AND
    int andResult = a & b; // 1100 & 0101 = 0100 (4)
    printf("a & b = %d\n", andResult);

    // Bitwise OR
    int orResult = a | b;  // 1100 | 0101 = 1101 (13)
    printf("a | b = %d\n", orResult);


    // Bitwise XOR
    int xorResult = a ^ b; // 1100 ^ 0101 = 1001 (9)
    printf("a ^ b = %d\n", xorResult);

    // Bitwise NOT
    int notResult = ~a;    // ~1100 = 0011 (in 32-bit representation: 11111111111111111111111111110011)
    printf("~a = %d\n", notResult);

    // Bitwise Left Shift
    int leftShift = a << 1; // 1100 << 1 = 11000 (24)
    printf("a << 1 = %d\n", leftShift);

    // Bitwise Right Shift
    int rightShift = a >> 1; // 1100 >> 1 = 0110 (6)
    printf("a >> 1 = %d\n", rightShift);

    return 0;
}

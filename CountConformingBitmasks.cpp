int solution(int A, int B, int C) {
    // Create bitmasks
    int bitmaskA = A;
    int bitmaskB = B;
    int bitmaskC = C;
    for (int i = 0; i < 30; i++) {
        if (((A >> i) & 1) == 0) {
            bitmaskA &= ~(1 << i);
        }
        if (((B >> i) & 1) == 0) {
            bitmaskB &= ~(1 << i);
        }
        if (((C >> i) & 1) == 0) {
            bitmaskC &= ~(1 << i);
        }
    }
    
    // Loop through all unsigned 30-bit integers and count conforming ones
    int count = 0;
    for (unsigned int i = 0; i < (1 << 30); i++) {
        if (((i & bitmaskA) == bitmaskA) || ((i & bitmaskB) == bitmaskB) || ((i & bitmaskC) == bitmaskC)) {
            count++;
        }
    }
    
    return count;
}

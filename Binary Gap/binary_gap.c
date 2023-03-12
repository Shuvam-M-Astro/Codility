long bits = 0;
long max = 0;

void binary(long N) {
    if (N > 1) { 
        binary(N / 2);
    }
    if (N % 2 == 0) {
        bits += 1;
        return;
    } 
    if (max < bits) {
        max = bits;
    }
    bits = 0;
}

long solution(long N) {
    binary(N);
    return max;
}

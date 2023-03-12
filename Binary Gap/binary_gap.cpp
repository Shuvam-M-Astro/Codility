#include <vector>
int solution(int n) {
    vector<int> v;
    int cnt = 0;
    while (n != 0) {
        if (n & 0x1) {
            v.push_back(cnt);
        }
        n >>= 1;
        cnt++;
    }
    int max = 0;
    for (unsigned i = 1; i < v.size(); i++) {
        int gap = v[i] - v[i - 1] - 1;
        if (gap > max) {
            max = gap;
        } 
    }
    return max;
}

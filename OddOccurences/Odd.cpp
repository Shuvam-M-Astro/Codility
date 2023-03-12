// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>


int solution(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i = 0; i<A.size(); i+=2)
    {
        if (A[i] != A[i+1]) return A[i];
    }


}

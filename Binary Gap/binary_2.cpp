#include <vector>
int solution(int N) {
    vector<int> v;
    while (N>0)
    {
        v.push_back(N%2);
        N/=2;

    }

    int b = 0, maxb = 0;
    for (int i = v.size()-1;i>=0; i--)
    {
        if(v[i]==0) b++;
        else if(v[i]==1) {maxb = max(maxb,b);b=0;}
        }
    return maxb;

    



}

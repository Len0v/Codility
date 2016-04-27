// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    if(A.empty()) return 1;
    sort(A.begin(),A.end());
    if(A[0] != 1) return 1;
    for(int i=0; i<A.size(); i++)
    {
        if(A[i] != A[i+1]-1)
        {
            return A[i]+1;
        }
    }
    return 1;
}
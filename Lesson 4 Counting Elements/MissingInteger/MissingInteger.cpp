#include <algorithm>
int solution(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0; i<A.size(); i++){
        if(A[i] > 0){         
            if(( A[i-1] != A[i]) && (A[i-1]+1 != A[i]))
            {
                  return A[i-1]+1;
            }
        }
    }
    return -1;
}
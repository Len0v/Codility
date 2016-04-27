// you can use includes, for example:
#include <algorithm>
#include <math.h>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

auto sum(vector<int> &A){
    auto sum=0;
    for(auto it : A){
        sum += abs(it);
    }
    return sum;
}

int solution(vector<int> &A) {
    auto total = sum(A);
    auto lsum = A[0];
    auto rsum = total - A[0];
    auto dif = abs(rsum-lsum);

    for(int i=1; i<A.size(); i++){
        lsum += A[i];
        rsum -= A[i];
        int newDif = abs(rsum-lsum);
        if(newDif < dif)
            dif=newDif;
    }
    return dif;
}
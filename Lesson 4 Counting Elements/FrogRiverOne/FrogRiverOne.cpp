// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
int N = A.size();
int target = X;
vector<int> mark;
mark.resize(X + 1, 0);

for(int i = 0; i < N; ++i){
    if(mark[A[i]] == 0){
        --target;
        mark[A[i]] = 1;
    }
    if(target == 0)
        return i;
}
return -1;
}
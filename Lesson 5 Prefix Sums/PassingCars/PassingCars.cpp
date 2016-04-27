int solution(vector<int> &A) {
    int L=0;
    long long result=0;
    for(auto i : A){
        if(i==0) L++;
        else result += L;
    }
    if(result > 1000000000) return -1;
    else return result;
}
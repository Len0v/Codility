int solution(vector<int> &A) {
    double min_avg = (A[0]+A[1])/2.0;
    int start_avg=0;
    
    for(int i=0; i<A.size()-2 ; i++){
        if( (A[i]+A[i+1])/2 < min_avg){
            min_avg = (A[i]+A[i+1])/2;
            start_avg = i;
        }
        if( (A[i]+A[i+1]+A[i+2])/3 < min_avg){
            min_avg = (A[i]+A[i+1]+A[i+2])/3;
            start_avg = i;
        }
    }
    if( (A[-1]+A[-2])/2 < min_avg){
            min_avg = (A[-1]+A[-2])/2;
            start_avg = A[-1];
    }
    return start_avg;
}
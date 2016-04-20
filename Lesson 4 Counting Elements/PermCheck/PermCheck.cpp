int solution(vector<int> &A) {
    int size = A.size();
    vector<int> mark;
    mark.resize(size+1,0);
    int target = size;
    if(A.size()==1 && A[0]==1) return 1; 
    
    for(int i=0; i<size ; i++){
        if(A[i] >= mark.size()) return 0;
        if(mark[A[i]]==0){
            target--;
            mark[A[i]]=1;
        }
        if(target==0) return 1;
    }
    return 0;
}
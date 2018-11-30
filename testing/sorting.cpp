vector<int> Solution::wave(vector<int> &A) {
    int x=2;
    bool checker(const int &a,const int &b)
    {   if(x%2==0)
        {
            return a<b;
        }
        else
        {
            return b>a;
        }
        x=x+1;
        
    }
    sort(A.begin(),A.end(),checker);
    return A;
}

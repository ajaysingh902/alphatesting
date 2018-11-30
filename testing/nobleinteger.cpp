int Solution::solve(vector<int> &A) {
    vector<int > h;
    
    h=A;
    int p=0,x=0;
    for(int i=0;i<h.size();i++)
    {
        for(int j=0;j<h.size();j++)
        {
            if(h[i]<h[j])
            {
                x=x+1;
            }
            else
            {
                
            }
            
        }
        if(x==h[i])
        {
            p=1;
        }
        x=0;
    }
    if(p==1)
    {
        return p;
    }
    else
    {
        return -1;
    }
}
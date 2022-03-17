 int route[N];

   
    
    for(int j=0;j<M;j++)
    {
        if((A[j]+1)==B[j])
           route[A[j]-1]=10;
        if((B[j]+1)==A[j])
           route[B[j]-1]=10;
    }
    
    for(int j=0;j<(N-1);j++)
    {
        if(!(route[j]==10))
        return false;
    }
   return true;
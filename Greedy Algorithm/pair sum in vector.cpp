void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    //Your code here
    for(int i=0;i<v.size();i++){
        sum+=v[i].second;
    }
    
    
    cout<<sum;
    cout<<endl;
}
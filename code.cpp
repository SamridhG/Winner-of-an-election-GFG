class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        vector<string>res;
        map<string,int>A;
        for(int i=0;i<n;i++)
        {
            A[arr[i]]++;
        }
        int vote=0;
        string name;
        for(auto s:A)
        {
            if(s.second>vote)
            {
                vote=s.second;
                name=s.first;
            }
        }
        res.push_back(name);
        res.push_back(to_string(vote));
        return res;
    }
};

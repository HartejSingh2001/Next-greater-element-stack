class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long int>s;
        vector<long long int>v;
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else if(s.top()>arr[i] && s.size()>0)
            {
                v.push_back(s.top());
            }
            else if(arr[i]>=s.top() && s.size()>0)
            {
                while(s.size()>0 && arr[i]>=s.top())
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }//for loop end
        reverse(v.begin(),v.end());
        return v;
    }// function end
};

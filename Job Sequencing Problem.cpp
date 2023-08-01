/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public: 
    static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,cmp);
        int job=0,profit=0;
        vector<bool> done(n+1,false);
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>=1;j--){
                if(done[j]==false){
                    done[j]=true;
                    job++;
                    profit+=arr[i].profit;
                    break;
                }
            }
        }
        return {job,profit};
      
    } 
};

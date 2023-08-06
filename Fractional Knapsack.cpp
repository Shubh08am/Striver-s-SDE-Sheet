//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack. 
    static bool cmp(Item a,Item b){
        return (double)a.value/a.weight >= (double)b.value/b.weight ;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
            sort(arr,arr+n,cmp) ; 
            double ans = 0.0  ; 
            
            for(int i=0;i<n;i++){
                if(W >= arr[i].weight){
                    W-=arr[i].weight ; 
                    ans += arr[i].value;
                }
                else{
                    ans+= (double)arr[i].value/(arr[i].weight)*W;
                    break;
                }
            }
    return ans;
    }
        
};

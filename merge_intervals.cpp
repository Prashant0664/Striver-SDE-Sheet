#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>>v;
    for(int i=0;i<intervals[0].size();i++){
        v.push_back({intervals[0][i],intervals[1][i]});
    }
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    int s=v[0][0];
    int e;
    for(int i=0;i<v[0].size();i++){
        // if(v[1][i]>=v[0][i+1]){
        //     continue;
        // }
        // e=v[1][i];
        // ans.push_back({s,e});
        // s=v[0][i+1];
        if (ans.empty() || v[i][0] > ans.back()[1]) {
            ans.push_back(v[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], v[i][1]);
        }
    }
    // if(ans[1][ans.size()-1]<intervals[0][intervals[0].size()-1]){
    //     ans.push_back(
    //         {
    //             intervals[0][intervals[0].size()-1],
    //             intervals[1][intervals[0].size()-1]
    //         }
    //     );
    //     // cout<<intervals[1][intervals[0].size()-1];
    //     // cout<<"--";
    // }
    // else{
    //     ans.push_back({s,intervals[1][intervals[0].size()-1]});
    // }
    // for(int i=0;i<ans[0].size();i++){
    //     cout<<ans[0][i]<<" "<<ans[1][i]<<endl;
    // }
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    return ans;
}
int main(){
    int m;
    int n=2;
    cin>>m;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        vector<int>l;
        for(int j=0;j<m;j++){
            int jg;
            cin>>jg;
            l.push_back(jg);
        }
        v.push_back(l);
    }
    for(int i=0;i<m;i++){
cout<<v[0][i]<<" "<<v[1][i]<<" \n";
    }
//    cout<<"--";
    vector<vector<int>>b=mergeIntervals(v);

}

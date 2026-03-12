// The problem : A football team’s analytics department hired you 
// and gave you a task of reviewing match performance data from the past season. 
// Each match's net goal difference (goals scored minus goals conceded) is recorded in a list.
// Now you were asked by the department to identify the team’s best consecutive performance streak,
// where the net goal difference was maximized over a series of matches.
// net_goal_difference: [1, 4, 3, -5 , 5, 6, 1, -4]
// Solve the problem in O(n) time complexity

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int N;
    cin>>N;
    
    if(N==0) return 0;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin>>A[i];

    int curr=0;
    int max_sum=INT_MIN;
    int k=0;
    while(k<N){
        curr=curr + A[k];

        if(curr>max_sum) max_sum=curr; 
        if(curr<1) curr=0;
        
        k++;
    }
    
    cout<<max_sum<<"\n";
    return 0;
}
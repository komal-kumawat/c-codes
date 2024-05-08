#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {100,80,60,70,60,75,85};
    vector<int> v;
    stack<pair<int,int>> s;
    for(int i=0;i<arr.size();i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if((s.size()>0) && s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else if((s.size()>0) && s.top().first<=arr[i]){
            while((s.size()>0) && s.top().first<=arr[i]){
            s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    // reverse(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<i-v[i]<<endl;
    }
    // return v;
}
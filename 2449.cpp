#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> v;
int arr[21];

int main()
{
    int cnt=0, check=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }     
    
    stack<int> s;
    int index=1;
    s.push(v[0]);
    arr[v[0]]++;
    while(index<n && s.size()!=0){
        
    } 
    cout<<cnt;
}

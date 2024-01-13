#include<bits/stdc++.h>
using namespace std;
class graph {
    public: 
        unordered_map<int,list<int>>adj;
    void addedge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0) {
            adj[v].push_back(u);
        }
    }
    void printadj(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    bool detectcyle(int src,vector<int>&visited){
        visited[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto it:adj[node]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push({it,node});
                }
                else if(parent != it){
                    return true;
                }
            }
        }
        return false;
    }

};

int main(){
    graph g;
    int n,m;
    cout<<"Enter number of nodes:";
    cin>>n;
    cout<<"Enter number of edges:";
    cin>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.printadj();
    vector<int>visited(n+1,0);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            if(g.detectcyle(i,visited) == true){
                cout<<"cycle is present"<<endl;
            }
            else{
                cout<<"cycle is not presesnt"<<endl;
            }
        }
    }
    return 0;
}


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

      void dfsper(vector<int>&dfs,vector<int>&visited,int start){
         dfs.push_back(start);
         visited[start]=1;

         for(auto it:adj[start]){
            if(!visited[it]){
                dfsper(dfs,visited,it);
            }
         }
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
    vector<int>dfs;
    vector<int>visi(n+1,0);
    g.dfsper(dfs,visi,1);
    for(int i=0;i<dfs.size();i++){
        cout<<dfs[i]<<" ";
    }
    return 0;
}


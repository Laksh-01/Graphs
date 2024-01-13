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
    bool detectcycle(vector<int>&visited,int src,int parent){
        visited[src]=1;
        bool flag=false;
        for(auto it:adj[src]){
            if(!visited[it]){
                visited[it]=1;
                detectcycle(visited,it,src);
            }
            else if(parent!=it){
                flag=true;
                break;
            }
        }
        return flag;
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
            if(g.detectcycle(visited,i,-1)==true) {
                cout<<"CYCLE PRESENT"<<endl;
                break;}
            else cout<<"CYCLE NOT PRESENT"<<endl;
        }
    }

    return 0;
}


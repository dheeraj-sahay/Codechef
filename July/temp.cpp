#include <bits/stdc++.h>
using namespace std;

void addEdge(unordered_map<int, set<int>> tree, int u, int v){
    unordered_map<int, set<int>>::iterator it = tree.find(u);
    if(it == tree.end()){
        tree.insert(std::make_pair(u, set<int>()));
    }
    tree.at(u).insert(v);
}

void addPath(unordered_map<int, set<int>> tree, int u, int v){
    addEdge(tree, u, v);
    addEdge(tree, u, v);
}

void preProcess(unordered_map<int, set<int>> tree, vector<int> level, int parent[]){
    bool visited[level.size()];
    queue<int> bfsQueue;

    int u = 1; parent[u] = -1; level[u] = 0;
    bfsQueue.push(u);
    visited[u] = true;

    while(!bfsQueue.empty()){
        int n = bfsQueue.size();
        while(n--){
            int parentNode = bfsQueue.front();
            set<int> children = tree.at(parentNode);
            for(int child: children){
                if(!visited[child]){
                    parent[child] = parentNode;
                    level[child] = level[parentNode]+1;
                    visited[child] = true;
                    
                    bfsQueue.push(child);
                    
                }
            }
            bfsQueue.pop();
        }
    }
}

void visitTillParent(int nodeWithMaxDepth, int parent[], int visited[], int marker){
    visited[nodeWithMaxDepth] = marker;
    while(parent[nodeWithMaxDepth] != -1){
        nodeWithMaxDepth = parent[nodeWithMaxDepth];
        visited[nodeWithMaxDepth] = marker;
    }
}

bool process(int nodeWithMaxDepth,int parent[],vector<int> level,vector<int> query,int visited[], int marker){
    visitTillParent(nodeWithMaxDepth, parent, visited, marker);
    int maxDepth = 0;
    nodeWithMaxDepth = -1;
    for(int i = 0; i < query.size(); i++){
        int q = query[i];
        if(visited[q] != marker && level[q] > maxDepth){
            maxDepth = level[q];
            nodeWithMaxDepth = q;
        }
    }

    if(nodeWithMaxDepth == -1){ return true; }

    while(visited[nodeWithMaxDepth] != marker){
        visited[nodeWithMaxDepth] = marker;
        nodeWithMaxDepth = parent[nodeWithMaxDepth];
    }

    for(int i = 0; i < query.size(); i++){
        int q = query[i];
        if(visited[q] != marker || level[q] < level[nodeWithMaxDepth]){
            return false;
        }
    }

    return true;
}

int main() {
	int T; cin>>T;
	while(T--){
	    int n, a, b, K;   cin>>n;
	    unordered_map<int, set<int>> tree;
        int visited[n+1], parent[n+1];
	    for(int i=1; i<n; i++){
	        cin>>a>>b;  addPath(tree, a, b);
	    }
        vector<int> level;
	    
	    
	    int Q; cin>>Q;
 
        preProcess(tree, level, parent);

	    for(int i = 1; i<=Q; i++){
	        cin>>K;
            vector<int> query;
	        int maxDepth = 0;
	        int nodeWithMaxDepth = -1;
	        
	        for(int j = 0; j<K; j++){
	            cin>>query[j];
	            if(level[query[j]] > maxDepth){
	                maxDepth = level[query[j]];
	                nodeWithMaxDepth = query[j];
	            }
	        }
	        
	        bool hasPath = process(nodeWithMaxDepth, parent, level, query, visited, i);
	        (hasPath)? cout<<"YES\n":cout<<"NO\n";
	        
	    }
	}
	
	return 0;
}
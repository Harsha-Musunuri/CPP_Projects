#include "util.h"

// function definition:
void Graph::addEdge(int u, int v){
		adjlist[u].push_back(v);
	}

void Graph::topo_sort(){
		for(auto i : adjlist){
			int node = i.first;
			if(!vis[node]){
				dfs(node);
			}
		}
		print_order();
	}
void Graph::dfs(int u){
		vis[u] = true;
		for(auto i : adjlist[u]){
			if(!vis[i])
				dfs(i);
		}
		order.push_front(u);

	}

void Graph::print_order(){
    for(auto ele : order)
        cout << ele << " -> ";
}
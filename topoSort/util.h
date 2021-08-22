
#ifndef _util_header
#define _util_header
// A C++ program to print topological sorting of a DAG
#include <iostream>
#include<map>
#include<vector>
#include<list>
using std::vector;
using std::map;
using std::list;
using std::cout;

// Class to represent a graph
class Graph {
    int V; // No. of vertices'
    // Pointer to an array containing adjacency lists ----> List
    map<int, vector<int> > adjlist; //dictionary with key as node and value as its adjacent nodes
	map<int, bool> vis; //dictionary to note if a node is visited or not
	list<int> order; //final topo order
public:
	Graph(){}
	void addEdge(int u, int v);
	void dfs(int u);
	void topo_sort();
	void print_order();

};

#endif
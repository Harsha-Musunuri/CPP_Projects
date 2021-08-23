#include "util.h"
#include <iostream>

int main(){

	Graph g;
    //old
	// g.addEdge(1,2);
	// g.addEdge(1,3);
	// g.addEdge(2,4);
	// g.addEdge(3,4);
	// g.topo_sort();


    //new
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.topo_sort();



	return 0;
}
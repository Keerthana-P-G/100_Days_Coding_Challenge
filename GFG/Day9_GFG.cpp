/*An Eulerian Path is a path in graph that visits every edge exactly once and it starts and ends up at different indexes. An Eulerian Circuit is an Eulerian Path which starts and ends on the same vertex. Given an undirected acyclic graph with V nodes, and E edges, with adjacency list adj, return 2 if the graph contains an eulerian circuit, else if the graph contains an eulerian path, return 1, otherwise, return 0.*/

class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	    // Code here
        int odd = 0;
        for (int i = 0; i < V; ++i) {
            if (adj[i].size() % 2 != 0){
                odd += 1;
            }
        }       
        if (odd > 2) {
            return 0;
        }
        return (odd == 0) ? 2 : 1;       
	}
};


#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;


class Graph {
private:
    int n;
    vector<vector<double>> adjMatrix;

public:
    Graph(int size) : n(size), adjMatrix(size, vector<double>(size, 0)) {}

    int V() { return n; }

    void addEdge(int u, int v, double cost) {
        if (u >= 0 && u < n && v >= 0 && v < n) {
            adjMatrix[u][v] = cost;
            adjMatrix[v][u] = cost;
        }
    }

    double getEdgeValue(int u, int v) {
        return adjMatrix[u][v];
    }

    vector<int> neighbors(int u) {
        vector<int> result;
        for (int v = 0; v < n; ++v) {
            if (adjMatrix[u][v] > 0) result.push_back(v);
        }
        return result;
    }

 
    void randomGraph(double density, double minDist, double maxDist) {
        srand(time(0));
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                double prob = ((double) rand() / RAND_MAX);
                if (prob < density) {
                    double dist = minDist + ((double) rand() / RAND_MAX) * (maxDist - minDist);
                    addEdge(i, j, dist);
                }
            }
        }
    }
};


class Dijkstra {
private:
    Graph &g;
public:
    Dijkstra(Graph &graph) : g(graph) {}

    vector<double> shortestPaths(int src) {
        int n = g.V();
        vector<double> dist(n, numeric_limits<double>::infinity());
        vector<bool> visited(n, false);
        dist[src] = 0;

        for (int count = 0; count < n; ++count) {
            double minDist = numeric_limits<double>::infinity();
            int u = -1;
            for (int i = 0; i < n; ++i) {
                if (!visited[i] && dist[i] < minDist) {
                    minDist = dist[i];
                    u = i;
                }
            }

            if (u == -1) break;
            visited[u] = true;

            for (int v : g.neighbors(u)) {
                if (!visited[v] && dist[u] + g.getEdgeValue(u, v) < dist[v]) {
                    dist[v] = dist[u] + g.getEdgeValue(u, v);
                }
            }
        }
        return dist;
    }
};

int main() {
    int nodes = 50;
    vector<double> densities = {0.2, 0.4};

    for (double density : densities) {
        Graph g(nodes);
        g.randomGraph(density, 1.0, 10.0);

        Dijkstra d(g);
        vector<double> distances = d.shortestPaths(0);

        double sum = 0;
        int count = 0;
        for (int i = 1; i < nodes; ++i) {
            if (distances[i] < numeric_limits<double>::infinity()) {
                sum += distances[i];
                count++;
            }
        }
        double avg = sum / count;
        cout << "Density: " << density << ", Average shortest path from node 1: " << avg << endl;
    }

    return 0;
}

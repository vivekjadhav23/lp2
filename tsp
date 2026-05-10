#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Node {

    vector<int> path;
    vector<bool> visited;

    int cost;
    int city;

    bool operator>(const Node& other) const {
        return cost > other.cost;
    }
};

int N = 4;

int graph[4][4] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};

void tspAStar() {

    priority_queue<Node,
                   vector<Node>,
                   greater<Node>> pq;

    Node start;

    start.city = 0;
    start.cost = 0;

    start.path.push_back(0);

    start.visited = vector<bool>(N, false);

    start.visited[0] = true;

    pq.push(start);

    int minCost = INT_MAX;

    vector<int> bestPath;

    while (!pq.empty()) {

        Node current = pq.top();
        pq.pop();

        // If all cities visited
        if (current.path.size() == N) {

            int finalCost =
                current.cost +
                graph[current.city][0];

            if (finalCost < minCost) {

                minCost = finalCost;

                bestPath = current.path;

                bestPath.push_back(0);
            }

            continue;
        }

        // Expand nodes
        for (int next = 0; next < N; next++) {

            if (!current.visited[next]) {

                Node child;

                child.path = current.path;

                child.path.push_back(next);

                child.visited = current.visited;

                child.visited[next] = true;

                child.cost =
                    current.cost +
                    graph[current.city][next];

                child.city = next;

                pq.push(child);
            }
        }
    }

    cout << "Minimum Cost = "
         << minCost << endl;

    cout << "Path: ";

    for (int city : bestPath) {
        cout << city << " ";
    }

    cout << endl;
}

int main() {

    tspAStar();

    return 0;
}

#include <iostream>
using namespace std;

#define V 4

int minKey(int key[], bool mstSet[])
{
    int min = 9999;
    int minIndex;

    for (int v = 0; v < V; v++)
    {
        if (!mstSet[v] && key[v] < min)
        {
            min = key[v];
            minIndex = v;
        }
    }

    return minIndex;
}

void primMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = 9999;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minKey(key, mstSet);

        mstSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] &&
                !mstSet[v] &&
                graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    int totalCost = 0;

    cout << "Edge\tWeight\n";

    for (int i = 1; i < V; i++)
    {
        cout << parent[i]
             << " - "
             << i
             << "\t"
             << graph[i][parent[i]]
             << endl;

        totalCost += graph[i][parent[i]];
    }

    cout << "Minimum Cost = "
         << totalCost << endl;
}

int main()
{
    int graph[V][V] =
    {
        {0,2,6,3},
        {2,0,0,5},
        {6,0,0,1},
        {3,5,1,0}
    };

    primMST(graph);

    return 0;
}
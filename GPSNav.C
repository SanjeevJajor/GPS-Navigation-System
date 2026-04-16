#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define N 18
int graph[N][N] = {
    {0,4,5,0,3,0,0,0,0,0,0,0,0,6,0,0,0,0},
    {4,0,0,0,4,5,0,0,0,0,0,0,0,0,0,0,0,0},
    {5,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0},
    {0,0,4,0,3,0,4,0,0,5,0,0,0,0,0,0,0,0},
    {3,4,0,3,0,0,3,5,0,0,0,0,0,0,0,0,0,0},
    {0,5,0,0,0,0,0,4,0,0,4,0,0,0,0,0,0,0},
    {0,0,0,4,3,0,0,3,4,0,0,5,0,0,0,0,0,0},
    {0,0,0,0,5,4,3,0,0,0,5,4,0,0,0,0,0,3},
    {0,0,0,0,0,0,4,0,0,4,0,4,3,0,0,0,0,0},
    {0,0,6,5,0,0,0,0,4,0,0,0,7,0,0,0,0,0},
    {0,0,0,0,0,4,0,5,0,0,0,5,0,0,0,0,0,0},
    {0,0,0,0,0,0,5,4,4,0,5,0,4,0,0,0,0,5},
    {0,0,0,0,0,0,0,0,3,7,0,4,0,0,0,0,0,0},

    // New connections
    {6,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0}, // Chandigarh University
    {0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,2,3,0}, // Zirakpur
    {0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,4,0}, // Kharar
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,0,0}, // Derabassi
    {0,0,0,0,0,0,0,3,0,0,0,5,0,0,0,0,0,0}  // Sector 43 Bus Stand
};
char *places[] = {
    "Sector 17 Plaza",
    "Rose Garden",
    "PGI Hospital",
    "Sukhna Lake",
    "Rock Garden",
    "Elante Mall",
    "Sector 35 Market",
    "Tribune Chowk",
    "Chandigarh Railway",
    "Chandigarh Airport",
    "Panjab University",
    "ISBT Bus Terminal",
    "Mohali IT Park",
    "Chandigarh University",
    "Zirakpur",
    "Kharar",
    "Derabassi",
    "Sector 43 Bus Stand"
};

int minDistance(int dist[], bool visited[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < N; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printPath(int parent[], int j) {
    if (parent[j] == -1) {
        printf("%s ", places[j]);
        return;
    }
    printPath(parent, parent[j]);
    printf(" -> %s", places[j]);
}

void dijkstra(int src, int dest) {
    int dist[N];
    bool visited[N];
    int parent[N];

    for (int i = 0; i < N; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
        parent[i] = -1;
    }

    dist[src] = 0;

    for (int count = 0; count < N - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = true;

        for (int v = 0; v < N; v++) {
            if (!visited[v] && graph[u][v] &&
                dist[u] + graph[u][v] < dist[v]) {

                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

printf("\nFrom: %s\n", places[src]);
printf("To: %s\n", places[dest]);
printf("Shortest Distance: %d km\n", dist[dest]);

printf("Path:\n");
printPath(parent, dest);
printf("\n");
}

int main() {
    int src, dest;
printf("\nAvailable Places:\n");
for (int i = 0; i < N; i++) {
    printf("%d: %s\n", i, places[i]);
}
    printf("Enter source (0-17): ");
    scanf("%d", &src);

    printf("Enter destination (0-17): ");
    scanf("%d", &dest);

    if (src == dest) {
        printf("Source and destination cannot be same\n");
        return 0;
    }

    dijkstra(src, dest);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

int adj[MAX_NODES][MAX_NODES];
int visited[MAX_NODES];
int stack[MAX_NODES];
int top = -1;

int n; // number of nodes

void dfs(int node) {
    visited[node] = 1;
    for (int i = 0; i < n; i++) {
        if (adj[node][i] && !visited[i]) {
            dfs(i);
        }
    }
    stack[++top] = node;
}

void topological_sort() {
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    top = -1;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    printf("Topological sorting: ");
    while (top >= 0) {
        printf("%d ", stack[top--]);
    }
}

int main() {
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    topological_sort();
    return 0;
}


#include <stdio.h>
#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
int indegree[MAX_VERTICES];
int n;

void createGraph() {
    int i, j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
}

void topologicalSort() {
    int i, j;
    for (i = 0; i < n; i++) {
        indegree[i] = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            indegree[j] += graph[i][j];
        }
    }
    int queue[MAX_VERTICES], rear = -1, front = 0;
    for (i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            queue[++rear] = i;
        }
    }
    while (rear >= front) {
        int u = queue[front++];
        printf("%d ", u);
        for (i = 0; i < n; i++) {
            if (graph[u][i]) {
                indegree[i]--;
                if (indegree[i] == 0) {
                    queue[++rear] = i;
                }
            }
        }
    }
}

int main() {
    createGraph();
    topologicalSort();
    return 0;
}

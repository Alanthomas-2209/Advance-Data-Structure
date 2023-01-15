#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_VERTICES 100
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int n, m;
int weight[MAX_VERTICES][MAX_VERTICES];
int minimum_spanning_tree[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];

int prim() {
    int total_weight = 0;
    for (int i = 0; i < n; i++) {
        visited[i] = false;
        for (int j = 0; j < n; j++) {
            minimum_spanning_tree[i][j] = 0;
            if (i == j) {
                weight[i][j] = INT_MAX;
            }
        }
    }
    visited[0] = true;
    for (int i = 0; i < n - 1; i++) {
        int min_weight = INT_MAX;
        int x, y;
        for (int j = 0; j < n; j++) {
            if (visited[j]) {
                for (int k = 0; k < n; k++) {
                    if (!visited[k] && weight[j][k]) {
                        if (weight[j][k] < min_weight) {
                            min_weight = weight[j][k];
                            x = j;
                            y = k;
                        }
                    }
                }
            }
        }
        minimum_spanning_tree[x][y] = minimum_spanning_tree[y][x] = 1;
        visited[y] = true;
        total_weight += min_weight;
    }
    return total_weight;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x, y, w;
        scanf("%d%d%d", &x, &y, &w);
        weight[x][y] = weight[y][x] = w;
    }
    int total_weight = prim();
    printf("Total weight of minimum spanning tree: %d\n", total_weight);
    return 0;
}


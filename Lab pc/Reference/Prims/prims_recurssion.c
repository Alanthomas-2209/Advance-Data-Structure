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

int prim_recursive(int start) {
    visited[start] = true;
    int total_weight = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && weight[start][i]) {
            int min_weight = INT_MAX;
            int x, y;
            for (int j = 0; j < n; j++) {
                if (!visited[j] && weight[start][j]) {
                    if (weight[start][j] < min_weight) {
                        min_weight = weight[start][j];
                        x = start;
                        y = j;
                    }
                }
            }
            minimum_spanning_tree[x][y] = minimum_spanning_tree[y][x] = 1;
            total_weight += min_weight;
            total_weight += prim_recursive(y);
        }
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
    int total_weight = prim_recursive(0);
    printf("Total weight of minimum spanning tree: %d\n", total_weight);
    return 0;
}


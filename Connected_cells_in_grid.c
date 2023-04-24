#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int **matrix=0, m, n;
static int direction[8][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};

int valid_cell(int i, int j) {
    if (i<0 || i>=m || j<0 || j>=n)
        return 0;
    return matrix[i][j];
}

int find_region_count(int i, int j){
    int n=0, len=0, new_i, new_j;
    matrix[i][j]=0;
    for(n=0;n<8;n++){
        new_i = i+direction[n][0];
        new_j = j+direction[n][1];
        if (valid_cell(new_i, new_j)) {
            len += find_region_count(new_i, new_j);
        }
    }
    len++;
    return len;
}

int main() {

    int i, j, cnt, max=0;
    
    scanf("%d %d", &m, &n);
    matrix = malloc(sizeof(int *) * m);
    for(i=0;i<m;i++) {
        matrix[i] = malloc(sizeof(int) *n);
    }
    
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            if (matrix[i][j]) {
                cnt = find_region_count(i, j);
                if (cnt > max) {
                    max = cnt;
                }
            }
        }
    }
    printf("%d", max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

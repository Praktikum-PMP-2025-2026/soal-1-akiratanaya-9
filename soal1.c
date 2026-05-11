// Nama: Akira Kenji Tanaya
// NIM : 13224046
#include <stdio.h>
#include <stdlib.h>

int degree(int n,int mat[n][n], int x){
    int degree=0;
    for (int i=0; i<n; i++ ){
        if (mat[x][i]==1){
            degree++;
        }
    }
    return degree;
}

int max_vertex(int n, int mat[n][n]){
    int max_deg=degree(n, mat, 0);
    int idx= 0;
    for (int i=1 ; i<n; i++){
        if (degree(n,mat,i)>max_deg){
            idx= i;
        }
    }
    return idx;
}

void isolated (int n, int mat[n][n]){
    int found=0;
    printf("ISOLATED ");
    for (int i=0; i<n;i++){
        if (degree(n,mat,i)==0){
            printf("%d ", i);
            found=1;
        }
    }
    printf("\n");
    if (found==0){
        printf("\n");
    }
}
int main(void) {
    int n; 
    scanf("%d", &n);
    int mat[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        printf("DEGREE %d %d",i, degree(n,mat,i));
        printf("\n");
    }
    printf("MAX_VERTEX %d\n", max_vertex(n,mat));
    isolated(n,mat);
    return 0;
}

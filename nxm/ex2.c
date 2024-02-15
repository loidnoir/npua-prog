#include <stdio.h>
int main() {
    int n, m, i, j;
    printf("Input n&m=");
    scanf("%d%d",&n,&m);

    int b[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int k = 0;
    int p = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if(b[i][j]>b[k][p]){
            b[i][j]=b[k][p];
            k=i;
            p=j;
        }
    }
}

for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
        if(b[i][j]==b[k][p]){
         printf("[%d%d]",i,j);
        }
}printf("\n");
}

            
int S = 0;
for (j = 0; j < m; j++){
S+=b[i][j];
}

 int F=0;
 for (i = 0; i < n; i++) {
 F+=b[i][j];
 }
 
 printf("result=%d",S+F);
    return 0;
}
/***************************************
***BAZINE Tarek - CHIKHAISSA Mahfoud****
    ****ESI 2017/18 TPGO TP1****
****************************************/

#include <stdlib.h>
#include <stdio.h>

//those are going to be inputs from user
#define  N 5
#define  w 9

int max(int a, int b);

int main(int argc, char const *argv[]) {

  /*algorithme's sructures*/
  int v[]={8,2,7,6,4},w[]={1,3,6,7,2},mat[N][W];

  /*init matrix*/
  // omit this when you start j from 0
  for (int i = 0; i < N; i++) {
    mat[i][0]
  }
  // todo optimize this
  for (int j = 0; j < W; j++) {
    mat[0][j]
  }

  for (int i = 1; i < N; i++) {
    for (int j = 1; j < W; j++) {
        if (w[i]>j) {
          mat[i][j]=m[i-1][j];
        } else {
          max(v[i]+m[i-1][j-w[i]]), m[i-1][j]);
        }
    }
  }

  //printing results
  //matrix
  for (int i = 1; i < N; i++) {
    for (int j = 1; j < W; j++) {
        printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}

int max(int a,int b){
    if(a>b) return a;
    return b;
}

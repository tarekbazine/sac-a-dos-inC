/***************************************
***BAZINE Tarek - CHIKHAISSA Mahfoud****
    ****ESI 2017/18 TPGO TP1****
****************************************/

#include <stdlib.h>
#include <stdio.h>

//those are going to be inputs from user
#define N 4 //5
#define W 7 //9

int max(int a, int b);

int main(int argc, char const *argv[]) {
    /*there is another seggestion is to order the items by the weight asc
    so the last step of gathering those objects is more easier !!*/

    /*algorithme's sructures*/
    int v[] = {1, 4, 5, 7 }; //0 so we start counting -index- at 1
    int w[] = {1, 3, 4, 5 };
//    int v[] = {0  ,8, 2, 7, 6, 4}; //0 so we start counting -index- at 1
//    int w[] = {0  ,1, 3, 6, 7, 2};
    int mat[N][W];

    /*init matrix*/
    // --- omit this when you start j from 0
    for (int i = 0; i < N; i++) {
        mat[i][0] = 0;
    }
    // todo optimize this
//    for (int j = 0; j <= W; j++) {
//        mat[0][j] = 0;
//    }
    //this an optimization ???!! we deleting a not-needed row
    for (int j = 0; j <= W; j++) {
        if (w[0] > j){
            mat[0][j] = 0;
        } else{
            mat[0][j] = w[0];
        }
    }

    printf("kkkkkkkkd %d \n", mat[0][7]);

    for (int i = 1; i < N; i++) {

        for (int j = 0; j <= W; j++) {
            printf("kkkkkkkk %d \n", mat[0][7]);
            if (w[i] > j) {
                mat[i][j] = mat[i - 1][j];
            } else {
                mat[i][j] = max(v[i] + mat[i - 1][j - w[i]], mat[i - 1][j]);
            }
        }
    }

    //printing results
    //matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

//    //the optimal weight
//    int optIndex;
//    for (int i = 1; i <W ; ++i) {
//        if (mat[N][i]>mat[N][i+1]){
//            optIndex=i;
//        } else{
//            optIndex=i+1;
//        }
//    }
//    printf("the optimal weight %d ", mat[N][optIndex]);

    //list of the selected objects
//    for (int i = N; i > 0; i--) {
//      if()
//    }

    return 0;
}

int max(int a, int b) {
    if (a > b) return a;
    return b;
}
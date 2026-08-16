#include <stdio.h>
#include <math.h>
#define ROWS 2
#define COLS 2

void printmtrx(double mtrx[ROWS][COLS]);
void convertToEchelon(double mtrx[ROWS][COLS]);

int main() {
    
    double mtrxa[ROWS][COLS] = {//for x=2
        { 2, 2},
        {-3,-3}
        
    };
    double mtrxb[ROWS][COLS]={//for x=3
      {3,-3},
      {2,-2}
      
    };
    printf("Original matrix A :\n");
    printmtrx(mtrxa);
    printf("Original matrix B :\n");
    printmtrx(mtrxb);
    convertToEchelon(mtrxa);
    convertToEchelon(mtrxb);
    

    printf("Echelon Form a:\n");
    printmtrx(mtrxa);
    printf("\n Echelon Form b : \n");
    printmtrx(mtrxb);
    return 0;
}

void printmtrx(double mtrx[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%0.2f ", mtrx[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void convertToEchelon(double  mtrx[ROWS][COLS]) {
    int lead = 0; // Tracks the current pivot column

    for (int r = 0; r < ROWS; r++) {
        if (lead >= COLS) {
            return;
        }

        // Finding non zero element in column 
        int i = r;
        while (mtrx[i][lead] == 0) {
            i++;
            if (i == ROWS) {
                i = r;
                lead++;
                if (lead == COLS) {
                    return;
                }
            }
        }

        // Swap current row 'r' with pivot row 'i'
        if (i != r) {
            for (int j = 0; j < COLS; j++) {
                double temp = mtrx[r][j];
                mtrx[r][j] = mtrx[i][j];
                mtrx[i][j] = temp;
            }
        }

        // 2. Eliminate entries below the current pivot
        for (int k = r + 1; k < ROWS; k++) {
            if (fabs(mtrx[k][lead]) > 1e-9) {
                double factor = mtrx[k][lead] / mtrx[r][lead];
                for (int j = lead; j < COLS; j++) {
                    mtrx[k][j] -= factor * mtrx[r][j];
                }
            }
        }
        
        lead++;
    }
}

  
  
  
    
        
        
        

  
    
  





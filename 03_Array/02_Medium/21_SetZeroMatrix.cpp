// 73. Set Matrix Zeroes
/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
*/

// SOLUTION
#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
/* markCol(vector<vector<int>> &matrix, int n, int m, int i){
    for(int j=0; j<n; j++){
        if(matrix[i][j]!=0)
            matrix[i][j] = INT_MIN; 
    }
} 

void markRow(vector<vector<int>> &matrix, int n, int m, int j){
    for(int i=0; i<m; i++){
        if(matrix[i][j]!=0)
            matrix[i][j] = INT_MIN; 
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    markRow(matrix,n,m,j);
                    markCol(matrix,n,m,i);
                }
            }
        }

         for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == INT_MIN)
                    matrix[i][j] = 0;  
            }
         }

    }*/

// BETTER
void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
       int row[n] = {0}; // row array
       int col[m] = {0}; // col array

    // Traverse the matrix:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark ith index of row wih 1:
                row[i] = 1;

                // mark jth index of col wih 1:
                col[j] = 1;
            }
        }
    }
    }


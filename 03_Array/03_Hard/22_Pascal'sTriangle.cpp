//118. Pascal's Triangle

/*TYPE 1 : if R and C are given and asked to print the element at that position

int nCr(int n, int r) {
    long long res = 1;

    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}
*/

/*TYPE 2: Given the row number n. Print the n-th row of Pascal’s triangle.
int ans  = 1;
cout<<ans;

for(int i=1; i<row; i++){
    ans = ans * (row-i);
    ans  = ans/i;
    cout<<ans;
}
*/

/*TYPE 3: Generate pascal's triangle*/
vector<int> generateRow(int row){
    vector<int> ans;
    int res = 1;
    ans.push_back(res);

    for(int i=1; i<row; i++){
        res = res * (row-i);
        res = res/i;
        ans.push_back(res);
    }
    return ans;
}

vector<vector<int>> pascalTrainagle(int numRow){
    vector<vector<int>> ans;

    for(int i=1; i<=numRow; i++){
        ans.push_back(generateRow(i));
    }

    return ans;
}


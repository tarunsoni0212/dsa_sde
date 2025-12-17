// 118. Pascal's Triangle

//Method 1:

class Solution1 {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans(numRows);

        for(int i=0; i<numRows; i++){
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;

            for(int j=1; j<i; j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }

        }

        return ans;

        
    }
};



//Method 2:

class Solution2 {
public:
    vector<int> printRow(int n){
        vector<int>list;
        int ans = 1;
        list.push_back(ans);
        for(int i=1; i<n; i++){
            ans = ans*(n-i);
            ans = ans/i;
            list.push_back(ans);
        }
        return list;

    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>list;
        for(int i=1; i<=numRows; i++){
            vector<int>ans = printRow(i);
            list.push_back(ans);
        }
        return list;
    }
};
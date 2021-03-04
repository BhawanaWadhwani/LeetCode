class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[n-1-j][i];  //reversed i and j in every step
                matrix[n-1-j][i]=matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j]=matrix[j][n-1-i];
                matrix[j][n-1-i]=temp;
            }
        }
    }
};

// 1  2  3  4
// 5  6  7  8 
// 9  10 11 12
// 13 14 15 16 

// 2-[0][1] and 9-[2][0]

//2 will be replaced by 9 
//9 will be replaced by 15
//15 will be replaced by 8
//8 will be replaced by 2

//ROTATE = ALSO EQUAL TO TRANSPOSE THAN REVERSE EACH ROW FROM LEFT TO RIGHT

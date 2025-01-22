class Solution {
public:

    bool isValid(int x,int y,int row,int col){
        if(x<row && x>=0 && y < col && y>=0) return true;
        else return false;
    }
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int row = isWater.size();
        int col = isWater[0].size();

        vector<vector<int>> result(row,vector<int>(col,-1));

        queue<pair<int,int>> que;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(isWater[i][j] == 1){
                    result[i][j] = 0;
                    que.push({i,j});
                }
            }
        }

        int dx[] = {1,-1,0,0};
        int dy[]=  {0,0,1,-1};
        
        int height = 0;
        while(!que.empty()){
            int n = que.size();

            while(n--){
               pair<int,int> pr = que.front();
               que.pop();
                for(int i=0;i<4;i++){
                    int x = pr.first + dx[i];
                    int y = pr.second + dy[i];
                    if(isValid(x,y,row,col) && result[x][y] == -1){
                        result[x][y] = height + 1;
                        que.push({x,y});
                    }
                }
                
            }
            height++;
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
return result;
    }
};

#include <iostream>
#include <vector>

using namespace std;

bool isvalid (int r , int c , vector<vector<int>>& image){

    if(r < 0 || r >= (int) image.size())
        return false;

    if(c < 0 || c >= (int) image.size())
        return false;

    return true;
}

void dfs(int r , int c , vector<vector<int>>& image , vector<vector<bool>>& visited , int oldColor , int newColor){

    if(!isvalid(r , c , image  ) || visited[r][c] || image[r][c] != oldColor)
        return;

    visited[r][c] = true;
    image[r][c] = newColor;

    dfs(r , c-1 , image , visited , oldColor , newColor);
    dfs(r-1 , c , image , visited , oldColor , newColor);
    dfs(r , c+1 , image , visited , oldColor , newColor);
    dfs(r+1 , c , image , visited , oldColor , newColor);
}

void modified_dfs_v1(int r , int c , vector<vector<int>>& image , vector<vector<bool>>& visited , int oldColor , int newColor){

    if(!isvalid(r , c , image  ) || visited[r][c] || image[r][c] != oldColor)
        return;

    visited[r][c] = true;
    image[r][c] = newColor;

    int dr[] = { -1 , 0 , 1 , 0};
    int dc[] = {  0 , 1 , 0 ,-1};

    for(int i = 0 ; i < 4 ; ++i)
        modified_dfs_v1(r+dr[i] , c+dc[i] , image , visited , oldColor , newColor); 
}

void modified_dfs_v2(int r , int c , vector<vector<int>>& image , vector<vector<bool>>& visited , int oldColor , int newColor){

    if(!isvalid(r , c , image  ) || visited[r][c] || image[r][c] != oldColor)
        return;

    visited[r][c] = true;
    image[r][c] = newColor;

    for (int i = -1 ; i <= 1 ; i++){

        for(int j = -1 ; j <= 1 ; j++){

            if(i == j == 0)
                continue;;
            
            modified_dfs_v2(r+i , c+j , image , visited , oldColor , newColor);
        }
    }
}

vector<vector<int>> flood_fill(vector<vector<int>>& image , int r , int c , int newColor){

    vector<vector<bool>> visited(image.size() , vector<bool>(image[0].size()));

    dfs(r , c ,  image , visited , image[r][c] , newColor);

    return image;
}

class solution
{
private:
    int dr[4] = { -1 , 0 , 1 , 0};
    int dc[4] = {  0 , 1 , 0 ,-1};

    bool is_subIsland  = false;

    bool isvalid (int r , int c , vector<vector<int>>& image){

    if(r < 0 || r >= (int) image.size())
        return false;

    if(c < 0 || c >= (int) image.size())
        return false;

    return true;
}

public:


    void dfs(int r , int c , vector<vector<int>>& grid1 , vector<vector<int>>& grid2){

        if(isvalid(r , c , grid2) || grid2[r][c] == 0)
            return;

        if(grid2[r][c] && !grid1[r][c]){

            is_subIsland = false;

            return; 
        }

        grid2[r][c] = 0; // mark it as visited 

        for(int d = 0 ; d < 4 ; d++)
            dfs(r+dr[d] , c+dc[d] , grid1, grid2);
    }
    
    int coutn_subIslands(vector<vector<int>>& grid1 , vector<vector<int>>& grid2){

        int count = 0 ; 

        for (int r = 0 ; r < grid2.size() ; r++){

            for (int c = 0 ; c < grid2[0].size() ; c++){

                if(grid2[r][c]){  // if the value is -> 1

                    is_subIsland = true;

                    dfs(r  , c , grid1 , grid2);

                    count += is_subIsland;
                }
            }
        }
    }
};


 

int main(){

}
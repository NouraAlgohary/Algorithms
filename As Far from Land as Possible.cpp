// Given an n x n grid containing only values 0 and 1, where 0 represents water and 1 represents land, find a water cell such that its distance to the nearest land cell is maximized, and return the distance. If no land or water exists in the grid, return -1.

// The distance used in this problem is the Manhattan distance: the distance between two cells (x0, y0) and (x1, y1) is |x0 - x1| + |y0 - y1|

// Input: grid = [[1,0,1],[0,0,0],[1,0,1]]
// Output: 2
// Explanation: The cell (1, 1) is as far as possible from all the land with distance 2.

// Input: grid = [[1,0,0],[0,0,0],[0,0,0]]
// Output: 4
// Explanation: The cell (2, 2) is as far as possible from all the land with distance 4.

class Solution {
public:
    const pair<int, int> direction[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    int maxDistance(vector<vector<int>>& grid) {
        int dist = -1;
        queue<pair<int,int>> q;
        vector<vector<int>> visited(grid.size(), vector<int> (grid[0].size(), 0));

        // as 0 represents water and 1 represents land
        // we want to check water only (only 0s), so mark land as visited
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                visited[i][j] = grid[i][j];

                // if land, push in the queue
                if(grid[i][j])
                {
                    q.push({i, j});
                }
            }
        }

        while(!q.empty())
        {
            int q_size = q.size();
            while(q_size--)
            {
                // removing that cell from queue, whose neighbour will be visited now
                pair<int, int> cell = q.front();
                q.pop();

                for(pair<int,int> dir: direction)
                {
                    int x = cell.first + dir.first;
                    int y = cell.second + dir.second;

                    if(x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && !visited[x][y])
                    {
                        visited[x][y] = 1;
                        q.push({x, y});
                    }
                }
            }
            dist++;
        }
        if(dist) return dist;
        return -1;
    }
};
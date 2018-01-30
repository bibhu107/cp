#include <bits/stdc++.h>
using namespace std;
 
//  structure for storing a cell's data
struct cell
{
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};
 
//  Utility method returns true if (x, y) lies inside Board
bool isInside(int x, int y, int N)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}
 
//  Method returns minimum step to reach target position
int minStepToReachTarget(int knightPos[], int targetPos[],
                                                   int N)
{
    //  x and y direction, where a knight can move
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
 
    //  queue for storing states of knight in board
    queue<cell> q;
 
    //  push starting position of knight with 0 distance
    q.push(cell(knightPos[0], knightPos[1], 0));
 
    cell t;
    int x, y;
    bool visit[N + 1][N + 1];
 
    //  make all cell unvisited
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;
 
    //  visit starting state
    visit[knightPos[0]][knightPos[1]] = true;
 
    //  loop untill we have one element in queue
    while (!q.empty())
    {
        t = q.front();
        q.pop();
        visit[t.x][t.y] = true;
 
        // if current cell is equal to target cell,
        // return its distance
        if (t.x == targetPos[0] && t.y == targetPos[1])
            return t.dis;
 
 
        //  loop for all reahable states
        for (int i = 0; i < 8; i++)
        {
            x = t.x + dx[i];
            y = t.y + dy[i];
 
            // If rechable state is not yet visited and
            // inside board, push that state into queue
            if (isInside(x, y, N) && !visit[x][y])
                q.push(cell(x, y, t.dis + 1));
 
        }
    }
}
 
// Driver code to test above methods
int main()
{
    //  size of square board
    int t;
    cin>>t;
    int f11,f12,f21,f22;

    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        // cout<<s1[0]<<" "<<s1[1]<<endl;
        // cout<<s2[0]<<" "<<s2[1]<<endl;
         f11 = s1[0]-97+1;
         f12 = s1[1]-49+1;
         f21 = s2[0]-97+1;
         f22 = s2[1]-49+1;
         // cout<<f11 <<" "<< f12 <<" "<< f21<<" "<< f22;
    int N = 8;
    int knightPos[] = {f11, f12};
    int targetPos[] = {f21, f22};
 
    cout << minStepToReachTarget(knightPos, targetPos, N) <<endl;
 
    }

    return 0;
}
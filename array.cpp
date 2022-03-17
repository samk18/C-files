#include<iostream>
#define N 
using namespace std;
#include <cstdio>

int maze[N][N];

int sol[N][N];         //final solution of the maze path is stored here
void showPath() {
   for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++)
         cout << sol[i][j] << " ";
      cout << endl;
   }
}

bool isValidPlace(int x, int y) {      //function to check place is inside the maze and have value 1
   if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
      return true;
   return false;
}

bool solveRatMaze(int x, int y) {
   if(x == N-1 && y == N-1) {       //when (x,y) is the bottom right room
      sol[x][y] = 1;
      return true;
   }

   if(isValidPlace(x, y) == true) {     //check whether (x,y) is valid or not
      sol[x][y] = 1; //set 1, when it is valid place
      if (solveRatMaze(x+1, y) == true)       //find path by moving right direction
         return true;
      if (solveRatMaze(x, y+1) == true)         //when x direction is blocked, go for bottom direction
         return true;
      sol[x][y] = 0;         //if both are closed, there is no path
      return false;
   }  
   return false;
}

bool findSolution() {
   if(solveRatMaze(0, 0) == false) {
      cout << " NO ";
      return false;
   }
   showPath();
   return true;
}

int main() {
    int d;
    scanf("%d",&d);
    int n;
    int k;
  
    while(d--)
    {
           scanf("%d",&n);
           N=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d", &k);
                maze[i][j] = k;
            }
        }
        findSolution();
    }
   
}
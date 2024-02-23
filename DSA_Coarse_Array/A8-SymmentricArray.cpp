/*
#include<bits/stdc++.h>
//must be failed for most of test cases
using namespace std;
int main() {
    // Removed duplicate variable declaration
    vector<vector<int>> arr = {
        {1,5},{2,3},{4,2},{5,1},{2,4}
    };
    vector<int> ans;
    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = 0; j < arr[i].size() - 1; j++) {
            if(arr[i][j] == arr[i+1][j+1] && arr[i][j+1] == arr[i+1][j]) {
                ans.push_back(arr[i][j]);
                ans.push_back(arr[i][j+1]);
            }
        }
    }

    // Printing the elements in ans
    cout << "the ans is: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

*/

/*
    #include<bits/stdc++.h>

using namespace std;
int main() {
  int n = 5;
 
  int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}}; 
  cout << "The Symmetric Pairs are: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]) {
        cout << "(" << arr[i][1] << " " << arr[i][0] << ")" << " ";
        break;
      }
    }
  }

}



*/

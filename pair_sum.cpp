#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s) {
  sort(arr.begin(), arr.end());
  vector<vector<int>> final;
  int low = 0, high = arr.size() - 1;
  while (low < high) {
    if (arr[low] + arr[high] == s) {
      if (arr[low] != arr[high]) {
        int x = arr[low], y = arr[high];
        int j = low + 1, lc = 1, k = high - 1, hc = 1;
        while (arr[j] == x) {
          lc++;
          j++;
        }
        while (arr[k] == y) {
          hc++;
          k--;
        }
        for (int l = 0; l < lc * hc; l++) {
          final.push_back({arr[low],arr[high]});
        }
        low = j;
        high = k;
      }
      else {
        int c = ((high - low + 1) * ((high - low + 1) - 1)) / 2;
        for (int l = 0; l < c; l++) {
          final.push_back({arr[low],arr[high]});
        }
        return final;
      }
    }
    else if (arr[low] + arr[high] > s) {
      high--;
    }
    else {
      low++;
    }
  }

  return final;
}














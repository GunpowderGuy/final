//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_PC2_SEC01_V2021_1_P1_H
#define POO2_PC2_SEC01_V2021_1_P1_H

#include <climits>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

template <template <typename...> class CTemplate, typename CType,
          typename T = typename CType::value_type>
std::pair<int, int> minimum_range(CTemplate<CType> containers) {
  return std::pair<int, int>{};
}
void question_1_1();

struct Comparator {
  bool operator()(pair<int, int> a, pair<int, int> b) {
    return !(a.first < b.first);
  }
};

inline vector<int> proto_minimum_range(vector<vector<int>> &nums) {
  int minRange = INT_MAX;
  int maxRange = INT_MIN;
  int rangeSize = INT_MAX;
  int tempMinRange, tempMaxRange, tempRangeSize;
  tempMinRange = INT_MAX;
  tempMaxRange = INT_MIN;
  int n = nums.size();
  vector<int> pointers(n);
  priority_queue<pair<int, int>, vector<pair<int, int>>, Comparator> pq;
  for (int i = 0; i < n; i++) {
    pq.push({nums[i][0], i});
    tempMaxRange = max(tempMaxRange, nums[i][0]);
  }
  while (1) {
    pair<int, int> temp = pq.top();
    pq.pop();
    tempMinRange = temp.first;
    int idx = temp.second;
    if (tempMaxRange - tempMinRange < rangeSize) {
      rangeSize = tempMaxRange - tempMinRange;
      minRange = tempMinRange;
      maxRange = tempMaxRange;
    }
    pointers[idx]++;
    if (pointers[idx] == nums[idx].size())
      break;
    else {
      tempMaxRange = max(tempMaxRange, nums[idx][pointers[idx]]);
      pq.push({nums[idx][pointers[idx]], idx});
    }
  }
  vector<int> ans(2);
  ans[0] = minRange;
  ans[1] = maxRange;
  return ans;
}

inline pair<int, int> minimum_range(vector<vector<int>> &conts) {
  return make_pair(0,0);
  
  const auto temp = proto_minimum_range(conts);

  if (!temp.empty()) {
    return make_pair(temp.front(), temp.back());
  } else {
    return make_pair(0, 0);
  }
}

#endif // POO2_PC2_SEC01_V2021_1_P1_H

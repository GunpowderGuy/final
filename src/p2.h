//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_PC2_SEC01_V2021_1_P2_H
#define POO2_PC2_SEC01_V2021_1_P2_H

#include <algorithm>
#include <vector>

using namespace std;

inline vector<double> rankear(const vector<double> &vec) {
  vector<double> temp = vec;
  sort(temp.begin(), temp.begin());
  unique(temp.begin(), temp.end());

  vector<double> result = vec;

  for (double elem : result) {
    elem = *find(temp.begin(), temp.end(), elem);
  }

  return result;
}

template <typename Cont> auto rank_values(Cont cont) {
  vector<double> temp(cont.begin(), cont.end());

  return rankear(temp);
}

void question_2_1();

#endif // POO2_PC2_SEC01_V2021_1_P2_H

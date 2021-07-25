//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_PC2_SEC01_V2021_1_P2_H
#define POO2_PC2_SEC01_V2021_1_P2_H

template <typename T, template <typename...> class CType>
CType<T> rank_values(CType<T> cnt) {
  return CType<T>{};
}

void question_2_1();

#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

template <typename T> inline vector<T> rank_values(const vector<T> &vec) {

  vector<T> temp = vec;
  sort(temp.begin(), temp.end());
  unique(temp.begin(), temp.end());

  vector<T> result = vec;

  for (T &elem : result) {
    elem = distance(temp.begin(), find(temp.begin(), temp.end(), elem)) + 1;
  }

  return result;
}

/*
template <typename Cont> auto rank_values(Cont cont) {
  vector<double> temp(cont.begin(), cont.end());

  return rankear(temp);
}
*/

#endif // POO2_PC2_SEC01_V2021_1_P2_H

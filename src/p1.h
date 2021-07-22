//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_PC2_SEC01_V2021_1_P1_H
#define POO2_PC2_SEC01_V2021_1_P1_H

#include <algorithm>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

void eliminar(double elemento, vector<vector<double>> &cont) {
  auto backup = cont;
  auto subcont1 = cont[0];
  auto puntero = find(subcont1.begin(), subcont1.end(), elemento);

  while (*puntero != subcont1.back()) {
    for (auto subcont : cont) {
      puntero = find(subcont.begin(), subcont.end(), elemento);
    }
  }
}

pair<double, double> minimum_range(const vector<vector<double>> &containers) {

  std::priority_queue<double, std::vector<double>, std::greater<double>>
      min_heap;

  //for ()
}

void question_1_1();

#endif // POO2_PC2_SEC01_V2021_1_P1_H

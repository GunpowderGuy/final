//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"
using namespace std;

inline void question_1_1_b(){
    std::vector <int> v1 = {2, 3, 4};
    std::vector <int> v2 = {3, 4, 6, 11};
    std::vector <int> v3 = {6, 7, 9, 13};
    std::vector <int> v4 = {5, 8, 10};
    std::vector <int> v5 = {1, 3, 5};
    std::vector<std::vector <int>> vr = {v1, v2, v3, v4, v5};
    // buscar rango
    auto res = minimum_range (vr);
    // muestra el resultado
    cout << res.first << " " << res.second << endl; // 4 6
}

TEST_CASE("Question #1_1") {
    execute_test("test_1_1.in", question_1_1_b);
}
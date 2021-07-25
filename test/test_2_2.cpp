//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"
using namespace std;

void question_2_2() {
    vector<int> vec1 = {9, 10, 2, 5, 8, 4, 3, 1};
    auto res = rank_values(vec1);
    for (auto row: res)
        cout << row << " ";
    cout << endl;
}

TEST_CASE("Question #2_2") {
    execute_test("test_2_2.in", question_2_2);
}
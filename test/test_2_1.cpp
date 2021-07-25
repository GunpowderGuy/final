//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"
using namespace std;

void question_2_1_b(){
    std::vector<int> vec1 = {10, 12, 3, 4, 15, 8, 1, 18};
    auto res = rank_values(vec1);
    for (auto row: res)
        cout << row << " ";
    cout << endl;
}

TEST_CASE("Question #2_1") {
    execute_test("test_2_1.in", question_2_1_b);
}
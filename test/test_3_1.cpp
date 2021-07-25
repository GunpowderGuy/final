//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
#include "binary_tree.h"
using namespace std;

void question_3_1_b(){
    binary_tree<int> bt1(10);
// Izquierda
    auto left_branch = bt1.add_left(bt1.get_root(), 8);
    bt1.add_left(left_branch, 3);
    bt1.add_right(left_branch, 4);
// Derecha
    auto right_branch = bt1.add_right(bt1.get_root(), 7);
    bt1.add_left(right_branch, 8);
    bt1.add_right(right_branch, 4);
// Verificar si es heap
    cout << boolalpha << bt1.is_max_heap() << endl; // false
}

TEST_CASE("Question #3_1") {
    execute_test("test_3_1.in", question_3_1_b);
}
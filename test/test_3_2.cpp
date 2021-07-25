//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
#include "binary_tree.h"
using namespace std;

void question_3_2() {
    binary_tree<int> bt2(20);
    // Izquierda
    auto left_branch = bt2.add_left(bt2.get_root(), 12);
    bt2.add_left(left_branch, 5);
    bt2.add_right(left_branch, 8);
    // Derecha
    auto right_branch = bt2.add_right(bt2.get_root(), 7);
    bt2.add_left(right_branch, 4);
    // Verificar si es heap
    cout << boolalpha << bt2.is_max_heap () << endl; // true
}

TEST_CASE("Question #3_2") {
    execute_test("test_3_2.in", question_3_2);
}
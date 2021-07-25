//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"
using namespace std;

void question_1_2(){
    int n {};
    string text;
    getline(cin, text);
    stringstream number(text);
    number >> n;
    vector<vector<int>> vec(n);
    for (auto& item: vec) {
        getline(cin, text);
        stringstream line(text);
        int value{};
        while (line >> value) {
            item.push_back(value);
        }
    }
    // buscar rango
    try {
        auto res = minimum_range(vec);
        // muestra el resultado
        cout << res.first << " " << res.second << endl;
    }
    catch (const exception& err) {
        cout << err.what();
    }
}

TEST_CASE("Question #1_2") {
    execute_test("test_1_2.in", question_1_2);
}
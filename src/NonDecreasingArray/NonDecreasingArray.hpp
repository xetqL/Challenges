//
// Created by xetql on 11/13/20.
//

#ifndef CHALLENGES_NONDECREASINGARRAY_HPP
#define CHALLENGES_NONDECREASINGARRAY_HPP
#include <iostream>
#include <vector>
#include <cassert>

template <typename T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    const auto s = v.size();
    for (int i = 0; i < s; ++i) {
        os << v[i];
        if (i != s - 1) os << " ";
    }
    return os;
}

struct NonDecreasingArray {
    static bool checkPossibility(std::vector<int>& x) {
        uint8_t nChanged = 0;
        const auto S = x.size() - 1;
        for(auto i = 1; i < S; ++i) {
            if( x[i-1] > x[i+1] &&  x[i] > x[i+1]) {
                if(nChanged) return false;
                x[i+1] = x[i];
                nChanged++;
            }
            if( x[i-1] > x[i] ) {
                if(nChanged) return false;
                x[i-1] = x[i];
                nChanged++;
            }
            if( x[i] > x[i+1] )  {
                if(nChanged) return false;
                x[i] = x[i+1];
                nChanged++;
            }
        }
        return true;
    }
    static void run() {
        std::vector<std::vector<int>> test_cases =
                {{1,2,3,4},
                 {4,3,2,1},
                 {-1,4,2,3}, {4,5,3,1}, {4,5,3,1}, {5,7,1,8}, {12,8,15,11,13,14}};
        std::vector<bool> solutions = {true,false,true,false,false,true,false};
        for(auto i = 0; i < test_cases.size(); ++i)
            assert(checkPossibility(test_cases[i]) == solutions[i]);
        std::cout << "working" << std::endl;
    }
};


#endif //CHALLENGES_NONDECREASINGARRAY_HPP

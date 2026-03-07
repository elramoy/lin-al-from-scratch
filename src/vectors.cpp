#include "vectors.hpp"
#include <iostream>
#include <cmath>

void printVector(const Vec& v){
    std::cout<<"{ ";
    for (auto element : v){
        std::cout<<element<<" ";
    }
    std::cout<<"}";
}

Vec scalar(const Vec& v, int t){
    Vec scaledVector(v.size());
    for (size_t i = 0; i < v.size(); i++){
        scaledVector[i] = v[i] * t;
    }
    return scaledVector;
}

Vec addition(const Vec& v1, const Vec& v2){
    Vec comboVector (v1.size());
    for(size_t i = 0; i < v1.size(); i++){
        comboVector[i] = v1[i] + v2[i];
    }
    return comboVector;
}

Vec linearCombination(const Vec& v1, int t1, const Vec& v2, int t2){
    Vec newV1 = scalar(v1, t1);
    Vec newV2 = scalar(v2, t2);
    Vec comboVector = addition(newV1, newV2);
    return comboVector;
}

float dotProduct(const Vec& v1, const Vec& v2){
    float accumulator = 0;
    for(size_t i = 0; i < v1.size(); i++){
        accumulator += v1[i] * v2[i];
    }
    return accumulator;
}

float vectorLength(const Vec& v){
    float sum = 0;
    for(auto element : v){
        sum += element * element;
    }
    return std::sqrt(sum);
}

Vec normalization(const Vec& v){
    Vec unitV (v.size());
    float length = vectorLength(v);
    for(size_t i = 0; i < v.size(); i++){
        unitV[i] = v[i] / length;
    }
    return unitV;
}


#pragma once
#include <vector>

typedef std::vector<float> Vec;

void printVector(const Vec& v);

Vec scalar(const Vec& v, int t);
Vec addition(const Vec& v1, const Vec& v2);

Vec linearCombination(const Vec& v1, int t1, const Vec& v2, int t2);

float dotProduct(const Vec& v1, const Vec& v2);

float vectorLength(const Vec& v);
Vec normalization(const Vec& v);
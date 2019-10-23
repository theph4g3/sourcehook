#ifndef SDK_MATH_PERFORMANCE_FUNCTIONS_H
#define SDK_MATH_PERFORMANCE_FUNCTIONS_H
#pragma once

float FastSqrt(float x);
float FastRSqrtFast(float x);
float FastRSqrt(float x);
void FastSinCos(float x, float* s, float* c);
float FastSin(float x);
float FastCos(float x);
float FastClampInfinity(float x);

#endif
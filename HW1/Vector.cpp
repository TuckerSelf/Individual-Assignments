/**
 * @file Vector.cpp
 * @author Tucker Self
 * @date 2023-09-15
 * @brief Vector Definitions
 * 
 * the definitions and code of the functions of a custom vector class
 */

#include <iostream>
#include <fstream>
#include "Vector.h"

using namespace std;

Vector::Vector(){
  vec_ptr = NULL;
  vec_size = 0;
  vec_capacity = 0;
}

Vector::Vector(const Vector &other){
  vec_ptr = other.vec_ptr;
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
}

Vector::~Vector(){
  delete[] vec_ptr;
  vec_size = 0;
  vec_capacity = 0;
}

Vector& Vector::operator=(const Vector &other){
  vec_ptr = other.vec_ptr;
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
  return *this;
}

int Vector::size(){
  return vec_size;
}

int Vector::capacity(){
  return vec_capacity;
}

void Vector::push_back(int element){
  if(vec_ptr[size-1] == nullptr)
    vec_ptr[size-1] = element;
  else{
    vec_ptr = new int (2*vec_capacity);
    vec_ptr[size-1] = element;
  }
}

void Vector::reserve(int n){
  if(n > vec_capacity)
    vec_ptr = new int [n];
}

int& Vector::operator[](unsigned int index){
  return vec_ptr[index];
}

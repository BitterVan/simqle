#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <cstring>
#include <fstream>
using namespace std;

// Enumeration of the basic three types
enum class Type {INT, DOUBLE, STRING};

// Enumeration of condition operators
enum class Operator {EQ, NE, LT, LE, GT, GE};

const int BLOCK_SIZE = 4096;
const int MAX_CAPACITY = 1024;
const int REAL_SIZE = 3072;
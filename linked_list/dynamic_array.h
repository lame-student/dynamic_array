#pragma once

#include<iostream>
using namespace std;
struct dynamic_array
{
	int count;
	int size;
	double* data;
};

dynamic_array* init();

void print(dynamic_array*);
void add(dynamic_array*,double);
void alloc(dynamic_array*);
double remove(dynamic_array*, int);
void delete_array(dynamic_array*);
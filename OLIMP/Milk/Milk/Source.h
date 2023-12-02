#pragma once
#include <iostream>
#include <fstream>
#include <string>

float** CreateArray(int Line);
void DeleteArray(float** arr, int Line);

std::string Working(float** arr, int NumberOfCompanies);

void Return(std::string Str);
float** ReadFile(int& NumberOfSuppliers);
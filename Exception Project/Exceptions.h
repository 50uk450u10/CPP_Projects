#pragma once
#include <exception>
#include <string>

using namespace std;

class InvalidEmployeeNumber : public exception//Exception for out of range employee number
{
private:
    string exceptionMessage = "Exception!: Invalid Employee Number!";

public:
    const char* what() const throw()
    {
        return exceptionMessage.c_str();
    }
};

class InvalidShift : public exception//Exception for invalid shift time
{
private:
    string exceptionMessage = "Exception!: Invalid Shift!";

public:
    const char* what() const throw()
    {
        return exceptionMessage.c_str();
    }
};

class InvalidPayRate : public exception//Exception for negative pay rate
{
private:
    string exceptionMessage = "Exception!: Invalid Pay Rate!";

public:
    const char* what() const throw()
    {
        return exceptionMessage.c_str();
    }
};
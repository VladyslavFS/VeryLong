#pragma once
#ifndef VERYLONG_H
#define VERYLONG_H

#include <vector>
#include <string>

using namespace std;

class VeryLong {
private:
    vector<double> digits;
    bool isNegative = false;

public:
    VeryLong();
    VeryLong(const string& numStr);
    VeryLong difference(const VeryLong& other) const;
    VeryLong summ(const VeryLong& other) const;
    VeryLong operator+(const VeryLong& other) const;
    VeryLong operator-(const VeryLong& other) const;
    VeryLong operator/(const VeryLong& other) const;
    VeryLong operator*(const VeryLong& other) const;
    bool operator<(const VeryLong& other) const;
    bool operator>(const VeryLong& other) const;
    bool operator==(const VeryLong& other) const;
    void input();
    void print() const;
};

#endif // VERYLONG_H


#ifndef UTILITIES_H
#define UTILITIES_H

struct xyzFloat{
    float x;
    float y;
    float z;

    xyzFloat();
    xyzFloat(float const x, float const y, float const z);

    xyzFloat operator+() const;
    xyzFloat operator-() const;
    xyzFloat operator+(xyzFloat const & summand) const;
    xyzFloat operator-(xyzFloat const & substrahend) const;
    xyzFloat operator*(float const operand) const;
    xyzFloat operator/(float const divisor) const;
    xyzFloat & operator+=(xyzFloat const & summand);
    xyzFloat & operator-=(xyzFloat const & substrahend);
    xyzFloat & operator*=(float const operand);
    xyzFloat & operator/=(float const divisor);
};

void printByte(char byte);

#endif
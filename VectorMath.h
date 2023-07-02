#ifndef VECTORMATH_H
#define VECTORMATH_H

#include <Arduino.h>

class VectorMath {
public:
  // Constructors
  VectorMath();
  VectorMath(float x, float y, float z);

  // Vector addition
  VectorMath operator+(const VectorMath& vec) const;

  // Vector subtraction
  VectorMath operator-(const VectorMath& vec) const;

  // Dot product
  float dotProduct(const VectorMath& vec) const;

  // Cross product
  VectorMath crossProduct(const VectorMath& vec) const;

  // Vector normalization
  VectorMath normalize() const;

  // Getters for the vector components
  float getX() const;
  float getY() const;
  float getZ() const;

  // Setters for the vector components
  void setX(float x);
  void setY(float y);
  void setZ(float z);

private:
  float x_;
  float y_;
  float z_;
};

#endif // VECTORMATH_H

#include "VectorMath.h"

// Constructors
VectorMath::VectorMath() : x_(0), y_(0), z_(0) {}

VectorMath::VectorMath(float x, float y, float z) : x_(x), y_(y), z_(z) {}

// Vector addition
VectorMath VectorMath::operator+(const VectorMath& vec) const {
  return VectorMath(x_ + vec.x_, y_ + vec.y_, z_ + vec.z_);
}

// Vector subtraction
VectorMath VectorMath::operator-(const VectorMath& vec) const {
  return VectorMath(x_ - vec.x_, y_ - vec.y_, z_ - vec.z_);
}

// Dot product
float VectorMath::dotProduct(const VectorMath& vec) const {
  return x_ * vec.x_ + y_ * vec.y_ + z_ * vec.z_;
}

// Cross product
VectorMath VectorMath::crossProduct(const VectorMath& vec) const {
  return VectorMath(y_ * vec.z_ - z_ * vec.y_, z_ * vec.x_ - x_ * vec.z_, x_ * vec.y_ - y_ * vec.x_);
}

// Vector normalization
VectorMath VectorMath::normalize() const {
  float magnitude = sqrt(x_ * x_ + y_ * y_ + z_ * z_);
  if (magnitude != 0) {
    return VectorMath(x_ / magnitude, y_ / magnitude, z_ / magnitude);
  } else {
    return VectorMath();
  }
}

// Getters for the vector components
float VectorMath::getX() const {
  return x_;
}

float VectorMath::getY() const {
  return y_;
}

float VectorMath::getZ() const {
  return z_;
}

// Setters for the vector components
void VectorMath::setX(float x) {
  x_ = x;
}

void VectorMath::setY(float y) {
  y_ = y;
}

void VectorMath::setZ(float z) {
  z_ = z;
}


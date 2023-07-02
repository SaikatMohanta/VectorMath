#include "VectorMath.h"

void setup() {
  Serial.begin(9600);

  VectorMath vec1(1, 2, 3);
  VectorMath vec2(4, 5, 6);

  VectorMath vec3 = vec1 + vec2; // Vector addition
  VectorMath vec4 = vec1 - vec2; // Vector subtraction

  float dotProduct = vec1.dotProduct(vec2); // Dot product

  VectorMath crossProduct = vec1.crossProduct(vec2); // Cross product

  VectorMath normalizedVec1 = vec1.normalize(); // Vector normalization

  // Print the results
  Serial.print("Vector 1: ");
  Serial.print(vec1.getX());
  Serial.print(", ");
  Serial.print(vec1.getY());
  Serial.print(", ");
  Serial.println(vec1.getZ());

  Serial.print("Vector 2: ");
  Serial.print(vec2.getX());
  Serial.print(", ");
  Serial.print(vec2.getY());
  Serial.print(", ");
  Serial.println(vec2.getZ());

  Serial.print("Vector 1 + Vector 2: ");
  Serial.print(vec3.getX());
  Serial.print(", ");
  Serial.print(vec3.getY());
  Serial.print(", ");
  Serial.println(vec3.getZ());

  Serial.print("Vector 1 - Vector 2: ");
  Serial.print(vec4.getX());
  Serial.print(", ");
  Serial.print(vec4.getY());
  Serial.print(", ");
  Serial.println(vec4.getZ());

  Serial.print("Dot product: ");
  Serial.println(dotProduct);

  Serial.print("Cross product: ");
  Serial.print(crossProduct.getX());
  Serial.print(", ");
  Serial.print(crossProduct.getY());
  Serial.print(", ");
  Serial.println(crossProduct.getZ());

  Serial.print("Normalized Vector 1: ");
  Serial.print(normalizedVec1.getX());
  Serial.print(", ");
  Serial.print(normalizedVec1.getY());
  Serial.print(", ");
  Serial.println(normalizedVec1.getZ());
}

void loop() {
  // Empty loop
}

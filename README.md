# VectorMath
Arduino library to manipulate 3d Vectors

Let's go through the different aspects of the VectorMath library:

1. Header file: "VectorMath.h" defines the class `VectorMath` and declares its member functions and variables. It also includes the necessary Arduino library (`Arduino.h`) for using Arduino-specific functionality.

2. Class definition: The `VectorMath` class encapsulates the properties and operations of a 3D vector. It has private member variables `x_`, `y_`, and `z_` to store the vector components.

3. Constructors: The class provides two constructors - a default constructor that initializes the vector components to zero and a parameterized constructor that allows you to set the components during object creation.

4. Operator overloading: The class overloads the `+` and `-` operators to perform vector addition and subtraction, respectively. These operators create a new `VectorMath` object by adding or subtracting the corresponding components of two vectors.

5. Member functions: The class provides various member functions to perform vector operations:

   - `dotProduct`: Calculates and returns the dot product of two vectors.
   - `crossProduct`: Computes and returns the cross product of two vectors.
   - `normalize`: Normalizes the vector to have a unit length and returns the normalized vector.
   - `getX`, `getY`, `getZ`: Getters for accessing the individual components of the vector.
   - `setX`, `setY`, `setZ`: Setters for modifying the components of the vector.

6. Source file: "VectorMath.cpp" contains the implementations of the member functions declared in the header file. These functions perform the necessary calculations using the vector components and return the results.

7. Usage example: The Arduino sketch demonstrates how to utilize the VectorMath library. It creates two vector objects, performs operations such as addition, subtraction, dot product, cross product, and normalization, and prints the results to the Serial Monitor.

By encapsulating vector operations within a custom library, you can simplify the code and reuse it in multiple sketches without duplicating the implementation. The library provides a convenient way to work with vectors in Arduino projects involving 3D geometry or physics simulations.

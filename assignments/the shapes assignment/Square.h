# pragma once

#include "Shape.h"

namespace shapes {

    class Square : public Shape {
        private:
          double sideLength;

        public:
          // Default constructor (sideLength = 0)
          Square();

          // Overloaded constructor with side length parameter
          Square(double sideLength);

          // Accessor for side length
          double getSideLength() const { return sideLength; }

          // Destructor
          ~Square() override = default;
    };

} 

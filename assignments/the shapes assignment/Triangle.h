# pragma once

#include "Shape.h"

namespace shapes {

    class Triangle : public Shape {
      private:
        double base;
        double height;

      public:
        // Default constructor (base = 0, height = 0)
        Triangle();

        // Overloaded constructor with base and height parameters
        Triangle(double base, double height);

        // Accessors for base and height
        double getBase() const { return base; }
        double getHeight() const { return height; }

        // Destructor
        ~Triangle() override = default;
    };

}

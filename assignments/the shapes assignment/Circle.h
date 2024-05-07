# pragma once

#include "Shape.h"

namespace shapes {

    class Circle : public Shape {
      private:
        double radius;

      public:
        // Default constructor (radius = 0)
        Circle();

        // Overloaded constructor with radius parameter
        Circle(double radius);

        // Accessor for radius
        double getRadius() const { return radius; }

        // Destructor
        ~Circle() override = default;
    };

}

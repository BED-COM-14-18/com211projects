#include "Area.h"
#include <cmath>

namespace shapes {

      double Area::calculateSquareArea(const Square& square) {
        return square.getSideLength() * square.getSideLength();
      }

      double Area::calculateTriangleArea(const Triangle& triangle) {
        return triangle.getBase() * triangle.getHeight() / 2;
      }

      double Area::calculateCircleArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
      }

} 

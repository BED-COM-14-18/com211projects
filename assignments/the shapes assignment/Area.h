# pragma once

namespace shapes {

    class Area {
        public:
          static double calculateSquareArea(const Square& square);
          static double calculateTriangleArea(const Triangle& triangle);
          static double calculateCircleArea(const Circle& circle);
    };

} 

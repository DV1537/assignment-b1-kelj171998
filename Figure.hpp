#ifndef FIGURE_H
#define FIGURE_H
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Triangle.hpp"
#include "Polygon.hpp"
#include <iostream>

const int GROWTH_STEP = 10;

class Figure {
	unsigned int capacity;
	unsigned int size;
	Shape** groupOfShapes;

	struct Rectangle {
		double topX, topY;
		double bottomX, bottomY;

		Rectangle(double bottomX, double bottomY, double topX, double topY)
			: bottomX(bottomX), bottomY(bottomY), topX(topX), topY(topY) {}
	};

public: 
	Figure();
	virtual ~Figure();

	void addShape(Shape* shape);
	Shape* getShape(int index) const;
	Rectangle getBoundingBox() const;

private: 
	void sortArray(double* coords, const int size) const;

};

#endif
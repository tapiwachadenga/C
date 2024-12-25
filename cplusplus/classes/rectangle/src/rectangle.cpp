#include "rectangle.h"

Rectangle::Rectangle(){


}

Rectangle::Rectangle(const float width, const float length):
m_width(width),
m_length(length)
{

}

Rectangle::~Rectangle(){

}

float Rectangle::Area() {
	return m_length * m_width;
}

float Rectangle::ScaledArea(const float scale) {
	return scale * Rectangle::Area();
}

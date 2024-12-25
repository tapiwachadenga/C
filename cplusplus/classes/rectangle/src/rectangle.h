#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <string>

class Rectangle {
	public:
		Rectangle();
		Rectangle(const float width, const float length);
		virtual ~Rectangle();
		
		float Area();
		float ScaledArea(const float scale);
	
	protected:
		std::string pvt_str = "private string in Rectangle";

	private:	
		float m_length = 0.0;
		float m_width = 0.0;
		// std::string pvt_str = "private string in Rectangle";
};

#endif

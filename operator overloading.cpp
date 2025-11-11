#include <iostream>
using namespace std;
class Point {
public:
    float x, y;
    Point(float x_val = 0, float y_val = 0) {
        x = x_val;
        y = y_val;
    }
    Point operator+(Point p) {
        return Point(x + p.x, y + p.y);
    }
    Point operator-(Point p) {
        return Point(x - p.x, y - p.y);
    }
    float operator/(Point p) {
        return (x + p.x) / (y - p.y);
    }
};
int main() {
    Point point1(2, 3), point2(8, 9);
    Point point3 = point1 + point2;  
    Point point4 = point1 - point2;  
    float ratio = point1 / point2;
    cout << "Point1: (" << point1.x << ", " << point1.y << ")\n";
	cout << "Point2: (" << point2.x << ", " << point2.y << ")\n";
    cout << "Point3: (" << point3.x << ", " << point3.y << ")\n";
    cout << "Point4: (" << point4.x << ", " << point4.y << ")\n";
    cout << "Ratio: " << ratio << endl;
    return 0;
}


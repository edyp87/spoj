#include <iostream>

struct Point
{
    int x, y;
};

int calculateTriangleAreaDoubled(const Point& p1, const Point& p2, const Point& p3)
{
    return (p1.x * (p2.y - p3.y) + 
            p2.x * (p3.y - p1.y) + 
            p3.x * (p1.y - p2.y));
}

int calculateTriangleArea(const Point& p1, const Point& p2, const Point& p3)
{
    return calculateTriangleAreaDoubled(p1, p2, p3) / 2;
}

bool areOnTheSameLine(const Point& p1, const Point& p2, const Point& p3)
{
    return calculateTriangleAreaDoubled(p1, p2, p3) == 0;
}

int main()
{
    int howManyTrials = 0;
    std::cin >> howManyTrials;

    Point p1, p2, p3;
    while (howManyTrials--)
    {
        std::cin >> p1.x >> p1.y >> 
                    p2.x >> p2.y >> 
                    p3.x >> p3.y;
        std::cout << (areOnTheSameLine(p1, p2, p3) ? "TAK" : "NIE") << std::endl;
    }

}


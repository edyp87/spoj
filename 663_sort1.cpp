/**
	@name:     1828_dodawanie_liczb_calkowitych
	@author:   Marek Jenda
	@revision: 1.0
	@date:     23.12.2013
	@info:     pl.spoj.com/problems/KC001/
**/

#include <iostream>
#include <string>
#include <set>

struct Point {
    std::string id;
    int x, y;
    Point(std::string p_id, int p_x, int p_y) :id(p_id), x(p_x), y(p_y) { } 
    bool operator<(Point other) const {
        return x*x + y*y < other.x*other.x + other.y*other.y || id < other.id;
    }
};

class SortPoints {
    unsigned short pointsAmount;
    std::set <Point> points;
    void getPointsAmount();
    void getPoints();
    void printPoints();
public:
    SortPoints();
};

void solveAllCases() {
    unsigned int numberOfCases = 0;
    std::cin >> numberOfCases;
    for(unsigned int i = 0; i < numberOfCases; ++i) {
        SortPoints workingCase;
        std::cout << std::endl;
    }
}

int main(void) {
    solveAllCases();
    return 0;
}




// -----------------------------------------------

SortPoints::SortPoints() {
    getPointsAmount();
    getPoints();
    printPoints();
}

void SortPoints::getPointsAmount() {
    std::cin >> pointsAmount;
}

void SortPoints::getPoints() {
    for(unsigned short i = 0; i < pointsAmount; ++i) {
        unsigned int x, y;
        std::string ident;
        std::cin >> ident >> x >> y;
        Point tempPoint(ident, x, y);
        points.insert(tempPoint);
    }        
}

void SortPoints::printPoints() {
    std::set<Point>::iterator iter = points.begin();
    for(; iter != points.end(); ++iter)
        std::cout 
            << iter->id  << " " 
            << iter->x << " " 
            << iter->y << std::endl;
}


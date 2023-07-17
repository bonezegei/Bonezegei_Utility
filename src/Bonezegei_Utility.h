/*
  This Library is written for All bonezgei Libraries
  Author: Bonezegei (Jofel Batutay)

  This Library contains several useful header files for bonezegei (Rectangles Class, Point Class)
*/
#ifndef _BONEZEGEI_UTILITY_H_
#define _BONEZEGEI_UTILITY_H_



class Bonezegei_Utility {
public:
};



//Simple Point Class For UI
class Point {
public:

  Point() {
    x = 0;
    y = 0;
  }

  Point(int _x, int _y) {
    x = _x;
    y = _y;
  }

  int x, y;
};




//Simple Rectangle Class For UI
class Rect {
public:
  Rect() {
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
  }

  Rect(int xa, int ya, int xb, int yb) {
    x1 = xa;
    y1 = ya;
    x2 = xb;
    y2 = yb;
  }

  char isPointInside(int x, int y) {
    if ((x >= x1) && (x <= x2) && (y >= y1) && (y <= y2)) {
      return 1;
    } else {
      return 0;
    }
  }

  char isPointInside(Point p) {
    if ((p.x >= x1) && (p.x <= x2) && (p.y >= y1) && (p.y <= y2)) {
      return 1;
    } else {
      return 0;
    }
  }

  int x1, y1, x2, y2;
};

#endif
/*  C++ Program to show an Example of Pointers to base class  */

#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
};

class Rectangle: public Polygon {
  public:
    int area()
      { return width*height; }
};

class Triangle: public Polygon {
  public:
    int area()
      { return width*height/2; }
};

int main () {
  Rectangle rect;
  Triangle trgl;
  Polygon * ppoly1 = &rect;
  Polygon * ppoly2 = &trgl;
  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
  cout<<"\n\tPointers to base class...\n\n";
  cout << rect.area() << "\n";
  cout << trgl.area() << "\n";
  return 0;
}


// ------------------------------------------ OUTPUT -----------------------------

/*  C++ Program to show an Example of Pointers to base class  */

        Pointers to base class...

20
10
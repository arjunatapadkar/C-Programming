#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x, y;

    friend int distance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void printpoint(){
            cout<<"The Vertex is ("<<x<<", "<<y<<")"<<endl;
        }
};

int distance(Point p, Point q){
    int distance = sqrt(pow((q.x - p.x), 2) + pow((q.y - p.y), 2));
    return distance;
}

int main() {

    Point p(0, 1), q(0, 6);
    p.printpoint();
    q.printpoint();

    int c = distance( p, q);
    cout<<"The Distance Between Given Two Vertices Is "<<c<<endl;

    return 0;
}
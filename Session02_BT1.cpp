#include <stdio.h>
#include <math.h>
int main(){
    float squareEdge;
    float rectangularLength;
    float rectangularWidth;
    float circleRadius;
    const float PI = 3.14;
    //Tinh chu vi và dien tich cua hinh vuong
    float squarePerimeter = 4 * squareEdge;
    float areaSquare = squareEdge * squareEdge;
    //Tinh chu vi và dien tich cua hinh chu nhat
    float perimeterRectangle = 2 * (rectangularLength + rectangularWidth);
    float rectangularArea = rectangularLength * rectangularWidth;
    //Tinh chu vi và dien tich cua hinh tron
    float perimeterCircle = 2 * PI * circleRadius;
    float acreageCircle = PI * circleRadius * circleRadius;
    //In ket qua ra man hinh
    printf("Chu vi hinh vuong: %f\n", squarePerimeter);
    printf("Dien tich hinh vuong: %f\n", areaSquare);
    printf("Chu vi hinh chu nhat: %f\n", perimeterRectangle);
    printf("Dien tich hinh chu nhat: %f\n", areaSquare);
    printf("Chu vi hinh tron: %f\n", perimeterCircle);
    printf("Dien tich hinh tron: %f\n", acreageCircle);
}

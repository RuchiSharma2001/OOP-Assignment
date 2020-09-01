#include <iostream>
#include<math.h>
using namespace std;
inline float sphereVolume(int radius){
    return ((4.0 / 3.0) * 3.14159 * pow(radius, 3));
}
int main(){
    int rad;
    cout << "Please input the radius of the sphere: ";
    cin >> rad;
    cout << "The volume of the sphere is " << sphereVolume(rad) <<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class BasicCar {
  public: 
    virtual void start() {
      cout << "BasicCar Started" << endl;
    }
};

class AdvancedCar : public BasicCar {
  public:
    void start() {
      cout << "AdvancedCar Started" << endl;
    }
};

int main() {
  AdvancedCar c;
  c.start();

  BasicCar *ptr = new AdvancedCar();
  ptr->start();

  return 0;
}
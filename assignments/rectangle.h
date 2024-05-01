# pragma once

class rectangle{
  private:
    float length;
    float width;

  public:
    // default construct 
    rectangle();
    // destructor
    ~rectangle();
    // accessor member functions
    void setlength(float l);
    void setwidth(float w);
    float getlength() const;
    float getwidth() const;
    // declaring member function to calculate area
    float area()const;
};
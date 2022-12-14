#include <iostream>
#include <cmath>

class Complex {
  double re, im;
public:
  Complex();

  explicit Complex(const double &r, const double &i = 0);

  Complex &operator = (const Complex& c);

  Complex &operator = (const double& x);

  bool operator == (const Complex& c) const;

  bool operator == (const double& x) const;

  bool operator != (const Complex& c) const;

  Complex& operator += (const Complex& c);

  Complex& operator += (const double& x);

  Complex operator + (const Complex& c) const;

  Complex operator + (const double& x) const;

  Complex& operator -= (const Complex& c);

  Complex& operator -= (const double& x);

  Complex operator - (const Complex& c) const;

  Complex operator - (const double& x) const;

  Complex& operator *= (const Complex& c);

  Complex& operator *= (const double& x);

  Complex operator * (const Complex& c) const;

  Complex operator * (const double& x) const;

  Complex& operator /= (const Complex& c);

  Complex& operator /= (const double& x);

  Complex operator / (const Complex& c) const;

  Complex operator / (const double& x) const;

  friend Complex operator + (const double& x, const Complex& c);

  friend Complex operator - (const double& x, const Complex& c);

  friend Complex operator / (const double& x, const Complex& c);

  friend Complex operator * (const double& x, const Complex& c);

  friend std::istream &operator>>(std::istream& in, Complex& c);

  friend std::ostream &operator<<(std::ostream& out, const Complex& c);

  void polarForm() const;
};

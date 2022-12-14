#include "Complex.h"
#include <cmath>

Complex::Complex(): re(0), im(0)
{}

Complex::Complex(const double &r, const double &i): re(r), im(i)
{}


Complex& Complex::operator = (const Complex& c) = default;


Complex& Complex::operator = (const double& x)
{
  re = x;
  im = 0;

  return *this;
}

bool Complex::operator == (const Complex& c) const
{
  return ((re == c.re) && (im == c.im));
}

bool Complex::operator == (const double& x) const
{
  return ((re == x) && (im == 0));
}

bool Complex::operator != (const Complex& c) const
{
  return !(*this == c);
}

Complex& Complex::operator += (const Complex& c)
{
  re += c.re;
  im += c.im;

  return *this;
}

Complex& Complex::operator += (const double& x)
{
  re += x;

  return *this;
}

Complex Complex::operator + (const Complex& c) const
{
  Complex res = *this;
  res += c;

  return res;
}

Complex Complex::operator + (const double& x) const
{
  Complex res = *this;
  res += x;

  return res;
}

Complex operator + (const double& x, const Complex& c){
  Complex cNew = c + x;

  return cNew;
}

Complex& Complex::operator -= (const Complex& c)
{
  re -= c.re;
  im -= c.im;

  return *this;
}

Complex& Complex::operator -= (const double& x)
{
  re -= x;

  return *this;
}

Complex Complex::operator - (const Complex& c) const
{
  Complex res = *this;
  res -= c;

  return res;
}

Complex Complex::operator - (const double& x) const
{
  Complex res = *this;
  res -= x;
  return res;
}

Complex operator - (const double& x, const Complex& c)
{
  Complex cNew = c - x;

  return cNew;
}

Complex &Complex::operator*=(const Complex &c) {
  double r = re * c.re - im * c.im;
  double i = re * c.im + im * c.re;
  re = r;
  im = i;

  return *this;
}

Complex &Complex::operator*=(const double &x) {
  re *= x;
  im *= x;

  return *this;
}

Complex Complex::operator * (const Complex& c) const
{
  Complex res = *this;
  res *= c;

  return res;
}

Complex Complex::operator * (const double& x) const
{
  Complex res = *this;
  res *= x;

  return res;
}

Complex operator * (const double& x, const Complex& c)
{
  Complex res = c * x;

  return res;
}

Complex &Complex::operator/=(const Complex &c) {
  double r = c.re * c.re + c.im * c.im;
  re = (re * c.re + im * c.im) / r;
  im = (im * c.re - re * c.im) / r;

  return *this;
}

Complex &Complex::operator/=(const double &x) {
  re /= x;
  im /= x;

  return *this;
}


Complex Complex::operator / (const Complex& c) const
{
  Complex res = *this;
  res /= c;

  return res;
}

Complex Complex::operator / (const double& x) const
{
  Complex res = *this;
  res /= x;

  return res;
}

Complex operator / (const double& x, const Complex& c)
{
  double r = c.re * c.re + c.im * c.im;
  Complex res (x * c.re / r, (x * c.im) / r);

  return res;
}

std::ostream& operator << (std::ostream& out, const Complex& c)
{
  out<< c.re << " + i*" << c.im;

  return out;
}

std::istream& operator >> (std::istream& in, Complex& c)
{
  in>> c.re >> c.im;

  return in;
}

void Complex::polarForm() const {
  std::cout<<sqrt(re*re + im * im)<<" * e^(i*"<<(atan(im/re))<<")"<<std::endl;
}




#ifndef __COMPLEX__
#define __COMPLEX__

class complex
{
public:
  //pass by value, double only 4 byte, can do it
  complex(double r = 0, double i = 0)
      : re(r), im(i) //initialization list
  {}
  //不是带指针的类，不需要Big three，直接默认即可
  //讲+=设计成成员函数
  complex& operator += (const complex &);
  //没有改动成员变量data，所以一定要加const!!!
  double real () const { return re; }
  double imag () const { return im; }

private:
  double re, im;
  //考虑到__doapl要直接拿私有成员data，故将其声明为友元
  friend complex &__doapl(complex *, const complex &);
};

inline complex &
__doapl(complex *ths, const complex &r)
{
  ths->re += r.re;
  ths->im += r.im;
  return *ths;
}

inline complex &
complex::operator+=(const complex &r)
{
  return __doapl(this, r);
};

inline double real (const complex& x)
{
  return x.real ();
}

inline double imag (const complex& x)
{
  return x.imag ();
}

//local varibale must return by value cannot use return by reference
inline complex
operator + (const complex &x, const complex &y)
{
  //class name+ (), 直接创建临时对象，下一行即被释放
  return complex ( real (x) + real(y), imag (x) + imag(y));
};
inline complex
operator + (const complex& x, double y)
{
  return complex (real (x)+y, imag (x));
}
inline complex 
operator + (double x, const complex& y)
{
  return complex (x+real(y), imag (y));
}



#endif
#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex;
Complex& __doapl(Complex* lhs, const Complex& rhs);
Complex& __doami(Complex* lhs, const Complex& rhs);
Complex& __doaml(Complex* lhs, const Complex& rhs);

class Complex {
public:
    Complex(double r = 0, double i = 0) : re(r), im(i) { }
    Complex& operator += (const Complex&);
    Complex& operator -= (const Complex&);
    Complex& operator *= (const Complex&);
    double real() const { return re; }
    double imag() const { return im; }

private:
    double re, im;

    friend Complex& __doapl(Complex* lhs, const Complex& rhs);
    friend Complex& __doami(Complex* lhs, const Complex& rhs);
    friend Complex& __doaml(Complex* lhs, const Complex& rhs);
};


inline Complex& __doapl(Complex* lhs, const Complex& rhs) {
    lhs->re += rhs.re;
    lhs->im += rhs.im;
    return *lhs;
}

inline Complex& Complex::operator += (const Complex& rhs) {
    return __doapl(this, rhs);
}

inline Complex& __doami(Complex* lhs, const Complex& rhs) {
    lhs->re -= rhs.re;
    lhs->im -= rhs.im;
    return *lhs;
}

inline Complex& Complex::operator -= (const Complex& rhs) {
    return __doami(this, rhs);
}

inline Complex& __doaml(Complex* lhs, const Complex& rhs) {
    double res_re = (lhs->re) * (rhs.re) - (lhs->im) * (rhs.im);
    double res_im = (lhs->re) * (rhs.im) + (lhs->im) * (rhs.re);
    lhs->re = res_re;
    lhs->im = res_im;
    return *lhs;
}

inline Complex& Complex::operator *= (const Complex& rhs) {
    return __doaml(this, rhs);
}

inline double real(const Complex& c) {
    return c.real();
}

inline double imag(const Complex& c) {
    return c.imag();
}

inline Complex operator + (const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.real() + rhs.real(), lhs.imag() + rhs.imag());
}

inline Complex operator + (const Complex& lhs, double d) {
    return Complex(lhs.real() + d, lhs.imag());
}

inline Complex operator + (double d, const Complex& rhs) {
    return Complex(rhs.real() + d, rhs.imag());
}

inline Complex operator - (const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.real() - rhs.real(), lhs.imag() - rhs.imag());
}

inline Complex operator - (const Complex& lhs, double d) {
    return Complex(lhs.real() - d, lhs.imag());
}

inline Complex operator - (double d, const Complex& rhs) {
    return Complex(d - rhs.real(), -rhs.imag());
}

inline Complex operator * (const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.real() * rhs.real() - lhs.imag() * rhs.imag(),
                   lhs.real() * rhs.imag() + lhs.imag() * rhs.real());
}

inline Complex operator * (const Complex& lhs, double d) {
    return Complex(lhs.real() * d, lhs.imag() * d);
}

inline Complex operator * (double d, const Complex& rhs) {
    return Complex(rhs.real() * d, rhs.imag() * d);
}

inline Complex operator / (const Complex& lhs, double d) {
    return Complex(lhs.real() / d, lhs.imag() / d);
}

inline Complex operator + (const Complex& c) {
    return c;
}

inline Complex operator - (const Complex& c) {
    return Complex(-c.real(), -c.imag());
}

inline bool operator == (const Complex& lhs, const Complex& rhs) {
    return lhs.real() == rhs.real() && lhs.imag() == rhs.imag();
}

inline bool operator == (const Complex& lhs, double d) {
    return lhs.real() == d && lhs.imag() == 0;
}

inline bool operator == (double d, const Complex& rhs) {
    return rhs.real() == d && rhs.imag() == 0;
}

inline bool operator != (const Complex& lhs, const Complex& rhs) {
    return lhs.real() != rhs.real() || lhs.imag() != rhs.imag();
}

inline bool operator != (const Complex& lhs, double d) {
    return lhs.real() != d || lhs.imag() != 0;
}

inline bool operator != (double d, const Complex& rhs) {
    return rhs.real() != d || rhs.imag() != 0;
}

#include <cmath>

inline Complex polar(double r, double t) {
    return Complex(r * cos(t), r * sin(t));
}

inline Complex conj(const Complex& c) {
    return Complex(c.real(), -c.imag());
}

inline double norm(const Complex& c) {
    return c.real() * c.real() + c.imag() * c.imag();
}

#endif
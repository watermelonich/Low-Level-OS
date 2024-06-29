#ifndef CONVERSIONS_H
#define CONVERSIONS_H
const char* reverse(const char* str, char* buffer, int len);
const char* toString(int n, int base);
const char* kprintInt(int n);
bool StringsEqu(const char* s, const char* t);
int oct2bin(unsigned char *str, int size);
int hex2bin(unsigned char *str, int size);
#endif

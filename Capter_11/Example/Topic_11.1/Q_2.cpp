template <class X>
void swapargs (X &a, X &b)
{
X temp ;
temp = a;
a = b;
b= temp ;
}
template <class X>
int i; // this is an error
void swapargs (X &a, X &b)
{
X temp ;
temp = a;
a = b;
b= temp ;
}
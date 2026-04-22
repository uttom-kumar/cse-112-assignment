// Use typename
template <typename X> void swapargs (X &a, X &b)

{
X temp ;
temp = a;
a = b;
b= temp ;
}
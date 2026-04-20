# include <iostream>
using namespace std;
# define SIZE 100
template <class Qtype > class q_type
{
    Qtype queue [ SIZE ]; // holds the queue
    int head , tail ; // indices of head and tail
public :
q_type () { head = tail = 0; }
    void q( Qtype num ); // store
    Qtype deq (); // retrieve
};
// Put value on queue .
template <class Qtype > void q_type <Qtype >::q( Qtype num)
{
    if( tail +1== head || ( tail +1== SIZE && ! head ))
    {
        cout << " Queue is full .\n";
        return ;
    }
    tail ++;
    if( tail == SIZE )
        tail = 0; // cycle around
    queue [ tail ] = num;
}
// Remove value from queue .
template <class Qtype > Qtype q_type <Qtype >:: deq ()
{  if( head == tail )
{
    cout << " Queue is empty .\n";
    return 0; // or some other error indicator
}
    head ++;
    if( head == SIZE )
        head = 0; // cycle around
    return queue [ head ];
}
int main () {
    q_type <int > q1;
    q_type <char > q2;
    int i;
    for (i=1; i <=10; i++)
    {
        q1.q(i);
        q2.q(i -1+ 'A');
    }
    for (i=1; i <=10; i++)
    {
        cout << " Dequeue 1: " << q1.deq () << '\n';
        cout << " Dequeue 2: " << q2.deq () << '\n';
    }
    return 0;
}
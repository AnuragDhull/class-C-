class counter
{
    int c;
    public:
     counter(int a )
     {
        c=a;

     }
     counter(counter &ob)
     {
        cout<<"copy constructor invoked";
     }
     c=ob.c;

}
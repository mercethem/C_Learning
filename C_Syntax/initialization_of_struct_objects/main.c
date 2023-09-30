struct Data
{
    int x;
    double a[2];
    int y;
}k, l, g = {1, 2.4, 3.6, 5}; //equal to ===> struct Data g = {1, 2.4, 3.6, 5}

struct
{
    int x;
    double a[2];
    int y;
}t, p; //if you use like that so there is no struct tag, then you have to use just t and p!!!!
        //You can not create a new struct like struct Data because of that is just struct as result
        //here is no struct tag!
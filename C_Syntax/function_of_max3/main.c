//about max value with 3 value

int max3 (int a, int b, int c)
{
    if (a>b & a>c)
        return a;
    else if (b>a & b>c)
        return b;
    else
        return c;
}

int max3_ver2 (int a, int b, int c)
{
    int max = a;

    if (b>max)
        max = b;
    if (c>max)
        max = c;
    return max;
}


bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 3 || n == 2)
    { // 2,3 then prime num os ture
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false; // not prime, they are multiples of 2 and 3
    }

    // checking factors from 5 to sqrt(n)
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        { // if n divide by 5 or 7 then remove false
            return false;
        }
    }
    return true;
}
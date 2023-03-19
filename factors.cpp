ll factors(ll a) {
    ll x = 0;
    for (ll i = 2; i * i <= a; i++)
        while (a % i == 0) {
            a /= i;
            x++;
        }
    if (a > 1) x++;
    return x;
}

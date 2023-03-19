

    ROCK CLIMBING:
    for j = 1 to m do
    B(0, j) ← 0
    for i = 0 to n do
    B(i, 0) ← INF
    B(i, m + 1) ← INF

    for i = 1 to n do
        for j = 1 to m do
            B(i,j) ← C(i,j) + min{B(i - 1, j - 1) , B(i, j), B(i - 1, j + 1) }
//            B(i,j) ← C(i,j) + min{B(i - 1, j - 1) , B(i, j),( B(i - 1, j + 1) + C(i,j)/10) }
    // finding the cost of the least dangerous path
    cost ← INF
    for j = 1 to m do
        if (B(n, j) < cost) then
            cost ← B(n, j)
    return cost

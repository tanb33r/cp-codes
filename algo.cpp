

        // x[] holds the fractions of items
        // p[] holds the values of items
        Fractional-Knapsack (w[1..n], p[1..n], W)
        for i = 1 to n
            x[i] = 0
        ans = 0
        weight = 0
        for i = 1 to n
           if weight + w[i] ≤ W then
              x[i] = 1
              ans += x[i] * p[i]
              weight = weight + w[i]
           else
              x[i] = (W - weight) / w[i]
              ans += x[i] * p[i]
              weight = W
              break
        return ans



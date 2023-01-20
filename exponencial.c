double fatoracao(int n)
    {
        double w = 1;
        if(n == 0 || n == 1)
            {
                return 1;
            }
   
        for(int j = 1; j < n + 1; j++)
            {
                w = w * j;
            }
        return w;
    }

double ex(int n, int exp)
    {
        double w = n;
        if(exp == 0)
            {
                return 1;
            }
        for(int j = 1; j < exp; j++)
            {
                w = w * n;
            }
        return w;
    }

double exp_natural(int x, int n)
    {
        double e = 0;
        for(int j = 0; j < n + 1; j++)
            {
                {   
                    e += (ex(x, j))/(fatoracao(j));
                }
            }
        return e;
}
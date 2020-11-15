



double Exponent (int x){
    
    double result = 1;
    const double e = 2.7182;

    while (x>0){
        result *= e;
        x--;
    }
    return result;
}

double Power (double x, int y){
    
    double result = 1;
    while (y>0){
        result *= x;
        y--;
    }
    return result;

}
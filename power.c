



double Exponent (int x){
double result = 1;
    while (x>0){
        result *= 2.71828182846;
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
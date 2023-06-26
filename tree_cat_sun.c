#include <stdio.h>

//Synergy in Action

//1 
int main()
{
    //2 
    printf("Synergy in Action!\n");
    
    //3
    int a = 5;
    int b = 10;
    
    //4
    int c = a + b;
    
    //5
    printf("The sum of a and b is %d\n", c);
    
    //6
    int d = b - a;
    
    //7
    printf("The difference of b and a is %d\n", d);
    
    //8
    int e = a * b;
    
    //9
    printf("The product of a and b is %d\n", e);
    
    //10
    float f = (float)b / a;
    
    //11
    printf("The ratio of b and a is %.2f\n", f);
    
    //12
    int i;
    int g = 0;
    
    //13
    for (i = 0; i < b; i++) {
        g += a;
    }
    
    //14
    printf("The multiplication of a and b is %d\n", g);
    
    //15
    int h = g / b;
    
    //16
    printf("The division of g and b is %d\n", h);
    
    //17
    int j;
    int power = 1;
    
    //18
    for (j = 0; j < b; j++) {
        power *= a;
    }
    
    //19
    printf("The power of a raised to b is %d\n", power);
    
    //20
    int k;
    int sum = 0;
    
    //21
    for (k = 0; k < b; k++) {
        sum += k;
    }
    
    //22
    printf("The sum of numbers from 0 to b is %d\n", sum);
    
    //23
    int m;
    int product = 1;
    
    //24
    for (m = 1; m < b; m++) {
        product *= m;
    }
    
    //25
    printf("The product of numbers from 1 to b is %d\n", product);
    
    //26
    int n;
    int greatest = 0;
    
    //27
    for (n = 0; n < a; n++) {
        if (n > greatest) {
            greatest = n;
        }
    }
    
    //28
    printf("The greatest number from 0 to a is %d\n", greatest);
    
    //29
    int smallest = greatest;
    
    //30
    for (n = 0; n < a; n++) {
        if (n < smallest) {
            smallest = n;
        }
    }
    
    //31
    printf("The smallest number from 0 to a is %d\n", smallest);
    
    //32
    int o;
    int even;
    
    //33
    for (o = 0; o < b; o++) {
        if (o % 2 == 0) {
            even++;
        }
    }
    
    //34
    printf("The number of even numbers from 0 to b is %d\n", even);
    
    //35
    int p;
    int odd;
    
    //36
    for (p = 0; p < b; p++) {
        if (p % 2 != 0) {
            odd++;
        }
    }
    
    //37
    printf("The number of odd numbers from 0 to b is %d\n", odd);
    
    //38
    int q;
    int square;
    
    //39
    for (q = 0; q < a; q++) {
        square += q * q;
    }
    
    //40
    printf("The sum of squares from 0 to a is %d\n", square);
    
    //41
    int r;
    int cube;
    
    //42
    for (r = 0; r < a; r++) {
        cube += r * r * r;
    }
    
    //43
    printf("The sum of cubes from 0 to a is %d\n", cube);
    
    //44
    int s;
    int factorial = 1;
    
    //45
    for (s = 1; s <= b; s++) {
        factorial *= s;
    }
    
    //46
    printf("The factorial of b is %d\n", factorial);
    
    //47
    int t;
    int sum_even = 0;
    
    //48
    for (t = 0; t <= b; t++) {
        if (t % 2 == 0) {
            sum_even += t;
        }
    }
    
    //49
    printf("The sum of even numbers from 0 to b is %d\n", sum_even);
    
    //50
    int u;
    int sum_odd = 0;
    
    //51
    for (u = 0; u <= b; u++) {
        if (u % 2 != 0) {
            sum_odd += u;
        }
    }
    
    //52
    printf("The sum of odd numbers from 0 to b is %d\n", sum_odd);
    
    //53
    int v;
    int sum_square = 0;
    
    //54
    for (v = 0; v <= a; v++) {
        sum_square += v * v;
    }
    
    //55
    printf("The sum of squares from 0 to a is %d\n", sum_square);
    
    //56
    int w;
    int sum_cube = 0;
    
    //57
    for (w = 0; w <= a; w++) {
        sum_cube += w * w * w;
    }
    
    //58
    printf("The sum of cubes from 0 to a is %d\n", sum_cube);
    
    //59
    int x;
    int prod_even = 1;
    
    //60
    for (x = 0; x <= b; x++) {
        if (x % 2 == 0) {
            prod_even *= x;
        }
    }
    
    //61
    printf("The product of even numbers from 0 to b is %d\n", prod_even);
    
    //62
    int y;
    int prod_odd = 1;
    
    //63
    for (y = 1; y <= b; y++) {
        if (y % 2 != 0) {
            prod_odd *= y;
        }
    }
    
    //64
    printf("The product of odd numbers from 0 to b is %d\n", prod_odd);
    
    //65
    int z;
    int gcd = 1;
    int rem;
    
    //66
    for (z = 1; z <= b; z++) {
        rem = a % z;
        if (rem == 0) {
            gcd = z;
        }
    }
    
    //67
    printf("The greatest common divisor of a and b is %d\n", gcd);
    
    //68
    int ab;
    int lcm = b;
    
    //69
    for (ab = b - 1; ab >= a; ab--) {
        if ((b % ab == 0) && (a % ab == 0)) {
            lcm = (b * a) / ab;
            break;
        }
    }
    
    //70
    printf("The least common multiple of a and b is %d\n", lcm);
    
    //71
    int ac;
    int reverse = 0;
    
    //72
    for (ac = a; ac > 0; ac = ac / 10) {
        reverse = reverse * 10 + ac % 10;
    }
    
    //73
    printf("The reverse of a is %d\n", reverse);
    
    //74
    int ad;
    int palindrome = 0;
    
    //75
    for (ad = b; ad > 0; ad = ad / 10) {
        if (ad == reverse) {
            palindrome = 1;
        }
    }
    
    //76
    if (palindrome == 1) {
        printf("The number b is palindrome\n");
    }
    
    //77
    else {
        printf("The number b is not palindrome\n");
    }
    
    //78
    int ae;
    int sum_div = 0;
    
    //79
    for (ae = a; ae >= 1; ae--) {
        if (a % ae == 0) {
            sum_div += ae;
        }
    }
    
    //80
    printf("The sum of divisors of a is %d\n", sum_div);
    
    //81
    int af;
    int is_prime = 1;
    
    //82
    for (af = 2; af < b; af++) {
        if (b % af == 0) {
            is_prime = 0;
        }
    }
    
    //83
    if (is_prime == 1) {
        printf("The number b is prime\n");
    }
    
    //84
    else {
        printf("The number b is not prime\n");
    }
    
    //85
    int ag;
    int sum_prime = 0;
    
    //86
    for (ag = 2; ag <= b; ag++) {
        int prime_check = 1;
        for (ae = 2; ae < ag; ae++) {
            if (ag % ae == 0) {
                prime_check = 0;
            }
        }
        if (prime_check == 1) {
            sum_prime += ag;
        }
    }
    
    //87
    printf("The sum of prime numbers from 0 to b is %d\n", sum_prime);
    
    //88
    int ah;
    int armstrong = 0;
    
    //89
    for (ah = a; ah > 0; ah = ah / 10) {
        int digit = ah % 10;
        armstrong += digit * digit * digit;
    }
    
    //90
    if (armstrong == a) {
        printf("The number a is an Armstrong number\n");
    }
    
    //91
    else {
        printf("The number a is not an Armstrong number\n");
    }
    
    //92
    int ai;
    int sum_dig = 0;
    
    //93
    for (ai = b; ai > 0; ai = ai / 10) {
        int dig = ai % 10;
        sum_dig += dig;
    }
    
    //94
    printf("The sum of digits of b is %d\n", sum_dig);
    
    //95
    int aj;
    int rev_integer = 0;
    
    //96
    for (aj = b; aj != 0; aj /= 10) {
        int remainder = aj % 10;
        rev_integer = rev_integer * 10 + remainder;
    }
    
    //97
    printf("The reverse of b is %d\n", rev_integer);
    
    //98
    int ak;
    int prod_dig = 1;
    
    //99
    for (ak = a; ak > 0; ak = ak / 10) {
        int num = ak % 10;
        prod_dig *= num;
    }
    
    //100
    printf("The product of digits of a is %d\n", prod_dig);
    
    //101
    int al;
    int count_div = 0;
    
    //102
    for (al = 1; al <= b; al++) {
        if (b % al == 0) {
            count_div++;
        }
    }
    
    //103
    printf("The number of divisors of b is %d\n", count_div);
    
    //104
    int am;
    int root = 0;
    
    //105
    while (root * root < a) {
        root++;
    }
    
    //106
    printf("The square root of a is %d\n", root);
    
    //107
    int an;
    int cube_root = 0;
    
    //108
    while (cube_root * cube_root * cube_root < a) {
        cube_root++;
    }
    
    //109
    printf("The cube root of a is %d\n", cube_root);
    
    //110
    int ao;
    int armstrong_count = 0;
    
    //111
    for (ao = a; ao <= b; ao++) {
        int into_armstrong = 0;
        int copy = ao;
        
        //112
        while (copy > 0) {
            int dig = copy % 10;
            into_armstrong += dig * dig * dig;
            copy /= 10;
        }
        
        //113
        if (into_armstrong == ao) {
            armstrong_count++;
        }
    }
    
    //114
    printf("The number of Armstrong numbers between a and b is %d\n", armstrong_count);
    
    //115
    int ap;
    int count_prime = 0;
    
    //116
    for (ap = a; ap <= b; ap++) {
        int check_prime = 1;
        for (ae = 2; ae < ap; ae++) {
            if (ap % ae == 0) {
                check_prime = 0;
            }
        }
        
        //117
        if (check_prime == 1) {
            count_prime++;
        }
    }
    
    //118
    printf("The number of prime numbers between a and b is %d\n", count_prime);
    
    //119
    int aq;
    int perfect_count = 0;
    
    //120
    for (aq = a; aq <= b; aq++) {
        int sum_fac = 0;
        for (ae = 1; a
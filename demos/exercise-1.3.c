#Q - Modify the temperature conversion program to print a heading above the table.

#Code - #include <stdio.h>

int main(void) {
    printf("Fahr  Celsius\n");
    printf("----  -------\n");
    float celsius;
    int upper = 300;
    int lower = 0;
    int step = 20;

    float fahr = lower;
    while ( fahr <= upper ) {
        celsius = 5.0/9.0 * ( fahr - 32);
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

#Output - Fahr  Celsius
----  -------
  0 -17.8
 20  -6.7
 40   4.4
 60  15.6
 80  26.7
100  37.8
120  48.9
140  60.0
160  71.1
180  82.2
200  93.3
220 104.4
240 115.6
260 126.7
280 137.8
300 148.9

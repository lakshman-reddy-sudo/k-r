#Q - Experiment to find out what happens when printf's argument
string contains \c, where c is some character not listed above.

#A - #include <stdio.h>

int main(void) {
    printf("\c");
    return 0;
}

#Output - warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
    4 |     printf("\c");
      |             ^~

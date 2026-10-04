#include <stdio.h>
int main() {
int score = 85;
char grade;
grade = (score >= 90) ? 'A' : ((score >= 80) ? 'B' : 'C');
printf("Grade: %c\n", grade);
return 0;
}
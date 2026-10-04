#include <stdio.h>
int main() {
int score;
printf("Enter the score: ");
scanf("%d", &score);

if (score >= 90) {
    printf("Grade: A\n");
} 
else if (score >= 80) {
    printf("Grade: B\n");
} 
else {
    printf("Grade: Needs Improvement\n");
}
return 0;
}
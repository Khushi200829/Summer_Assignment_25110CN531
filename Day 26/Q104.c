#include <stdio.h>

int main() {
    int score = 0;
    char ans;

    printf("===== QUIZ APPLICATION =====\n\n");

    printf("1. What is the capital of India?\n");
    printf("a) Mumbai\nb) New Delhi\nc) Kolkata\nd) Chennai\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'b' || ans == 'B')
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("a) Python\nb) Java\nc) C\nd) HTML\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'c' || ans == 'C')
        score++;

    printf("\n3. Which symbol is used for comments in C (single line)?\n");
    printf("a) //\nb) /* */\nc) #\nd) %%\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'a' || ans == 'A')
        score++;

    printf("\n4. Which function is used to print output in C?\n");
    printf("a) scanf()\nb) print()\nc) printf()\nd) gets()\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'c' || ans == 'C')
        score++;

    printf("\n5. How many bits are there in a byte?\n");
    printf("a) 4\nb) 8\nc) 16\nd) 32\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'b' || ans == 'B')
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
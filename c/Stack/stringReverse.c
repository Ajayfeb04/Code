#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CharStack {
    char *arr;
    int top;
};

void initCharStack(struct CharStack *charStack, int size) {
    charStack->arr = (char *)malloc(size * sizeof(char));
    charStack->top = -1;
}

void push(struct CharStack *charStack, char ch) {
    charStack->top++;
    charStack->arr[charStack->top] = ch;
}

char pop(struct CharStack *charStack) {
    char poppedChar = charStack->arr[charStack->top];
    charStack->top--;
    return poppedChar;
}

char* reverseString(char *input) {
    int length = strlen(input);

    struct CharStack charStack;
    initCharStack(&charStack, length);

    // Push each character onto the stack
    for (int i = 0; i < length; i++) {
        push(&charStack, input[i]);
    }

    // Pop characters from the stack to form the reversed string
    char *reversedString = (char *)malloc((length + 1) * sizeof(char));
    int index = 0;
    while (charStack.top != -1) {
        reversedString[index++] = pop(&charStack);
    }
    reversedString[index] = '\0';

    return reversedString;
}

int main() {
    printf("Enter a string: ");
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // remove newline character

    char *reversed = reverseString(inputString);

    printf("Reversed string: %s\n", reversed);

    free(reversed);

    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct StringStack {
//     char **arr;
//     int top;
// };

// void initStringStack(struct StringStack *stringStack, int size) {
//     stringStack->arr = (char **)malloc(size * sizeof(char *));
//     stringStack->top = -1;
// }

// void push(struct StringStack *stringStack, char *word) {
//     stringStack->top++;
//     stringStack->arr[stringStack->top] = strdup(word);
// }

// void pop(struct StringStack *stringStack) {
//     free(stringStack->arr[stringStack->top]);
//     stringStack->top--;
// }

// void reverseSentence(char *s) {
//     int length = strlen(s);

//     struct StringStack stringStack;
//     initStringStack(&stringStack, length);

//     for (int i = 0; i < length; i++) {
//         char *word = (char *)malloc((length + 1) * sizeof(char));
//         int index = 0;
//         while (s[i] != ' ' && i < length) {
//             word[index++] = s[i];
//             i++;
//         }
//         word[index] = '\0';
//         push(&stringStack, word);
//     }

//     while (stringStack.top != -1) {
//         printf("%s ", stringStack.arr[stringStack.top]);
//         pop(&stringStack);
//     }

//     printf("\n");
// }

// int main() {
//     char s[] = "What are you talking?";
//     reverseSentence(s);
//     return 0;
// }

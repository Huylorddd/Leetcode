bool isValid(char* s) {
    char stack[strlen(s)];                                                            // initialize a stack. (recommended using length of an input string instead of a fixed length).
    int top = -1;                                                                     // this means a stack is empty.

    for (int i = 0; s[i] != '\0'; i++) {
        char current_char = s[i];

        if (current_char == '(' || current_char == '[' || current_char == '{'){
            stack[++top] = current_char;                                              // PUSH: we take the character into stack from bottom to top.
        }                                                                             // *Pay attention: we use [++top], increase the slot then assign the value.
        else {
            if (top == -1) return false;                                              

            char previous_char = stack[top--];                                        // POP: if the input char is 'close bracket' then we assign to the varible and remove the current stack value simultaneously.
                                                                                      // * [top--], make assignment then decrease.
            if (current_char == ')' && previous_char != '(' ||                        // >> Check the 'close' bracket whether it is the same type with the 'open'.
                current_char == ']' && previous_char != '[' ||
                current_char == '}' && previous_char != '{') return false;
        }
    }
    return top == -1;                                                                 // return when the stack is empty.
}

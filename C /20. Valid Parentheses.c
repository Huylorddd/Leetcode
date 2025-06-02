bool isValid(char* s) {
    char stack[strlen(s)];                                                            // initialize a stack. (recommended using length of an input string instead of a fixed length).
    int top = -1;                                                                     // this means a stack is empty.

    for (int i = 0; s[i] != '\0'; i++) {
        char current_char = s[i];

        if (current_char == '(' || current_char == '[' || current_char == '{'){       //
            stack[++top] = current_char;                                              // *PUSH: we ONLY take the 'open brackets' into stack from bottom to top.
        }                                                                             
        else {                                                                        
            if (top == -1) return false;                                              // if the 'close brackets' appears before 'open one' -> FALSE statement. E.g: [')'] instead of ['(',')'].                             
                                                                                      
            char previous_char = stack[top--];                                        // *POP: if the input char is 'close bracket' then we assign to the varible and remove the current stack value simultaneously.
                                                                                      
            if (current_char == ')' && previous_char != '(' ||                        // 
                current_char == ']' && previous_char != '[' ||                        // check the 'close bracket' whether it is the same type with the 'open' sequentially.
                current_char == '}' && previous_char != '{') return false;            //
        }
    }
    return top == -1;                                                                 // return when the stack is empty (nothing is wrong).
}

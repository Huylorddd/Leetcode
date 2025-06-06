int romanToInt(char* s) {
    int sum = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'I' && s[i+1] != '\0' && (s[i+1] == 'V' || s[i+1] == 'X')) {
            switch(s[i+1]) {
                case 'V': sum += 4; i++; break;
                case 'X': sum += 9; i++; break;
            }
        } else if (s[i] == 'X' && s[i+1] != '\0' && (s[i+1] == 'L' || s[i+1] == 'C')) {
            switch(s[i+1]) {
                case 'L': sum += 40; i++; break;
                case 'C': sum += 90; i++; break;
            }
        } else if (s[i] == 'C' && s[i+1] != '\0' && (s[i+1] == 'D' || s[i+1] == 'M')) {
            switch(s[i+1]) {
                case 'D': sum += 400; i++; break;
                case 'M': sum += 900; i++; break;
            }
        } else {
            switch(s[i]) {
                case 'I': sum++;break;
                case 'V': sum += 5;break;
                case 'X': sum += 10;break;
                case 'L': sum += 50;break;
                case 'C': sum += 100;break;
                case 'D': sum += 500;break;
                case 'M': sum += 1000;break;
            }
        }
    }
    return sum;
}

// First, you need to separate 3 special cases:
    // 1. five & ten (V & X): if one (I) stands before them we will minus one. For example: "IV" so the original algo is "1 + 5", that's why we minus it into "1 + (5-1)".
    // 2. fifty & one hundred (L & C): if ten (X) stands before them we will minus ten. For example: "XL" so the original algo is "10 + 50", that's why we minus it into "10 + (50-10)".
    // 3. five hundred & a thousand (D & M): if one (C) stands before them we will minus one. For example: "CD" so the original algo is "100 + 500", that's why we minus it into "100 + (500-100)".

// Second, "I", "X", "C" or (1, 10, 100) is used depend on the next character stands after it "V/X", "L/C", "D/M" (6 cases after all). p/s: 10 to 100 to 1000.

// Other cases are simple, we just plus their value in to the Total, if there's a case they automatically minus 1/10/100.

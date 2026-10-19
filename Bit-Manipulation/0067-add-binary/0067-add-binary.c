char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);

    int size = (lenA > lenB ? lenA : lenB) + 2;

    int i = lenA - 1;
    int j = lenB - 1;
    int carry = 0;
    int k = 0;

    char* result = malloc(size);

    while (i >= 0 || j >= 0 || carry != 0) {
        int bitA = 0;
        int bitB = 0;
        if (i >= 0)
            bitA = a[i--] - '0';
        if (j >= 0)
            bitB = b[j--] - '0';

        int sum = bitA + bitB + carry;
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    result[k] = '\0';

    for (int left = 0, right = k - 1; left < right; left++, right--) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;
    }

    return result;
}
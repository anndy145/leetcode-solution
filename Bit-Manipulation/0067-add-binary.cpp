class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";
	while (i >= 0 || j >= 0 || carry != 0) {
            int bitA = 0;
            int bitB = 0;

            if (i >= 0)
                bitA = a[i] - '0';
            if (j >= 0)
                bitB = b[j] - '0';

            int sum = bitA + bitB + carry;
            char bit = (sum % 2) + '0';

            result.insert(0, 1, bit);
            carry = sum / 2;
            i--;
            j--;
        }
        return result;
    }
};

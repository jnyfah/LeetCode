string addBinary(string a, string b) {
        string result = "";
        int ia = a.size() - 1;
        int ib = b.size() - 1;
        int sum = 0;
        while (ia >= 0 || ib >= 0) {
            int va = 0, vb = 0;
            if (ia >= 0) {
                va = a[ia] - '0'; ia --;
            }
            if (ib >= 0) {
                vb = b[ib] - '0'; ib --;
            }
            sum = sum + va + vb;
            // possible values of sum: 0 ~ 3
            result = (sum % 2 == 0 ? "0" : "1") + result;
            sum = sum / 2;
        }
        if (sum == 1) result = "1" + result;
        return result;
}

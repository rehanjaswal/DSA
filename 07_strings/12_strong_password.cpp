    #include <iostream>
    using namespace std;
    int main() {
        string s;
        cin >> s;
        int n = s.size();
        
        if (n != 10) {
            cout << "passcode must exactly consist of 10 characters"; // passcode length checker
            return 0; // return statement will be inside the if statement cuz if this n != 10 condition hits then the main function must stop immediately
        }

        int uppercase = 0, lowercase = 0, digit = 0, special = 0;  // initialise

        for (int i = 0; i < n; i ++) {    // check strength
            if (s[i] >= 'A' and s[i] <= 'Z') uppercase++;
            else if (s[i] >= 'a' and s[i] <= 'z') lowercase++;
            else if (s[i] >= '0' and s[i] <= '9') digit++;
            else special++; 
        }

        if (uppercase > 0 and lowercase > 0 and digit > 0 and special > 0) cout << "STRONG";
        else cout << "WEAK";

        return 0;
    }
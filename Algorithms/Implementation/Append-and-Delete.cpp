/*Code written by MAYANK PATHAK*/


#include <bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    int i = 0, s_len, t_len;

        s_len = s.length();
            t_len = t.length();

                if(k >= (s_len+t_len)) {
                        return "Yes";
                            }

                                while(i < s_len && i < t_len) {
                                        if(s[i] != t[i]) {
                                                    break;
                                                            }
                                                                    i++;
                                                                        }

                                                                            k = k - (s_len+t_len) + (2 * i);

                                                                                if(k < 0) {
                                                                                        return "No";
                                                                                            }else if (k % 2 == 0) {
                                                                                                    return "Yes";
                                                                                                        }

                                                                                                            return "No";
                                                                                                            }

                                                                                                            int main()
                                                                                                            {
                                                                                                                string s, t;
                                                                                                                    int k;
                                                                                                                        cin >> s;
                                                                                                                            cin >> t;
                                                                                                                                cin >> k;
                                                                                                                                    cout << appendAndDelete(s, t, k) << endl;
                                                                                                                                        return 0;
                                                                                                                                        }




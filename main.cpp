//#include <iostream>
//#include <string>
//using namespace std;
//
//string longestPalindrome(string s) {
//	int i,j,k, size=s.length();
//	string rev="", outString="";
//	if (size == 1) {
//		return s;
//	}
//	else {
//		for (i = 0; i <= size - 1; i++) {
//			for (k = 0; k <= i; k++) {
//				
//				for (j = 0; j < size - i; j++) {
//					rev += s[size - i - 1 - j + k];
//					outString += s[j+k];
//				}
//				if (rev == outString) {
//					return outString;
//				}
//				else {
//					outString = "";
//					rev = "";
//				}
//			}
//		}
//	}
//	return "";
//}
//
//int main() {
//	string word, out;
//	cout << "Enter any word:";
//	cin >> word;
//	out = longestPalindrome(word);
//	if (out == "") {
//		cout << "No palindrome found";
//	}
//	else {
//		cout << out;
//	}
//	return 0;
//}

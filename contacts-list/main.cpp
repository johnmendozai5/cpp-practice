#include <iostream>
#include <vector>
#include <string>
using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName) {
   for (unsigned int i = 0; i < nameVec.size(); ++i) {
      if (nameVec.at(i) == contactName) {
         return phoneNumberVec.at(i);
      }
   }
   return "None";
}

int main() {
   int n;
   cin >> n;

   vector<string> nameVec(n);
   vector<string> phoneNumberVec(n);

   for (int i = 0; i < n; ++i) {
      string pair;
      cin >> pair;                         
      int commaPos = pair.find(',');       
      nameVec.at(i) = pair.substr(0, commaPos);
      phoneNumberVec.at(i) = pair.substr(commaPos + 1);
   }

   string contactName;
   cin >> contactName;

   cout << GetPhoneNumber(nameVec, phoneNumberVec, contactName) << endl;

   return 0;
}
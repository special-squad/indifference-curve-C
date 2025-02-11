#include <string>
#include<iostream>
#include <cmath>

using namespace std;
int main(){
double price1,price2,budget,utility,final1,final2;
string name1,name2;
cout << "When it comes to goods, in the neoclassical (mainstream) school of economics you can model which goods to buy using indifference curve, which measures at what point you are indifferent between 2 goods." << endl;
cout << "Although making a whole curve is outside the scope of this , I can use budget to maximize utility at that budget between 2 goods." << endl;
cout << "So give the names of the two goods you wish to compare?" << endl;
cin >> name1 >> name2;
cout << "now give the prices (it's fine if the price is long for bitcoin transactions, just make sure both prices are in the same currency.)" << endl;
cin >> price1 >> price2;
cout << "We also need a total budget for these 2 goods" << endl;
cin >> budget;
cout << "How much do you value the first good relative to the second good?" << endl;
cin >> utility;
final1 = (utility * budget) / ((utility + 1) * price1);
final2 = budget / ((utility + 1) * price2);
cout << "After running the math, the ammount of " << name1 << " you should buy is " << final1 << " and " << final2 << " for " << name2 << "." << endl;
cout << "to model as an equation, it is modeled as (utility * ln("<< final1 <<")) + ln(" << final2 <<") = U = " << (utility * log(final1)) + log(final2) << " And then to make it a full curve with the eqution below" << endl;
cout << utility << " * ln(x) + ln(y) = " << (utility * log(final1)) + log(final2) << endl;
cout << "For the tangent budget line, model using " << budget/price2 << " - (" << price1 << " * x)/ " << price2;
cout << "To end off. I want to give 2 caviats, one is that the ultility of cardinal, which is not true in economics (it's mostly ordinal, no one values a good 1.2 times more), and you may end up with a long decimal, this is fine, just round in a real world application" << endl;
}

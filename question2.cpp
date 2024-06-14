// Enter cost of 3 items from the user (using float data type) -a  pencil,  apen and an eraser. You have to output the total cost of the items back to the user astheirbill.(Addon:Youcanalsotryadding18%GSTtaxtotheitemsinthebillasanadvancedproblem)

#include <iostream>
using namespace std;
int main () {
   float pencil, pen, eraser , bill;
   cin>>pencil;
   cin>>pen;
   cin>>eraser;

   bill = pencil + pen + eraser;
   cout<<"the total bill is"<<bill<<endl;
   cout<<"and with 18% GST"<<(bill + (0.18 * bill));

   }

#include <iostream>
using namespace std;

class dmartbill
{

     int mno;
     string name, siteam[10];
     int rate, qty, amt, bill = 0, billamt = 0;
     float dis, gst, netbill;

public:
     void customer() // customer info
     {
          // int mno;
          cout << "Enter Your name : ";
          cin >> name;
          cout << "Enter Your Mobile No. : ";
          cin >> mno;
     }

     void nameprint() // customer details print
     {
          cout << "\t    * DMART BILL *"
               << "\n";
          cout << "-----------------------------------------------------\n";
          cout << "\t"
               << "CUSTOMER NAME: " << name
               << "\n";
          cout << "\t"
               << "MOBILE NUMBER: " << mno;
          cout << "\n";
     }

     void iteamlist() // iteam list
     {
          cout << "\t\t     Iteam"
               << "\t\t     Rate";
          cout << "\n"
               << "-----------------------------------------------------\n";
          cout << "1."
               << "Henko Stain Champoxg Powder"
               << "\t\t     625/-"
               << "\n";
          cout << "2."
               << "Colgate Visible White TP"
               << "\t\t     161/-"
               << "\n";
          cout << "3."
               << "Jo Lime Soap"
               << "\t\t\t\t      70/-"
               << "\n";
          cout << "4."
               << "Surf Excel Quick Wash"
               << "\t\t\t     165/-"
               << "\n";
          cout << "5."
               << "Blanket Polar Blue [Mst]"
               << "\t\t     199/-"
               << "\n";
          cout << "6."
               << "Parachute Pure Coconut Oil [600 ml]"
               << "\t     376/-"
               << "\n";
          cout << "7."
               << "Milton Pro Cook Kitchen Jewel Set of 5"
               << "    1599/-"
               << "\n";
          cout << "8."
               << "Nescafe Gold Instant Coffee Powder"
               << "\t     420/-"
               << "\n";
          cout << "9."
               << "L'Oreal Paris Shampoo & Conditioner"
               << "\t     889/-"
               << "\n";
          cout << "10."
               << "Xiran 6 Fridge Storage Boxes"
               << "\t\t     449/-"
               << "\n";
     }

     int siteam1()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[0] = "Henko Stain Champoxg Powder = 625";
          return bill = bill + qty * 625;
     }
     int stream2()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[1] = "Colgate Visible White TP = 161";
          return bill = bill + qty * 161;
     }
     int stream3()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[2] = "Jo Lime Soap = 70";
          return bill = bill + qty * 70;
     }
     int stream4()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[3] = "Surf Excel Quick Wash = 165";
          return bill = bill + qty * 165;
     }
     int stream5()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[4] = "Blanket Polar Blue [Mst] = 199";
          return bill = bill + qty * 199;
     }
     int stream6()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[5] = "Parachute Pure Coconut Oil [600 ml] = 376";
          return bill = bill + qty * 376;
     }
     int stream7()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[6] = "Milton Pro Cook Kitchen Jewel Set of 5 = 1599";
          return bill = bill + qty * 1599;
     }
     int stream8()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[7] = "Nescafe Gold Instant Coffee Powder = 420";
          return bill = bill + qty * 420;
     }
     int stream9()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[8] = "L'Oreal Paris Shampoo & Conditioner = 889";
          return bill = bill + qty * 889;
     }
     int stream10()
     {
          cout << "\n Enter a Qunatity :";
          cin >> qty;
          siteam[9] = "Xiran 6 Fridge Storage Boxes = 449";
          return bill = bill + qty * 449;
     }

     void iteamselect() // switch-case
     {
          dmartbill d1;
          int i, siteam = 0;
          for (i = 0; i <= 4; i++)
          {
               cout << "Enter a Number of Select Iteam : ";
               cin >> siteam;
               // cout << "Enter Qty Of Iteam : ";
               // cin >> qty;

               switch (siteam)
               {
               case 0:
                    break;
               case 1:
                    d1.siteam1();
                    break;
               case 2:
                    cout << "Colgate Visible White TP"
                         << "\n";
                    break;
               case 3:
                    cout << "Jo Lime Soap"
                         << "\n";
                    break;
               case 4:
                    cout << "Surf Excel Quick Wash"
                         << "\n";
                    break;
               case 5:
                    cout << "Blanket Polar Blue [Mst]"
                         << "\n";
                    break;
               default:
                    cout << "You Enter Wrong Value."
                         << "\n";
                    break;
               }
               if (siteam == 0)
               {
                    break;
               }
          }
     }

     int calculator() // bill total - gst - netbill
     {

          billamt = billamt + bill;
          // cout << "Totel is : " << billamt;
          // cout << "\n";
          gst = (billamt * 18) / 100;
          // cout << "Gst is : " << gst;
          netbill = billamt + gst;
          // cout << "NetBill is : " << netbill;

          return billamt, gst, netbill;
     }
     void Show_Net_Bill()
     {
          Show_bill_Items();
          cout << "\n TOTAL ORDER PRICE  : " << billamt << endl;
          cout << "\n----------------------------------------------------" << endl;
          cout << "\n GST                : " << gst;
          cout << "\n----------------------------------------------------" << endl;
          cout << "\n TOTAL PAY BIL      : " << netbill;
          cout << "\n----------------------------------------------------" << endl;
          cout << "\n\n****THANK FOR YOUR VISIT****" << endl;
     }
     void Show_bill_Items()
     {

          for (int i = 0; i < 5; i++)
          {
               if (!siteam[i].empty())
               {
                    cout << "\n\t " << i + 1 << ":" << siteam[i] << endl;
               }
          }
     }
};

int main()
{
     dmartbill d1;
     d1.iteamlist();
     cout << "-----------------------------------------------------\n";
     // d1.iteamselect();
     cout << "-----------------------------------------------------\n";
     d1.calculator();
     cout << "-----------------------------------------------------\n";
     // d1.customer();
     cout << "\n\n";
     cout << "-----------------------------------------------------\n";
     // d1.nameprint();
     cout << "-----------------------------------------------------\n";
     d1.Show_Net_Bill();
     cout << "-----------------------------------------------------\n";
     return 0;
}
#include <iostream>
// #include <string.h>
using namespace std;

class dmartbill
{

     int mno;
     string phoneno, name, siteam[10];
     int rate, qty, amt, bill = 0, billamt = 0;
     float dis, gst, netbill;

public:
     void customer() // customer info
     {

          cout << "Enter Your name : ";
          cin >> name;
          do
          {
               cout << "Enter Your Mobile No. : ";
               cin >> phoneno;
               if (phoneno.size() != 10)
               {
                    cout << "Wrong Number Please Try Again!" << endl;
               }

          } while (phoneno.size() != 10);
     }

     void nameprint() // customer details print
     {

          cout << "                      TAX INVOICE                      "
               << "\n";
          cout << "-----------------------------------------------------\n";
          cout << "\t\t"
               << "CUSTOMER NAME: " << name
               << "\n";
          cout << "\t\t"
               << "MOBILE NUMBER: " << phoneno;
          cout << "\n";
     }

     void iteamlist() // iteam list
     {
          cout << "<<<============== WELCOME IN D-MART ==============>>>\n"
               << "              Avenue E-Commerce Limited              \n"
               << "-----------------------------------------------------\n";
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
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[0] = "Henko Stain Champoxg Powder           625";
          return bill = bill + qty * 625;
     }
     int stream2()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[1] = "Colgate Visible White TP              161";
          return bill = bill + qty * 161;
     }
     int stream3()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[2] = "Jo Lime Soap                           70";
          return bill = bill + qty * 70;
     }
     int stream4()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[3] = "Surf Excel Quick Wash                 165";
          return bill = bill + qty * 165;
     }
     int stream5()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[4] = "Blanket Polar Blue [Mst]              199";
          return bill = bill + qty * 199;
     }
     int stream6()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[5] = "Parachute Pure Coconut Oil [600 ml]   376";
          return bill = bill + qty * 376;
     }
     int stream7()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[6] = "Milton Cook Kitchen Jewel Set of 5   1599";
          return bill = bill + qty * 1599;
     }
     int stream8()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[7] = "Nescafe Gold Instant Coffee Powder    420";
          return bill = bill + qty * 420;
     }
     int stream9()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[8] = "L'Oreal Paris Shampoo & Conditioner   889";
          return bill = bill + qty * 889;
     }
     int stream10()
     {
          cout << "Enter a Qunatity :";
          cin >> qty;
          siteam[9] = "Xiran 6 Fridge Storage Boxes         449";
          return bill = bill + qty * 449;
     }

     int calculator() // bill total - gst - netbill
     {

          billamt = billamt + bill;

          gst = (billamt * 18) / 100;

          netbill = billamt + gst;

          return billamt, gst, netbill;
     }

     void Show_Net_Bill()
     {
          Show_bill_Items();
          cout << "-----------------------------------------------------\n\n\n";
          cout << "-----------------------------------------------------\n";
          cout << "|"
               << "   RATE TOTAL\t\tGst\t\tTOTAL AMT   "
               << "|"
               << "\n";
          cout << "-----------------------------------------------------\n";
          cout << "\t" << billamt << "\t\t" << gst << "\t\t  " << netbill;
          cout << "\n-----------------------------------------------------\n";
          cout << "\n\n\t   ****  THANK FOR YOUR VISIT  ****" << endl;
     }

     void Show_bill_Items()
     {
          cout << "HSN\t\tParticulars\t\tRate   Qty"
               << "\n";
          cout << "-----------------------------------------------------\n";
          for (int i = 0; i < 10; i++)
          {
               if (!siteam[i].empty())
               {
                    cout << i + 1 << "  " << siteam[i] << "   " << qty << endl;
               }
          }
     }
};

int main()
{
     dmartbill d1;
     d1.iteamlist();
     cout << "-----------------------------------------------------\n";
     int i, siteam = 0;
     for (i = 0; i <= 15; i++)
     {
          cout << "Enter a Number of Select Iteam : ";
          cin >> siteam;

          switch (siteam)
          {
          case 0:
               break;
          case 1:
               d1.siteam1();
               break;
          case 2:
               d1.stream2();
               break;
          case 3:
               d1.stream3();
               break;
          case 4:
               d1.stream4();
               break;
          case 5:
               d1.stream5();
               break;
          case 6:
               d1.stream6();
               break;
          case 7:
               d1.stream7();
               break;
          case 8:
               d1.stream8();
               break;
          case 9:
               d1.stream9();
               break;
          case 10:
               d1.stream10();
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
     cout << "-----------------------------------------------------\n";
     d1.calculator();
     // d1.customer();
     cout << "\n\n\n";
     // d1.nameprint();
     cout << "-----------------------------------------------------\n";
     d1.Show_Net_Bill();
     cout << "-----------------------------------------------------\n";
     return 0;
}
#include<bits/stdc++.h>
using namespace std;
class LibararyManagment
{
public:
    char name[20];
    int IU;
    char branch[20];
    LibararyManagment()                     // create constructor
    { 
        cout << "enter your name:-";
        cin >> name;
        cout << "enter your IU:-";
        cin >> IU;
        cout << "enter your branch:-";
        cin >> branch;
    }
    void welcome()
    {
        cout << "\nwelcome " << name << " in our library:" << endl;
    }
};

class user            
{ 
public:
    char BookField[20];
    char BookName[20];
    string Bname;

    void gate_data()
    {
        cout << "which field book you want to read(science, commarce, history, stock-market, sports):"<<endl;
        cin >> BookField;
    }


    
    void getbook_name(){
        string science = "science";
        string commarce= "commarce";
        string history= "history";
        string stockmarket="stock-market";
        string  sports= "sports";




        if (BookField ==science)
        {
            cout << "cosmos, silent spring, Neno-Technology, Newton, quantum-physics, Organic chemistary, Digital electronics"<< endl;
            cout << "enter book name:";
            cin >> Bname;
        }
        else if (BookField ==commarce)
        {
            cout << "economic, account, statistic, secretarial practice, banking, business studies"<< endl;
            cout << "enter book name:";
            cin >> Bname;
        }
        else if (BookField ==history)
        {
            cout << "Mahabharat, Ramayana, The Discovery of India, The last Mugal, India after Gahdhi, The history of The Ancient world, Bhagvat-Gita" << endl;;
            cout << "enter book name:";
            cin >> Bname;
        }
        else if (BookField ==stockmarket)
        {
            cout << "The Intelligant investor, Market Wizard, Option Trading" << endl;;
            cout << "enter book name:";
            cin >> Bname;
        }
        else if (BookField ==sports)
        {
            cout << "Playing it my Way, The Small Wonder, Ace against Odds, sports quiz book"<< endl;
            cout << "enter book name:";
            cin >> Bname;
        }
        else
        {
            cout << "NO data found";
        }
    }
};

class status:public user, public LibararyManagment      // multipal inheretance
{ 
    protected:
    string NenoTechnology = "Neno-Technology";
    string Newton= "Newton";
    string  quantumphysics= "quantum-physics";
    string  Organicchemistary= "Organic chemistary";
    string  Digitalelectronics= "Digital electronics";
    string  economic= "economic";
    string  account= "account";
    string  statistic= "statistic";
    string  secretarialpractice= "secretarial practice";
    string  banking= "banking";
    string  businessstudies= "business studies";
    string  Mahabharat= "Mahabharat";
    string  Ramayana= "Ramayana";
    string  tdoi= "The Discovery of India";
    string  a= "The last Mugal";
    string  b= "India after Gahdhi";
    string  c= "The history of The Ancient world";
    string  d= "Bhagvat-Gita";
    string  e= "he Intelligant investor";
    string  f= "laying it my Way";
    string  g= "ce against Odd";

    public:
    void Checkstatus()
    {
        if (Bname == Newton) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname ==NenoTechnology ) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == quantumphysics) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == Organicchemistary) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == Digitalelectronics) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == Digitalelectronics) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == economic) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == account) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == statistic) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == secretarialpractice) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == banking) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname ==businessstudies ) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == Mahabharat) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == Ramayana) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == tdoi) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == a) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == b) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == c) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == d) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == e) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == f) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else if (Bname == g) //or NenoTechnology or quantumphysics or Organicchemistary or Digitalelectronics or economic or account or statistic or secretarialpractice or banking or businessstudies or Mahabharat or Ramayana or tdoi or a or b or c or d or e or f or g)
            
        {
            cout << "book available";
        }
        else
        {
            cout << "sorry! Book is noy available." << endl;
        }
    }
};





int main()
{


status s;
s.welcome();
s.gate_data();
s.getbook_name();
s.Checkstatus();

    return 0;
}
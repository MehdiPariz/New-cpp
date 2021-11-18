#include <iostream>

using namespace std;
class kala{
public:
    string name;
    int gheymat;
    void showInfos(string name1){
        cout<<"Coding by name is mehdi pariz.."<<name1<<endl;
    }
    void telName();
};
void kala::telName() {
    cout<<"\n\nTanke you for injoing.."<<endl;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    r:
    q:
    x:
    v:
    kala kala1;
    kala kala2;
    kala kala3;
    kala kala4;
    kala kala5;
    int tin=0;
    int temp=0;
    int a;
    int p;
    int sum = 0;
    char o;
    char u;
    char m;
    char l;
    char w;
    char t;
    char k;
    char hip;
    kala1.name = "panir";
    kala1.gheymat = 8700;
    kala2.name = "mast";
    kala2.gheymat = 11000;
    kala3.name = "asal";
    kala3.gheymat = 55000;
    kala4.name = "shir";
    kala4.gheymat = 4500;
    kala1.showInfos("");
    cout << "\n\nLISTE KALAHAIE MOJOD\n*********************\n\n";
    cout << "1. Kalaye mojod : " << kala1.name << "\tGeymate kala : " << kala1.gheymat << endl;
    cout << "2. Kalaye mojod : " << kala2.name << "\tGeymate kala : " << kala2.gheymat << endl;
    cout << "3. Kalaye mojod : " << kala3.name << "\tGeymate kala : " << kala3.gheymat << endl;
    cout << "4. Kalaye mojod : " << kala4.name << "\tGeymate kala : " << kala4.gheymat << endl;
    cout << "Lotfan az beine adade 1 ta 4 entekhaab nemaed : ";
    cin >> a;
    switch (a) {
        case 1:
            cout << kala1.name << "   " << kala1.gheymat << endl;
            break;
        case 2:
            cout << kala2.name << "   " << kala2.gheymat << endl;
            break;
        case 3:
            cout << kala3.name << "   " << kala3.gheymat << endl;
            break;
        case 4:
            cout << kala4.name << "   " << kala4.gheymat << endl;
            break;
        default:
            cout << " ERROR";
    }
    s:
    if (a == 1) {

        cout << "Lotfan tedede panir ra vared nemaead : ";
        cin >> p;
        for (int i = 0; i < p; ++i) {
            cout << i + 1 << ". " << kala1.name << "   " << kala1.gheymat << endl;
            sum = sum + kala1.gheymat;
        }
        cout << "Geymate kol : " << sum << endl;
        cout << "Mikhahid gaheimate panir ra tekrar konid(y/n) : " << endl;
        cin >> u;
        if (u=='y')
            goto s;
        cout << "Mikhahid be safhe asli bazgardid(y/n) : " << endl;
        cin>>m;
        if (m=='y'){
            goto r;
        }
        temp=temp+sum;
        cout<<"Gheimate kole kalaha : "<<temp;
        tin=tin+temp;
        cout<<"\n\nJame kole gheimate kalaha : "<<tin;
    }
    f:
        if (a==2){
        int c;
        cout<<"Lotfan tedede mast ra vared nemaead : ";
        cin>>c;
        for (int i = 0; i < c; ++i) {
            cout<<i+1<<". "<<kala2.name<<"   "<<kala2.gheymat<<endl;
            sum=sum+kala2.gheymat;
        }
        cout<<"Geymate kol : "<<sum<<endl;
        cout << "Mikhahid edame dahid : " << endl;
        cin>>o;
        if (o=='y')
            goto f;
        cout << "Mikhahid edame dahid : " << endl;
        cin>>l;
        if (l=='y')
            goto q;
    } z:
        if(a==3){
        int j;
        cout<<"Lotfan tedede asal ra vared nemaead : ";
        cin>>j;
        for (int i = 0; i < j; ++i) {
            cout<<i+1<<". "<<kala3.name<<"   "<<kala3.gheymat<<endl;
            sum=sum+kala3.gheymat;
        }
        cout<<"Geymate kol : "<<sum<<endl;
        cout << "Mikhahid edame dahid : " << endl;
        cin>>w;
        if (w=='y')
            goto z;
        cout << "Mikhahid edame dahid : " << endl;
        cin>>t;
        if (t=='y')
            goto x;
    } j:
        if(a==4) {
            int d;
            cout << "Lotfan tedede shir ra vared nemaead : ";
            cin >> d;
            for (int i = 0; i < d; ++i) {
                cout << i + 1 << ". " << kala4.name << "   " << kala4.gheymat << endl;
                sum = sum + kala4.gheymat;
            }
            cout << "Geymate kol : " << sum << endl;
            cout << "Mikhahid edame dahid : " << endl;
            cin>>k;
            if (k=='y')
                goto j;
            cout << "Mikhahid edame dahid : " << endl;
            cin>>hip;
            if (hip=='y')
                goto v;
        }
 /*
    cout<<"Name kala ra vered nemead : ";
    getline(cin,kala5.name);
    cout<<"Geymate kala ra vered nemead : ";
    cin>>kala5.gheymat;
    cout<<"Name kala : "<<kala5.name<<"\t"<<"Geymate kala : "<<kala5.gheymat<<endl;
   */
    kala1.telName();

    return 0;
}
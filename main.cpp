#include <iostream>

using namespace std;
class kala{
public:
    string name;
    int gheymat;
    void showInfos(string name1){
        cout<<"\t\t\t\t\t\t\t\t\t\tMehdi Pariz"<<name1<<endl;
    }
    void telName();
};
void kala::telName() {
    cout<<"\n\nTanke you"<<endl;
}
int main() {
    std::cout << "\t\t\t\t\t\t\t\t\tWeb and Software Developer" << std::endl;
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
    kala1.name = "T-shirts";
    kala1.gheymat = 8700;
    kala2.name = "Men's shoes";
    kala2.gheymat = 11000;
    kala3.name = "Women's shoes";
    kala3.gheymat = 55000;
    kala4.name = "Women's bags";
    kala4.gheymat = 4500;
    kala1.showInfos("");
    cout << "\n\nList of available products\n*********************\n\n";
    cout << "1. Product available : " << kala1.name << "\tPrice : " << kala1.gheymat << endl;
    cout << "2. Product available : " << kala2.name << "\tPrice : " << kala2.gheymat << endl;
    cout << "3. Product available : " << kala3.name << "\tPrice : " << kala3.gheymat << endl;
    cout << "4. Product available : " << kala4.name << "\tPrice : " << kala4.gheymat << endl;
    cout << "Please choose from 1 to 4 : ";
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
            cout << " The selected number is not correct. Please choose a number from 1 to 4";
    }
    s:
    if (a == 1) {

        cout << "Please select the number of T-shirts : ";
        cin >> p;
        for (int i = 0; i < p; ++i) {
            cout << i + 1 << ". " << kala1.name << "   " << kala1.gheymat << endl;
            sum = sum + kala1.gheymat;
        }
        cout << "Total price : " << sum << endl;
        cout << "Do you want to continue calculating the t-shirt?(yes/no) : " << endl;
        cin >> u;
        if (u=='y')
            goto s;
        cout << "Do you want to return to the main page?(yes/no) : " << endl;
        cin>>m;
        if (m=='y'){
            goto r;
        }
        temp=temp+sum;
        cout<<"Total price of products : "<<temp;
        tin=tin+temp;
        cout<<"\n\nTotal price of all products : "<<tin;
    }
    f:
        if (a==2){
        int c;
        cout<<"Please select the number of men's shoes : ";
        cin>>c;
        for (int i = 0; i < c; ++i) {
            cout<<i+1<<". "<<kala2.name<<"   "<<kala2.gheymat<<endl;
            sum=sum+kala2.gheymat;
        }
        cout<<"Total price : "<<sum<<endl;
        cout << "Do you want to continue calculating the price of men's shoes?(yes/no) : " << endl;
        cin>>o;
        if (o=='y')
            goto f;
       cout << "Do you want to return to the main page?(yes/no) : " << endl;
        cin>>l;
        if (l=='y'){
            goto q;
             }
        temp=temp+sum;
        cout<<"Total price of products : "<<temp;
        tin=tin+temp;
        cout<<"\n\nTotal price of all products : "<<tin;
    
    } z:
        if(a==3){
        int j;
        cout<<"Please select the number of women's shoes : ";
        cin>>j;
        for (int i = 0; i < j; ++i) {
            cout<<i+1<<". "<<kala3.name<<"   "<<kala3.gheymat<<endl;
            sum=sum+kala3.gheymat;
        }
        cout<<"Total price : "<<sum<<endl;
        cout << "Do you want to continue calculating the price of women's shoes?(yes/no) : " << endl;
        cin>>w;
        if (w=='y')
            goto z;
        cout << "Do you want to return to the main page?(yes/no) : " << endl;
        cin>>t;
        if (t=='y'){
           goto x;
		}
		    temp=temp+sum;
        cout<<"Total price of products : "<<temp;
        tin=tin+temp;
        cout<<"\n\nTotal price of all products : "<<tin;
    
    } j:
        if(a==4) {
            int d;
            cout << "Please select the number of women's bags : ";
            cin >> d;
            for (int i = 0; i < d; ++i) {
                cout << i + 1 << ". " << kala4.name << "   " << kala4.gheymat << endl;
                sum = sum + kala4.gheymat;
            }
            cout << "Total price : " << sum << endl;
            cout << "Do you want to continue calculating the price of women's bags?(yes/no) : " << endl;
            cin>>k;
            if (k=='y')
                goto j;
            cout << "Do you want to return to the main page?(yes/no) : " << endl;
            cin>>hip;
            if (hip=='y'){
                goto v;
			}
			  temp=temp+sum;
        cout<<"Total price of products : "<<temp;
        tin=tin+temp;
        cout<<"\n\nTotal price of all products : "<<tin;
        }

    kala1.telName();

    return 0;
}

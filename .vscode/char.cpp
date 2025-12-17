//int arr[10] = { 1,2,3,4,5};
char arr[10]  ;
// store  1 extra for null container
#include<iostream>
using namespace std;
#include<cstring>
int main(){


   // char na[5];
   // for(int i =0; i<5;i++){
   //     cin>>na[i];
   // }
   // cout<<na<<endl;
  // char nam[7];
 //  cin>>nam;
 //   cout<<nam;
 //   cin>>nam;
 //   cout<<nam;
   // char name[] = "rahul";
   // cout<<name<<endl;
   // for(int i=0; name[i]!='\0';i++){
   //     cout<<name[i]<<" ";
   // }
   // 
  // char str[100];
  // cin.getline(str,100);
//
  // cout<<str;
  // 
//  int count =0;
//   char str[100];
//   cin.getline(str,100);
//   for(int i =0; str[i]!=0; i++){
//    if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'){
//        count = count + 1;
//    }
//   }
//   if( count >=5)
//   cout<<count;
//int n;
//char stra[] ="name";
//n = strlen(stra);
//cout<<n<<endl;
//for(int i =0;i<n;i++){
//
//
//tolower(stra[i]);
//cout<<stra[i];
//toUpper(stra[i]);
//cout<<stra[i];}
//cout<<stra<<endl;
//
//
//for(int i =n-1; i>=0; i--){
//cout<<stra[i];
//}
//stringg class using string and string using character is known as character array
//char f_name[20];
//charl_name[20];
//char full_name[50];
//cout<<"enter your first name: ";
//cin>>f_name;
//cout<<"enter your first name ";
//cin>>l_name;
//cout<<"hi"<<f_name<<" !your first name ahs"<<strlen(f_name)<<"characters."<<endl<<"And your last name has "
//<<strlen(l_name)<<" characters. "<<endl;
//strcpy(full_name, f_name);
//strcat(full_name," ");
//strcat(full_name,l_name);
//cout<<"your full name is : "<<full_name<<endl;
//if((strcmp(f_name,l_name))==o)
//cout<<"both strings are equal ."
//else
////int string we use getline only for output

//
//string satyam;
//getline(cin,satyam);
//cout<<"heay; " <<satyam<<endl;

//string newe(satyam);
//cout<<newe<<endl;
//string satu(7,'s');
//cout<<satu<<endl;
//string str1=("hello");
//string stsdr{str1,3};
//string strlk={"oerknoe",5};
//cout<<str1<<stsdr<<strlk<<endl;
//cout<<str1.at(8);//display character at th index;
//cout<<str1(8)<<endl;// display character at index 6


//string str = {"welcome"};
//for(char si:str){
//  cout<<si;
//}
//string str1 = "welcome";
//string str2 = "home";
//cout<<str1<<str2<<endl;
//cout<<str1.append(str2)<<endl;
//cout<<str1+" "+str2+" "+"joy"<<endl;
//cout<<"length of str1: "<<str1.length();



//string s = "hello world";
//cout<<"original string: "<<s<<endl;
////2.find
//int pos = s.find ("world");
//cout<<" find (world)position: "<<pos<<endl;
////3find
//cout<<"rfind(I) Position: "<<s.rfind("l")<<endl;
//s.append(" !!!");
//
//cout<<" after append(): "<<s<<endl;
////5insert
//s.insert(6,"Beautiful ");
//cout<<"After insert(): "<<s<<endl;
////6.erase()
//s.erase(6,10);
//cout<<"after erase(): "<<s<<endl;
//// 7 replace
//s.replace(6,5,"Universe ");
//cout<< " after replace() "<<s<<endl;
////8.compare()
string s = "ojwwp";
string s2 = "hello Universe  !!!";
if((s.compare(s2))==0){
cout<<"Strings are Not equal"<<endl;} 
////9substr()
//string sub = s.substr(6,8);
//cout<<"stbstring using suvstr "<<sub<<endl;
////10.length()
//string suyf = "slkjfowi323i4";
//cout<<"length of string "<<suyf.length()<<endl;
//cout<<"Size of string: "<<suyf.size()<<endl;
////11.
//cout<<"charachter at index 1 using at(): " <<s.at(1)<<endl;
//cout<<"charachter at index 2 using array index: "<<s[2]<<endl;
////12
//const char* cstyle = s.c_str();
//cout<<"C-style String using c_str(): "<<cstyle<<endl;

//string  newa;
//getline(cin,newa);
//cout<<newa.substr(1,2);
return 0;

}
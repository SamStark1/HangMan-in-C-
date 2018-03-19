
#include<iostream>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using  namespace std;
//password element
char ch;
FILE *fp;
char file[20],New[20];
//string get_pass,old_password,new_password,confirm_password;
//game element and function
int loop=1,stop=10;
string x, y ,chose;
struct pass{
 string	password;
};
int ManBody(int body){
	if(body==1){	
		cout<<"   _________"<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl
			<<"  |         "<<endl;}

	if(body==2){
		cout<<"  _________		 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |       -----	 "<<endl
			<<" |      |     |	 "<<endl
			<<" |      |     |   "<<endl
			<<" |       -----	 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl;}

		if(body==3){
		cout<<"  _________		 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |       -----	 "<<endl
			<<" |      |     |	 "<<endl
			<<" |      |     |	 "<<endl
			<<" |       -----	 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |				 "<<endl			
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl;}

			if(body==4){
		cout<<"  _________		"<<endl
			<<" |         |		"<<endl
			<<" |         |		"<<endl
			<<" |       -----	"<<endl
			<<" |      |     |	"<<endl
			<<" |      |     |	"<<endl
			<<" |       -----	"<<endl
			<<" |         |		"<<endl
			<<" |      ___|		"<<endl
			<<" |     |   |		"<<endl
			<<" |         |		"<<endl
			<<" |         |	    "<<endl
			<<" |			    "<<endl			
			<<" |			    "<<endl
			<<" |			    "<<endl
			<<" |			    "<<endl
			<<" |			    "<<endl;}

		if(body==5){
		cout<<"  _________		 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |       -----	 "<<endl
			<<" |      |     |	 "<<endl
			<<" |      |     |	 "<<endl
			<<" |       -----	 "<<endl
			<<" |         |		 "<<endl
			<<" |     ____|____  "<<endl
			<<" |    |    |    | "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |				 "<<endl			
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl;}
		
		if(body==6){
		cout<<"  _________		 "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |       -----	 "<<endl
			<<" |      |     |	 "<<endl
			<<" |      |     | 	 "<<endl
			<<" |       -----	 "<<endl
			<<" |         |		 "<<endl
			<<" |     ____|____  "<<endl
			<<" |    |    |    | "<<endl
			<<" |         |		 "<<endl
			<<" |         |		 "<<endl
			<<" |      ___|___   "<<endl			
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl
			<<" |				 "<<endl;}

			
		if(body==7){
		cout<<"  _________		"<<endl
			<<" |         |		"<<endl
			<<" |         |	    "<<endl
			<<" |       -----	"<<endl
			<<" |      |     |  "<<endl
			<<" |      |     |  "<<endl
			<<" |       -----   "<<endl
			<<" |         |		"<<endl
			<<" |     ____|____ "<<endl
			<<" |    |    |    |"<<endl
			<<" |         |		"<<endl
			<<" |         |		"<<endl
			<<" |      ___|___  "<<endl			
			<<" |     |			"<<endl
			<<" |     |			"<<endl
			<<" |   __|			"<<endl
			<<" |			    "<<endl;}

			if(body==8){
		cout<<"  _________			"<<endl
			<<" |         |			"<<endl
			<<" |         |			"<<endl
			<<" |       -----		"<<endl
			<<" |      |     |		"<<endl
			<<" |      |     |		"<<endl
			<<" |       -----		"<<endl
			<<" |         |			"<<endl
			<<" |     ____|____		"<<endl
			<<" |    |    |    |    "<<endl
			<<" |         |			"<<endl
			<<" |         |			"<<endl
			<<" |      ___|___		"<<endl			
			<<" |     |       |		"<<endl
			<<" |     |       |		"<<endl
			<<" |   __|       |__	"<<endl
			<<" |					"<<endl
			<<" |				    "<<endl
			<<" |				    "<<endl;}


	
	
}
int Countrynames(string &x ,string &y){
	
	srand (time(NULL));
	 int a=rand()%10;

	string   china="china", china1="-----";//china
	string   algeria="algeria", algeria1="-------";//algeria
	string   armenia="armenia", armenia1="-------";//armenia
	string  brazil="brazil", brazil1="------";//brazil
	string   colombia="colombia", colombia1="--------";//colombia
	string  denmark="denmark", denmark1="-------";//denmark
	string   cuba="cuba", cuba1="----";//cuba
	string  iceland="iceland", iceland1="-------";//iceland
	string   quwait="quwait", quwait1="------";//quwait   

	 if(a==1){
		  x=china;
		y=china1;				 }

	 if(a==2){	
		  x=algeria;
			y=algeria1;		 }
			
	if(a==3){	
		  x=armenia;
			y=armenia1;		 }
			
	 if(a==4){
		  x=brazil;
			y=brazil1;		   	}
			
	 if(a==5){
		  x=colombia;
			y=colombia1;		 }
	 if(a==6){
	 	 x=denmark;
			y=denmark1;			}
 
	 if(a==7){
		  x=cuba;
		  y=cuba1;				}

	if(a==8){	
		  x=iceland;
		  y=iceland1;			}
 
	if(a==9){
		 x=quwait;
		 y=quwait1;				}
		 	
	 if(a==0){
		  x=denmark;
			y=denmark1;			}	
	
}
int result(int &loop ){
	
		 if(y==x){
	cout<<"\nThe guess is correct.\nYou guess the word:"<<x<<"\nYou Win ";
	  loop=stop;	
	}
		 //result loss
	 if(loop==8){
	cout<<"There are no "<<chose<<",s in the word\n"<<"You're completely hung.\n"<<"The word was:"<<x<<"\nYou loss";
	loop=stop;
	 }
	
}
int input(string &get_pass){
	
	 ch = _getch();
   while(ch != 13){//ASCII number of enter
      get_pass.push_back(ch);
      cout << '*';
      ch = _getch();	 }

}
int get_password(string &get_pass){
	
	string empty;
	 cout << "Please enter password :\n";
	 
	  for(int i=0 ; i<=2 ; i++){
	  	
		 input(get_pass);
		 						    
   if(get_pass == file){cout << "\nAccess granted :P\n"; break;}   
   if(i<2){ cout << "\nWrong password "<<2-i<<" attempt left\n";  }
   else cout << "\nAccess aborted...\n";
   
   get_pass=empty;
    	}	
}
int change_password(string old_password,string new_password,string confirm_password){
	
		cout<<"\nChange a password y/n :";
	    cin>>ch;
	
	if( ch=='y' || ch=='Y'){
	cout<<"Change a password \nOld password :\n";
	input(old_password);
      			
						if(old_password==file){							
						cout<<"\nNew password :\n";							
						input(new_password);  
						  						
						cout<<"\nConfirm password :\n";
						input(confirm_password);
     					 
											if(new_password==confirm_password)	{
												file[20]=New[20];
											 fp = fopen("test.txt", "w");
											 for(int i=0 ; i<confirm_password.size(); i++){
											 	
											 	file[i]=new_password[i];
											 }
  											 fprintf(fp, "%s", file);
  											 fclose(fp);
											cout<<"\nPassword changed";       }
						
											else	cout<<"\nincorrect input password not change";
}
else cout<<"\nSorry wrong input :";
	}
	else cout<<"\n     Thanks for playing game";	
}
int main(){
	      pass p1,p2,p3,p4;
	//file open to access password
		 fp = fopen("test.txt", "r");
  		 fscanf(fp, "%s", file);
  		 fclose(fp);
  		 
	get_password(p1.password);
		
	if(p1.password == file){ 

for(int i=0 ; i<10 ; i++){

	Countrynames(x,y);

	 cout<<"\n\n\n\tWelcome to  Hangman!\n\n    Please guess any country name \n\n\n";
	
		while(loop<=9){	
		
		if(stop>10){	cout<<"There are  "<<chose<<"'s in this word.\n";}
		else{	cout<<"There are no "<<chose<<" Alphabet in this word.\n";}
		
	cout<<"The word now looks like this :"<<y<<"\nYou have "<<9-loop<<" guesses left.\nyour guess :";
	cin>>chose;

	  for(int i=0 ; i<x.size() ; i++){
		 if(chose[0]==x[i]){loop=loop-1; stop++; break;	}
	 	 else stop=10;
									}	
	  for(int i=0 ; i<x.size() ; i++){
		 if(chose[0]==x[i]){ y[i]=x[i];}
									 }		 	
	ManBody(loop);
    result(loop);
	 //increament
	loop++;	cout<<endl;  	}
	
	cout<<"\nyou want to play again y/n :";
	  cin>>ch;
	  if(ch=='y'||ch=='Y')	  {loop=1,stop=10;}
	  else	 break;
	   }
	   
	  change_password(  p2.password , p3.password, p4.password); 
	  	}
return 0;
}

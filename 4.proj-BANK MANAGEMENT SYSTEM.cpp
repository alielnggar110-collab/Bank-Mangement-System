using namespace std;
#include <iostream>

class bank {

  private:

    string name;
    int numaccount;
	double balance;
  

  public:

        void newaccount() {

			cout << "NAME= \n";
			cin >> name;

			cout << "numaccount= \n";
			cin >> numaccount;

			cout << "balance= \n";
			cin >> balance;
	
        }

	int getnumaccount() {

		return numaccount;

	}

		void showaccount() {

			cout << "NAME=" << name << "\n";
			cout << "numaccount=" << numaccount << "\n";
			cout << "balance=" << balance << "\n";


		}

		
		void newopretion() {
			
			int choice;
			double amount=0;
			

			cout << "1.Deposit \n";
			cout << "2.Withdraw \n";
			cin >> choice;


			bool found = false;

			 if (choice == 1) {

				 cout << "Enter amount to deposit \n"; 
				 cin >> amount;

				balance += amount;
				cout << "Done , New balance =" << balance << "EGP \n";

		     } else if (choice == 2) {

				if (amount > balance) {
					cout << "Insufficient balance! \n";

				} else {
					cout << "Enter the amount to withdraw \n";
					cin >> amount;

					balance -= amount;
					cout << "Done , New balance =" << balance << "EGP \n";

					found = true;

				}

			 }else if (!found)

			   cout << "Account not found \n";

		}

	double getbalance() {

		return balance;
	}

};


int main()
{
	
   bank cib[100];

   int choice = 0;
   int count = 0;
   int an;

   
	 while (choice != 5) {

		  cout << "         Bank management system         \n";
		  cout << "       --------------------------        \n";

		  cout << "  choice   \n";
	      cout << "  ------  \n";

	      cout << "1.Create new account  \n";
    	  cout << "2.Show account  \n";
		  cout << "3.Transactions(Deposit , Withdraw)  \n";
		  cout << "4.Inquire for account  \n";
		  cout << "Enter 5 to exit \n";

          cin >> choice;


			      if (choice == 1) {

					    cout << "To open new account please enter this data \n";

					    cib[count].newaccount();

						count++;
			      }
	   
		 else if (choice == 2) {

				  if (count == 0) {

					  cout << "No account found \n";

				  }else{

					  for (int i=0; i < count; i++) {

						cib[i].showaccount();

					  }

				  }
	     }
		          else if (choice == 3 ) {

				         cout << "please enter account number \n";
		   	             cin >> an;

					 

			            for (int i = 0; i < count; i++) {

				           if (cib[i].getnumaccount() == an) {

					          cib[i].newopretion();

					  
				           }
			   
             			} 
		          }

		

		else if (choice == 4) {

		     cout << "Enter your account number \n";
		     cin >> an;

			       bool found = false;

			 for (int i = 0; i < count; i++) {

				 if(cib[i].getnumaccount() == an ){

					 cib[i].showaccount();

				        found = true;

						break;

				 }if(!found) {

					 cout << "Sorry, Account not found \n";
				 }

				 
			 }
	   
				  }
		else if (choice == 5) {

		  cout << "Exiting program \n";

	    }

		else {

		  cout << "Invalid choice \n";

		}
				 

	 }

	 return 0 ;

}

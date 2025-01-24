#include <iostream>
using namespace std;

class BankAccount {
  
  private:
    
    int account_number;
    int balance;

  public:
    
    BankAccount() : account_number(0), balance(0) {}
    
    BankAccount(int no, int b) : account_number(no) , balance (b) {}

    int get_account_number() const {
      return account_number;
    }

    int get_balance() const {
      return balance;
    }

    void set_account_number(int number) {
      account_number = number;
    }

    void set_balance(int b) {
      if (b< 0) {
        cout << "Balance must be positive\n";
      }
      else {
        balance = b;
      }
    }
    void display() const {
      cout << "Account Number: " << account_number << ", Balance: " << balance << endl;
    }
};

int main() {
  BankAccount account = BankAccount(111, 10000);
  account.display();
  account.set_account_number(222);
  account.set_balance(-100);
  account.set_balance(100);
  account.display();

  return 0;
}

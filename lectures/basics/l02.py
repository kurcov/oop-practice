class BankAccount:
    def __init__(self, account_number, balance):
        self.__account_number = account_number
        self.__balance = balance

    def get_account_number (self):
        return self.__account_number
    
    def get_balance (self):
        return self.__balance

    def set_account_number (self, no):
        self.__account_number = no

    def set_balance(self, balance):
        if balance < 0:
            print("Balance must be positive")
        else:    
            self.__balance = balance

account = BankAccount (00000, 1000)
print(account.get_account_number())
print(account.get_balance())
account.set_account_number(11111)
account.set_balance(-100)
account.set_balance(200)
print(account.get_account_number())
print(account.get_balance())




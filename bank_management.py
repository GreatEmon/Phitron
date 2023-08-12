class User:
    def __init__(self, name, initial_balance):
        self.name = name
        self.balance = initial_balance
        self.transaction_history = []
        self.loan_limit = initial_balance * 2

    def deposit(self, amount):
        self.balance += amount
        self.transaction_history.append(f"Deposited {amount}")

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
            self.transaction_history.append(f"Withdrew {amount}")
        else:
            print("Insufficient funds")
            if self.balance <= 0:
                print("Bank is bankrupt")

    def transfer(self, recipient, amount):
        if self.balance >= amount:
            self.balance -= amount
            recipient.balance += amount
            self.transaction_history.append(f"Transferred {amount} to {recipient.name}")
            recipient.transaction_history.append(f"Received {amount} from {self.name}")
        else:
            print("Insufficient funds")

    def check_balance(self):
        return self.balance

    def check_transaction_history(self):
        return self.transaction_history

    def take_loan(self):
        if self.balance >= self.loan_limit:
            self.balance += self.loan_limit
            self.transaction_history.append(f"Took a loan of {self.loan_limit}")
        else:
            print("Not eligible for a loan")

class Admin:
    def __init__(self):
        self.total_balance = 0
        self.total_loan_amount = 0
        self.loan_feature_enabled = True

    def create_account(self, name, initial_balance):
        new_user = User(name, initial_balance)
        self.total_balance += initial_balance
        return new_user

    def check_total_balance(self):
        return self.total_balance

    def check_total_loan_amount(self):
        return self.total_loan_amount

    def toggle_loan_feature(self, status):
        self.loan_feature_enabled = status


admin = Admin()

user1 = admin.create_account("User1", 100)
user2 = admin.create_account("User2", 5000)

user1.deposit(200)
user1.transfer(user2, 300)
user2.withdraw(100)

admin.toggle_loan_feature(False)
user1.take_loan()

print(user1.check_balance())
print(user2.check_transaction_history())
print(admin.check_total_balance())

#include <iostream>
using namespace std;

class PaymentGateway {
public:
    virtual bool authorize(double amount) {

    }
    virtual bool capture(double amount) {

    }
};

class CreditCardGateway : public PaymentGateway {
public:
    bool authorize(double amount) override {
    cout << "Credit Card Accessed" << amount << endl;
    return true;
    }

    bool capture(double amount) override {
    cout << "Credit Card Captured" << amount << endl;
    return true;
    }
};

class PayPalGateway : public PaymentGateway {
public:
    bool authorize(double amount) override {
    cout << "PayPal authorized" << amount << endl;
    return true;
    }

    bool capture(double amount) override {
    cout << "PayPal captured" << amount << endl;
    return true;
    }
};

PaymentGateway* createGateway(const string& type) {
    if (type == "creditcard") {
        return new CreditCardGateway();
    } else if (type == "paypal") {
        return new PayPalGateway();
    } else {
        return nullptr;
    }
}

int main() {
    string paymentType;
    cout << "Enter payment type :- ";
    cin >> paymentType;

    PaymentGateway* gateway = createGateway(paymentType);
    if (gateway) {
        gateway->authorize(70.2);
        gateway->capture(70.2);
    } else {
        cout << "Invalid payment type." << endl;
    }

    return 0;
}

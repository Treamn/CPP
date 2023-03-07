#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



class Cashier {
private:
    int n = 0, discount = 0;
    unordered_map<int, int> price;
    int custom_id = 0;
public:
    Cashier(int _n, int _discount, vector<int>& products, vector<int>& prices):n(_n), discount(_discount), custom_id(0) {
        // this->n = n;
        // this->discount = discount;
        int length = products.size();
        for(int i = 0; i < length; i++){
            // price.insert(products[i], prices[i]);
            price[products[i]] = prices[i];
        }
    }

    // void get_value(){
    //     cout << 'n' << n << '\n';
    //     cout << 'discount' << discount << '\n';
    //     for(auto x = price.begin(); x != price.end(); x++){
    //         cout << x->first << ',' << x->second << endl; 
    //     }
    // }
    
    double getBill(vector<int> product, vector<int> amount) {
        custom_id++;
        double payment = 0;
        int length = product.size();
        for(int i = 0; i < length; i++){
            payment += price[product[i]] * amount[i];
        }

        if((custom_id % n) == 0){
            payment = payment - ((discount * payment) / 100);
        }

        return payment;
    }
};



void set_value(unordered_map<int, int> map, vector<int>& product, vector<int>& prices){
    int length = product.size();
    for(int i = 0; i < length; i++){
        map[product[i]] = prices[i];
    }
}

void get_value(unordered_map<int, int> price){
    // cout << 'n' << n << '\n';
    // cout << 'discount' << discount << '\n';
    for(auto x = price.begin(); x != price.end(); x++){
        cout << x->first << ',' << x->second << endl; 
    }
}

int main(){
    unordered_map<int, int> price;
    vector<int> v1{1,2,3,4,5,6,7};
    vector<int> v2{100,200,300,400,300,200,100};
    set_value(price, v1, v2);
    get_value(price);
    // for(auto x = price.begin(); x != price.end(); ++x){
    //     cout << x->first << ',' << x->second << endl; 
    // }
    return 0;
}



/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */
//
// Created by fc0310 on 2019/5/16.
//

#ifndef LEARNVSC_CHECKOUTPTR_H
#define LEARNVSC_CHECKOUTPTR_H

#include <queue>
#include <memory>
#include "Customer.h"
using PCustomer=std::unique_ptr<Customer>;
class Checkout{
private:
    std::queue<PCustomer> customers;
public:
    void add(PCustomer&& customer){
        customers.push(std::move(customer));
    }
    size_t qlength() const{return customers.size();}\
    void time_increment(){
        if(customers.front()->time_decrement().done()){
            customers.pop();
        }
    }

    bool operator<(const Checkout& other) const {return qlength()<other.qlength();}
    bool operator>(const Checkout& other) const {return qlength()>other.qlength();}
};
#endif //LEARNVSC_CHECKOUTPTR_H

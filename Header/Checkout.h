//
// Created by fc0310 on 2019/5/16.
//

#ifndef LEARNVSC_CHECKOUT_H
#define LEARNVSC_CHECKOUT_H
#include <queue> // For queue container
#include "Customer.h"
class Checkout
{
private:
    std::queue<Customer> customers; // The queue waiting to checkout等待结账的顾客队伍
public:
    void add(const Customer& customer)
    {
        customers.push(customer);
    }
    size_t qlength() const { return customers.size(); }
    // Increment the time by one minute
    void time_increment()
    {
        if (!customers.empty())
        { // There are customers waiting...
            if (customers.front().time_decrement().done())  // If the customer is done...
                customers.pop(); // ...remove from the queue//顾客结完账了，从队列中弹出
        }
    }
    //重载小于和大于运算符
    bool operator<(const Checkout& other) const { return qlength() < other.qlength(); }
    bool operator>(const Checkout& other) const { return qlength() > other.qlength(); }
};
#endif //LEARNVSC_CHECKOUT_H

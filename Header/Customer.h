//
// Created by fc0310 on 2019/5/16.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer
{
protected:
    size_t service_t {}; // Time to checkout、记录顾客结账需要的时间
public:
    explicit Customer(size_t st = 10) :service_t {st}{}
    // Decrement time remaining to checkout
    Customer& time_decrement()//每过一分钟，会调用一次 time_decrement() 函数，这个函数会减少 service_t 的值，它可以反映顾客结账所花费的时间
    {
        if (service_t > 0)
            --service_t;
        return *this;
    }
    bool done() const { return service_t == 0; }
};
#endif //CUSTOMER_H

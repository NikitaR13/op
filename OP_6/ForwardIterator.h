#ifndef OP_6_FORWARDITERATOR_H
#define OP_6_FORWARDITERATOR_H

#include "iterator"
#include "vector"

class ForwardIterator : public std::vector<int>::iterator {
    using Number = std::vector<int>::iterator;
    using Number::Number;
public:
    auto operator--(int) const = delete;
    auto operator--() const = delete;
    auto operator-(difference_type __n) const = delete;
    ForwardIterator(__normal_iterator <pointer, std::vector<int>> iterator) : Number(iterator){};
};


#endif //OP_6_FORWARDITERATOR_H

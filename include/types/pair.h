//
// Created by raver119 on 24.01.18.
//

#ifndef LIBND4J_PAIR_H
#define LIBND4J_PAIR_H

#include <dll.h>

namespace nd4j {
    class ND4J_EXPORT Pair {
    protected:
        int _first = 0;
        int _second = 0;

    public:
        Pair(int first = 0, int second = 0);
        ~Pair() = default;

        int first() const;
        int second() const;
    };
}


#endif //LIBND4J_PAIR_H

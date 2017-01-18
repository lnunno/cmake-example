/**
* http://www.boost.org/doc/libs/1_63_0/more/getting_started/unix-variants.html#build-a-simple-program-using-boost
*/
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " ");
}

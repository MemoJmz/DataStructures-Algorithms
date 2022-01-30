// Quick Union Algorithm
// Sedgewick, Robert. Algorithms in C++, Parts 1-4 (p. 12). Pearson Education

#include <iostream>

static const int N = 10;

int main()
{
    int i, j, p, q, id[N];
    for( i=0; i<N; i++ ) id[i] = i;

    // Print out the content or the array at the beggining
    for( i=0; i<N; i++ ){
        std::cout << id[i] << " ";
    } std::cout <<std::endl;

    while( std::cin >> p >> q )
    {
        for( i = p; i != id[i]; i = id[i]) ;
        for ( j = q; j != id[j]; j = id[j]) ;
        if (i == j) continue;
        id[i] = j;
        // Print out the content of the array at the end of the current iteration
        for(i = 0; i < N; i++){
            std::cout << id[i] << " " ;
        } std::cout << std::endl;

        std::cout << "Pair " << "<" << p << "," << q << "> gives a new connetion " << std::endl;
    }
    return 0;
}

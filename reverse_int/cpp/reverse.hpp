#ifndef REVERSE_HPP
# define REVERSE_HPP

# include <iostream>
# include <cstdlib>

class do_rev{
public:
	do_rev(){
		this->nbr = 0;
		this->next = NULL;
	};
	void call();
	void check(std::string &nbrs);
	~do_rev();
	int nbr;
	do_rev *next;
};

class Solution {
public:
    int reverse(int x);
	// Solution();
	// ~Solution();
	void out();
};

#endif

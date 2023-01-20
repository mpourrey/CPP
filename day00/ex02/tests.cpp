// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	//tableau a taille dynamique de Account
	typedef std::vector<Account::t>							  accounts_t; 
	//taleau de int
	typedef std::vector<int>								  ints_t;
	//tuple de deux iterateurs : un pour Account tab, un pour int tab 
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	/* tableau dynamique de Account */ 	//constructeur automatique [bloc 1]
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); // combien de veleurs dans tableau
	//declare accounts = tab de Account avec la taille du tableau et les montants a set
	accounts_t				accounts( amounts, amounts + amounts_size );
	//deux iterateurs de la classe vector :
	//begin retourne au debut du tableau / retourne le past-the-end du tableau
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

 	/* tableau dynamique de int > depots */
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	//decla deposits = tableau de int
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	/* tableau dynamique de int > retrait */
	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	/* print les infos de Account tab */
	//fonction de la classe Account a coder
	Account::displayAccountsInfos(); //[ligne]
	//for each : applique displayStatus(objet fonction) dans le range
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); //[bloc 2]

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) { 
	//itere sur tableau de Account et tableau de deposits
	//fonction makeDeposit a coder
		(*(it.first)).makeDeposit( *(it.second) ); //[bloc 3]
	}

	Account::displayAccountsInfos(); //[ligne]
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );//[bloc 4]

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos(); //[ligne]
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );//[bloc 6]

	// //destructeur automatique [bloc 7]
	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //

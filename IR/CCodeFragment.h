
#ifndef H_CCODE
#define H_CCODE

#include "../ActivationRecords/Frame.h"
#include "IRTree_classes.h"


struct CCodeFragment {
	std::string fragmentName;
	const AR::IFrame* frame;
	IStm* body;
	CCodeFragment* next=nullptr;

	CCodeFragment(std::string _fragmentName, const AR::IFrame* _frame, IStm* _body):	
		fragmentName(_fragmentName), frame(_frame), body(_body) {};
};

#endif
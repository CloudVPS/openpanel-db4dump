#ifndef _db4dump_H
#define _db4dump_H 1
#include <grace/application.h>

//  -------------------------------------------------------------------------
/// Main application class.
//  -------------------------------------------------------------------------
class db4dumpApp : public application
{
public:
		 	 db4dumpApp (void) :
				application ("nl.madscience.tools.db4dump")
			 {
			 }
			~db4dumpApp (void)
			 {
			 }

	int		 main (void);
};

#endif

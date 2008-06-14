#include "db4dump.h"
#include <dbfile/db4file.h>

APPOBJECT(db4dumpApp);

//  =========================================================================
/// Main method.
//  =========================================================================
int db4dumpApp::main (void)
{
	db4file DB;
	DB.setencoding (dbfile::flat);
	if (! DB.open (argv["*"][0]))
	{
		ferr.writeln ("Could not open db4 file %s\n" %format (argv["*"][0]));
		return 1;
	}
	
	foreach (rec, DB.db)
	{
		string v = rec.sval();
		fout.writeln ("%s\t%s" %format (rec.id(), v));
	}
	return 0;
}


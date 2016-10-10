/*+@@file@@----------------------------------------------------------------*//*!
 \file		adodef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 17:03:28 2016
 \date		Modified on Fri Jul  1 17:03:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ADODEF_H_
#define _ADODEF_H_
#if __POCC__ >= 500
#pragma once
#endif
#define ADO_MAJOR			6
#define ADOR_MAJOR			2
#define ADOX_MAJOR			6
#define ADOMD_MAJOR		    6
#define JRO_MAJOR			2
#define ADO_MINOR			0
#define ADOR_MINOR			8
#define ADOX_MINOR			0
#define ADOMD_MINOR		    0
#define JRO_MINOR			6
#define ADO_VERSION			ADO_MAJOR##.##ADO_MINOR
#define ADOR_VERSION		ADOR_MAJOR##.##ADOR_MINOR
#define ADOX_VERSION		ADOX_MAJOR##.##ADOX_MINOR
#define ADOMD_VERSION		ADOMD_MAJOR##.##ADOMD_MINOR
#define JRO_VERSION			JRO_MAJOR##.##JRO_MINOR
#define ADO_HELPFILE		"ado270.chm"
#define ADOX_HELPFILE		"ado270.chm"
#define ADOMD_HELPFILE		"ado270.chm"
#define JRO_HELPFILE		"msjro.chm"
#define ADO_LIBRARYNAME		"Microsoft ActiveX Data Objects 6.0 Library"
#define ADOR_LIBRARYNAME	"Microsoft ActiveX Data Objects Recordset 2.8 Library"
#define ADOX_LIBRARYNAME	"Microsoft ADO Ext. 6.0 for DDL and Security"
#define ADOMD_LIBRARYNAME	"Microsoft ActiveX Data Objects (Multi-dimensional) 6.0 Library"
#define JRO_LIBRARYNAME		"Microsoft Jet and Replication Objects 2.6 Library"
#define ADOMD_TYPELIB_UUID	uuid(22813728-8BD3-11D0-B4EF-00A0C9138CA4)
#define JRO_TYPELIB_UUID	uuid(AC3B8B4C-B6CA-11d1-9F31-00C04FC29D52)
#endif

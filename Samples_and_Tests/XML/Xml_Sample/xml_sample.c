/*+@@file@@----------------------------------------------------------------*//*!
 \file		xml_sample.c
 \par Description 
            XML sample.
 \par  Status: 
 \par Project: 
            fSDK
 \date		Created  on Thu Feb  9 17:36:32 2017
 \date		Modified on Thu Feb  9 17:36:32 2017
 \author	Timo
\*//*-@@file@@----------------------------------------------------------------*/
#define UNICODE  1
#define _UNICODE 1
#define INITGUID 1
#include <ole2.h>
#include <xmllite.h>
#include <stdio.h>
#include <shlwapi.h>

#pragma warn(disable:2231)		// Enumeration value not handled in switch statement.
#define CHKHR(stmt)             do { hr = (stmt); if (FAILED(hr)) goto CleanUp; } while(0)
#define HR(stmt)                do { hr = (stmt); goto CleanUp; } while(0)
#define SAFE_RELEASE(I)         do { if (I){ I->lpVtbl->Release(I); } I = NULL; } while(0)

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WriteXml
 \date		Created  on Sun Feb 12 18:55:01 2017
 \date		Modified on Sun Feb 12 18:55:01 2017
\*//*-@@fnc@@----------------------------------------------------------------*/
int WriteXml(WCHAR* filename)
{
    HRESULT hr = S_OK;
    IStream *pOutFileStream = NULL;
    IXmlWriter *pWriter = NULL;

    //Open writeable output stream
    if (FAILED(hr = SHCreateStreamOnFile(filename, STGM_CREATE | STGM_WRITE, &pOutFileStream)))
    {
        wprintf(L"Error creating file writer, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = CreateXmlWriter(__uuidof(IXmlWriter), (void**) &pWriter, NULL)))
    {
        wprintf(L"Error creating xml writer, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->SetOutput(pWriter, (LPUNKNOWN)pOutFileStream)))
    {
        wprintf(L"Error, Method: SetOutput, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->SetProperty(pWriter, XmlWriterProperty_Indent, TRUE)))
    {
        wprintf(L"Error, Method: SetProperty XmlWriterProperty_Indent, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteStartDocument(pWriter, XmlStandalone_Omit)))
    {
        wprintf(L"Error, Method: WriteStartDocument, error is %08.8lx", hr);
        HR(hr);
    }

    // if you want to use a DTD using either the SYSTEM or PUBLIC identifiers,
    // or if you want to use an internal DTD subset, you can modify the following
    // call to WriteDocType.
    //if (FAILED(hr = pWriter->lpVtbl->WriteDocType(pWriter, L"root", NULL, NULL, NULL)))
    //{
        //wprintf(L"Error, Method: WriteDocType, error is %08.8lx", hr);
        //HR(hr);
    //}

    if (FAILED(hr = pWriter->lpVtbl->WriteProcessingInstruction(pWriter, L"xml-stylesheet",
        L"href=\"mystyle.css\" title=\"Compact\" type=\"text/css\"")))
    {
        wprintf(L"Error, Method: WriteProcessingInstruction, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"root", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"sub", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteAttributeString(pWriter, NULL, L"myAttr", NULL,
                                                  L"1234")))
    {
        wprintf(L"Error, Method: WriteAttributeString, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteString(pWriter, L"Markup is <escaped> for this string")))
    {
        wprintf(L"Error, Method: WriteString, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteFullEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteFullEndElement, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"anotherChild", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteString(pWriter, L"some text")))
    {
        wprintf(L"Error, Method: WriteString, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteFullEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteFullEndElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteCData(pWriter, L"This is CDATA text.")))
    {
        wprintf(L"Error, Method: WriteCData, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"containsCharacterEntity", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteCharEntity(pWriter, L'a')))
    {
        wprintf(L"Error, Method: WriteCharEntity, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteFullEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteFullEndElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"containsChars", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteChars(pWriter, L"abcdefghijklm", 5)))
    {
        wprintf(L"Error, Method: WriteChars, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteFullEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteFullEndElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

#if 0	//writes entity reference
    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"containsEntity", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteEntityRef(pWriter, L"myEntity")))
    {
        wprintf(L"Error, Method: WriteEntityRef, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteEndElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }
#endif

    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"containsName", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteName(pWriter, L"myName")))
    {
        wprintf(L"Error, Method: WriteName, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteEndElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteStartElement(pWriter, NULL, L"containsNmToken", NULL)))
    {
        wprintf(L"Error, Method: WriteStartElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteNmToken(pWriter, L"myNmToken")))
    {
        wprintf(L"Error, Method: WriteNmToken, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteEndElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteComment(pWriter, L"This is a comment")))
    {
        wprintf(L"Error, Method: WriteComment, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteRaw(pWriter, L"<elementWrittenRaw/>")))
    {
        wprintf(L"Error, Method: WriteRaw, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteRawChars(pWriter, L"<rawCharacters/>", 16)))
    {
        wprintf(L"Error, Method: WriteRawChars, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    if (FAILED(hr = pWriter->lpVtbl->WriteElementString(pWriter, NULL, L"myElement", NULL, L"myValue")))
    {
        wprintf(L"Error, Method: WriteElementString, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteFullEndElement(pWriter)))
    {
        wprintf(L"Error, Method: WriteFullEndElement, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->WriteWhitespace(pWriter, L"\n")))
    {
        wprintf(L"Error, Method: WriteWhitespace, error is %08.8lx", hr);
        HR(hr);
    }

    // WriteEndDocument closes any open elements or attributes
    if (FAILED(hr = pWriter->lpVtbl->WriteEndDocument(pWriter)))
    {
        wprintf(L"Error, Method: WriteEndDocument, error is %08.8lx", hr);
        HR(hr);
    }
    if (FAILED(hr = pWriter->lpVtbl->Flush(pWriter)))
    {
        wprintf(L"Error, Method: Flush, error is %08.8lx", hr);
        HR(hr);
    }

CleanUp:
    SAFE_RELEASE(pOutFileStream);
    SAFE_RELEASE(pWriter);
    return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WriteAttributes
 \date		Created  on Thu Feb  9 18:00:58 2017
 \date		Modified on Thu Feb  9 18:00:58 2017
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT WriteAttributes(IXmlReader *pReader)
{
	const WCHAR *pwszPrefix;
	const WCHAR *pwszLocalName;
	const WCHAR *pwszValue;
	HRESULT hr = pReader->lpVtbl->MoveToFirstAttribute(pReader);

	if (S_FALSE == hr)
		return hr;

	if (S_OK != hr)
	{
		wprintf(L"Error moving to first attribute, error is %08.8lx", hr);
		return hr;
	}

	while (TRUE)
	{
		if (!pReader->lpVtbl->IsDefault(pReader))
		{
			UINT cwchPrefix;
			if (FAILED(hr = pReader->lpVtbl->GetPrefix(pReader, &pwszPrefix, &cwchPrefix)))
			{
				wprintf(L"Error getting prefix, error is %08.8lx", hr);
				return hr;
			}

			if (FAILED(hr = pReader->lpVtbl->GetLocalName(pReader, &pwszLocalName, NULL)))
			{
				wprintf(L"Error getting local name, error is %08.8lx", hr);
				return hr;
			}

			if (FAILED(hr = pReader->lpVtbl->GetValue(pReader, &pwszValue, NULL)))
			{
				wprintf(L"Error getting value, error is %08.8lx", hr);
				return hr;
			}

			if (cwchPrefix > 0)
				wprintf(L"Attr: %ls:%ls=\"%ls\" \n", pwszPrefix, pwszLocalName, pwszValue);
			else
				wprintf(L"Attr: %ls=\"%ls\" \n", pwszLocalName, pwszValue);
		}

		if (S_OK != pReader->lpVtbl->MoveToNextAttribute(pReader))
			break;
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ReadXml
 \date		Created  on Sun Feb 12 18:54:24 2017
 \date		Modified on Sun Feb 12 18:54:24 2017
\*//*-@@fnc@@----------------------------------------------------------------*/
int ReadXml(WCHAR *filename)
{
	HRESULT hr = S_OK;
	IStream *pFileStream = NULL;
	IXmlReader *pReader = NULL;
	XmlNodeType nodeType;
	const WCHAR *pwszPrefix;
	const WCHAR *pwszLocalName;
	const WCHAR *pwszValue;
	UINT cwchPrefix;

	//Open read-only input stream
	if (FAILED(hr = SHCreateStreamOnFile(filename, STGM_READ, &pFileStream)))
	{
		wprintf(L"Error creating file reader, error is %08.8lx", hr);
		HR(hr);
	}

	if (FAILED(hr = CreateXmlReader(__uuidof(IXmlReader), (void**) &pReader, NULL)))
	{
		wprintf(L"Error creating xml reader, error is %08.8lx", hr);
		HR(hr);
	}

	if (FAILED(hr = pReader->lpVtbl->SetProperty(pReader, XmlReaderProperty_DtdProcessing, DtdProcessing_Prohibit)))
	{
		wprintf(L"Error setting XmlReaderProperty_DtdProcessing, error is %08.8lx", hr);
		HR(hr);
	}

	if (FAILED(hr = pReader->lpVtbl->SetInput(pReader, (LPUNKNOWN)pFileStream)))
	{
		wprintf(L"Error setting input for reader, error is %08.8lx", hr);
		HR(hr);
	}

	//read until there are no more nodes
	while (S_OK == (hr = pReader->lpVtbl->Read(pReader, &nodeType)))
	{
		switch (nodeType)
		{
			case XmlNodeType_XmlDeclaration:
				wprintf(L"XmlDeclaration\n");
				if (FAILED(hr = WriteAttributes(pReader)))
				{
					wprintf(L"Error writing attributes, error is %08.8lx", hr);
					HR(hr);
				}
				break;

			case XmlNodeType_Element:
				if (FAILED(hr = pReader->lpVtbl->GetPrefix(pReader, &pwszPrefix, &cwchPrefix)))
				{
					wprintf(L"Error getting prefix, error is %08.8lx", hr);
					HR(hr);
				}
				if (FAILED(hr = pReader->lpVtbl->GetLocalName(pReader, &pwszLocalName, NULL)))
				{
					wprintf(L"Error getting local name, error is %08.8lx", hr);
					HR(hr);
				}
				if (cwchPrefix > 0)
					wprintf(L"Element: %ls:%ls\n", pwszPrefix, pwszLocalName);
				else
					wprintf(L"Element: %ls\n", pwszLocalName);

				if (FAILED(hr = WriteAttributes(pReader)))
				{
					wprintf(L"Error writing attributes, error is %08.8lx", hr);
					HR(hr);
				}

				if (pReader->lpVtbl->IsEmptyElement(pReader))
					wprintf(L" (empty)");
				break;

			case XmlNodeType_EndElement:
				if (FAILED(hr = pReader->lpVtbl->GetPrefix(pReader, &pwszPrefix, &cwchPrefix)))
				{
					wprintf(L"Error getting prefix, error is %08.8lx", hr);
					HR(hr);
				}
				if (FAILED(hr = pReader->lpVtbl->GetLocalName(pReader, &pwszLocalName, NULL)))
				{
					wprintf(L"Error getting local name, error is %08.8lx", hr);
					HR(hr);
				}
				if (cwchPrefix > 0)
					wprintf(L"End Element: %ls:%ls\n", pwszPrefix, pwszLocalName);
				else
					wprintf(L"End Element: %ls\n", pwszLocalName);
				break;

			case XmlNodeType_Text:
			case XmlNodeType_Whitespace:
				if (FAILED(hr = pReader->lpVtbl->GetValue(pReader, &pwszValue, NULL)))
				{
					wprintf(L"Error getting value, error is %08.8lx", hr);
					HR(hr);
				}
				wprintf(L"Text: >%ls<\n", pwszValue);
				break;

			case XmlNodeType_CDATA:
				if (FAILED(hr = pReader->lpVtbl->GetValue(pReader, &pwszValue, NULL)))
				{
					wprintf(L"Error getting value, error is %08.8lx", hr);
					HR(hr);
				}
				wprintf(L"CDATA: %ls\n", pwszValue);
				break;

			case XmlNodeType_ProcessingInstruction:
				if (FAILED(hr = pReader->lpVtbl->GetLocalName(pReader, &pwszLocalName, NULL)))
				{
					wprintf(L"Error getting name, error is %08.8lx", hr);
					HR(hr);
				}
				if (FAILED(hr = pReader->lpVtbl->GetValue(pReader, &pwszValue, NULL)))
				{
					wprintf(L"Error getting value, error is %08.8lx", hr);
					HR(hr);
				}
				wprintf(L"Processing Instruction name:%ls value:%ls\n", pwszLocalName, pwszValue);
				break;

			case XmlNodeType_Comment:
				if (FAILED(hr = pReader->lpVtbl->GetValue(pReader, &pwszValue, NULL)))
				{
					wprintf(L"Error getting value, error is %08.8lx", hr);
					HR(hr);
				}
				wprintf(L"Comment: %ls\n", pwszValue);
				break;

			case XmlNodeType_DocumentType:
				wprintf(L"DOCTYPE is not printed\n");
				break;

			default:
				wprintf(L"Error: Node type not handled\n");
				goto CleanUp;
		}
	}

	if ((S_OK != hr) && (S_FALSE != hr))
	{
		wprintf(L"Error %#X\n", hr);
	}

  CleanUp:
	SAFE_RELEASE(pFileStream);
	SAFE_RELEASE(pReader);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		wmain
 \date		Created  on Sun Feb 12 18:55:20 2017
 \date		Modified on Sun Feb 12 18:55:20 2017
\*//*-@@fnc@@----------------------------------------------------------------*/
int __cdecl wmain(int argc, WCHAR *argv[])
{

	if (argc != 2)
	{
		wprintf(L"Usage: Xml_sample.exe name-of-input-output-file\n");
		return 0;
	}

	if (S_OK != WriteXml(argv[1]))
	{
		wprintf(L"Error creating output file \"%ls\"\n", argv[1]);
		return 0;
	}

	return ReadXml(argv[1]);
}

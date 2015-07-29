#pragma once

#include <Logic/Biff_records/BiffRecord.h>
#include <Logic/Biff_structures/BiffString.h>


namespace XLS
{;

class List12TableStyleClientInfo: public BiffStructure
{	
	BASE_STRUCTURE_DEFINE_CLASS_NAME(List12TableStyleClientInfo)
public:
	BiffStructurePtr clone();

	List12TableStyleClientInfo();
	~List12TableStyleClientInfo();

	
	
	virtual void load(CFRecord& record);
	virtual void store(CFRecord& record);

public:
	BIFF_BYTE fFirstColumn;
	BIFF_BYTE fLastColumn;
	BIFF_BYTE fRowStripes;
	BIFF_BYTE fColumnStripes;
	BIFF_BYTE fDefaultStyle;
	XLUnicodeString stListStyleName;
};

typedef boost::shared_ptr<List12TableStyleClientInfo> List12TableStyleClientInfoPtr;

} // namespace XLS
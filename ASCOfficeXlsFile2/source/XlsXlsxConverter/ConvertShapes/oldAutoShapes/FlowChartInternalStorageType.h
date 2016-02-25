#pragma once
#include "../CustomShape.h"

// 113
namespace NSCustomShapesConvert
{
class CFlowChartInternalStorageType : public CCustomShape
{
public:
	CFlowChartInternalStorageType()

    {
        m_bConcentricFill = true;

        m_eJoin = NSOfficeDrawing::lineJoinMiter;

        m_strPath = _T("m,l,21600r21600,l21600,xem4236,nfl4236,21600em,4236nfl21600,4236e");
        
        LoadConnectorsList(_T("Rectangle"));
        LoadTextRect(_T("4236,4236,21600,21600"));
    }
};
}
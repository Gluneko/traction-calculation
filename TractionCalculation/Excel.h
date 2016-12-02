// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard
#include <afxdisp.h>
#if !defined _HEAD_FILE_EXCEL9_

#define _HEAD_FILE_EXCEL9_
// CRange wrapper class

class CRange : public COleDispatchDriver
{
public:
	CRange(){} // Calls COleDispatchDriver default constructor
	CRange(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRange(const CRange& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Range methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT Activate()
	{
		VARIANT result;
		InvokeHelper(0x130, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_AddIndent()
	{
		VARIANT result;
		InvokeHelper(0x427, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_AddIndent(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x427, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	CString get_Address(VARIANT& RowAbsolute, VARIANT& ColumnAbsolute, long ReferenceStyle, VARIANT& External, VARIANT& RelativeTo)
	{
		CString result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xec, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, &RowAbsolute, &ColumnAbsolute, ReferenceStyle, &External, &RelativeTo);
		return result;
	}
	CString get_AddressLocal(VARIANT& RowAbsolute, VARIANT& ColumnAbsolute, long ReferenceStyle, VARIANT& External, VARIANT& RelativeTo)
	{
		CString result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1b5, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, &RowAbsolute, &ColumnAbsolute, ReferenceStyle, &External, &RelativeTo);
		return result;
	}
	VARIANT AdvancedFilter(long Action, VARIANT& CriteriaRange, VARIANT& CopyToRange, VARIANT& Unique)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x36c, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Action, &CriteriaRange, &CopyToRange, &Unique);
		return result;
	}
	VARIANT ApplyNames(VARIANT& Names, VARIANT& IgnoreRelativeAbsolute, VARIANT& UseRowColumnNames, VARIANT& OmitColumn, VARIANT& OmitRow, long Order, VARIANT& AppendLast)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT;
		InvokeHelper(0x1b9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Names, &IgnoreRelativeAbsolute, &UseRowColumnNames, &OmitColumn, &OmitRow, Order, &AppendLast);
		return result;
	}
	VARIANT ApplyOutlineStyles()
	{
		VARIANT result;
		InvokeHelper(0x1c0, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Areas()
	{
		LPDISPATCH result;
		InvokeHelper(0x238, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString AutoComplete(LPCTSTR String)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x4a1, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, String);
		return result;
	}
	VARIANT AutoFill(LPDISPATCH Destination, long Type)
	{
		VARIANT result;
		static BYTE parms[] = VTS_DISPATCH VTS_I4;
		InvokeHelper(0x1c1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Destination, Type);
		return result;
	}
	VARIANT AutoFilter(VARIANT& Field, VARIANT& Criteria1, long Operator, VARIANT& Criteria2, VARIANT& VisibleDropDown)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x319, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Field, &Criteria1, Operator, &Criteria2, &VisibleDropDown);
		return result;
	}
	VARIANT AutoFit()
	{
		VARIANT result;
		InvokeHelper(0xed, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT AutoFormat(long Format, VARIANT& Number, VARIANT& Font, VARIANT& Alignment, VARIANT& Border, VARIANT& Pattern, VARIANT& Width)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x72, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Format, &Number, &Font, &Alignment, &Border, &Pattern, &Width);
		return result;
	}
	VARIANT AutoOutline()
	{
		VARIANT result;
		InvokeHelper(0x40c, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT _BorderAround(VARIANT& LineStyle, long Weight, long ColorIndex, VARIANT& Color)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT;
		InvokeHelper(0x42b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &LineStyle, Weight, ColorIndex, &Color);
		return result;
	}
	LPDISPATCH get_Borders()
	{
		LPDISPATCH result;
		InvokeHelper(0x1b3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT Calculate()
	{
		VARIANT result;
		InvokeHelper(0x117, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Cells()
	{
		LPDISPATCH result;
		InvokeHelper(0xee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Characters(VARIANT& Start, VARIANT& Length)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x25b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Start, &Length);
		return result;
	}
	VARIANT CheckSpelling(VARIANT& CustomDictionary, VARIANT& IgnoreUppercase, VARIANT& AlwaysSuggest, VARIANT& SpellLang)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1f9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &CustomDictionary, &IgnoreUppercase, &AlwaysSuggest, &SpellLang);
		return result;
	}
	VARIANT Clear()
	{
		VARIANT result;
		InvokeHelper(0x6f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT ClearContents()
	{
		VARIANT result;
		InvokeHelper(0x71, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT ClearFormats()
	{
		VARIANT result;
		InvokeHelper(0x70, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT ClearNotes()
	{
		VARIANT result;
		InvokeHelper(0xef, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT ClearOutline()
	{
		VARIANT result;
		InvokeHelper(0x40d, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long get_Column()
	{
		long result;
		InvokeHelper(0xf0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH ColumnDifferences(VARIANT& Comparison)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x1fe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Comparison);
		return result;
	}
	LPDISPATCH get_Columns()
	{
		LPDISPATCH result;
		InvokeHelper(0xf1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_ColumnWidth()
	{
		VARIANT result;
		InvokeHelper(0xf2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_ColumnWidth(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xf2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT Consolidate(VARIANT& Sources, VARIANT& Function, VARIANT& TopRow, VARIANT& LeftColumn, VARIANT& CreateLinks)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1e2, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Sources, &Function, &TopRow, &LeftColumn, &CreateLinks);
		return result;
	}
	VARIANT Copy(VARIANT& Destination)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x227, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Destination);
		return result;
	}
	long CopyFromRecordset(LPUNKNOWN Data, VARIANT& MaxRows, VARIANT& MaxColumns)
	{
		long result;
		static BYTE parms[] = VTS_UNKNOWN VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x480, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Data, &MaxRows, &MaxColumns);
		return result;
	}
	VARIANT CopyPicture(long Appearance, long Format)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xd5, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Appearance, Format);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT CreateNames(VARIANT& Top, VARIANT& Left, VARIANT& Bottom, VARIANT& Right)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1c9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Top, &Left, &Bottom, &Right);
		return result;
	}
	VARIANT CreatePublisher(VARIANT& Edition, long Appearance, VARIANT& ContainsPICT, VARIANT& ContainsBIFF, VARIANT& ContainsRTF, VARIANT& ContainsVALU)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1ca, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Edition, Appearance, &ContainsPICT, &ContainsBIFF, &ContainsRTF, &ContainsVALU);
		return result;
	}
	LPDISPATCH get_CurrentArray()
	{
		LPDISPATCH result;
		InvokeHelper(0x1f5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CurrentRegion()
	{
		LPDISPATCH result;
		InvokeHelper(0xf3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT Cut(VARIANT& Destination)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x235, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Destination);
		return result;
	}
	VARIANT DataSeries(VARIANT& Rowcol, long Type, long Date, VARIANT& Step, VARIANT& Stop, VARIANT& Trend)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1d0, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Rowcol, Type, Date, &Step, &Stop, &Trend);
		return result;
	}
	VARIANT get__Default(VARIANT& RowIndex, VARIANT& ColumnIndex)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &RowIndex, &ColumnIndex);
		return result;
	}
	void put__Default(VARIANT& RowIndex, VARIANT& ColumnIndex, VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &RowIndex, &ColumnIndex, &newValue);
	}
	VARIANT Delete(VARIANT& Shift)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Shift);
		return result;
	}
	LPDISPATCH get_Dependents()
	{
		LPDISPATCH result;
		InvokeHelper(0x21f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT _DialogBox()
	{
		VARIANT result;
		InvokeHelper(0xf5, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_DirectDependents()
	{
		LPDISPATCH result;
		InvokeHelper(0x221, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_DirectPrecedents()
	{
		LPDISPATCH result;
		InvokeHelper(0x222, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT EditionOptions(long Type, long Option, VARIANT& Name, VARIANT& Reference, long Appearance, long ChartSize, VARIANT& Format)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT;
		InvokeHelper(0x46b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Type, Option, &Name, &Reference, Appearance, ChartSize, &Format);
		return result;
	}
	LPDISPATCH get_End(long Direction)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1f4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, Direction);
		return result;
	}
	LPDISPATCH get_EntireColumn()
	{
		LPDISPATCH result;
		InvokeHelper(0xf6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_EntireRow()
	{
		LPDISPATCH result;
		InvokeHelper(0xf7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT FillDown()
	{
		VARIANT result;
		InvokeHelper(0xf8, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT FillLeft()
	{
		VARIANT result;
		InvokeHelper(0xf9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT FillRight()
	{
		VARIANT result;
		InvokeHelper(0xfa, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT FillUp()
	{
		VARIANT result;
		InvokeHelper(0xfb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Find(VARIANT& What, VARIANT& After, VARIANT& LookIn, VARIANT& LookAt, VARIANT& SearchOrder, long SearchDirection, VARIANT& MatchCase, VARIANT& MatchByte, VARIANT& SearchFormat)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x18e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &What, &After, &LookIn, &LookAt, &SearchOrder, SearchDirection, &MatchCase, &MatchByte, &SearchFormat);
		return result;
	}
	LPDISPATCH FindNext(VARIANT& After)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x18f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &After);
		return result;
	}
	LPDISPATCH FindPrevious(VARIANT& After)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x190, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &After);
		return result;
	}
	LPDISPATCH get_Font()
	{
		LPDISPATCH result;
		InvokeHelper(0x92, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Formula()
	{
		VARIANT result;
		InvokeHelper(0x105, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Formula(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x105, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_FormulaArray()
	{
		VARIANT result;
		InvokeHelper(0x24a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_FormulaArray(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x24a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	long get_FormulaLabel()
	{
		long result;
		InvokeHelper(0x564, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FormulaLabel(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x564, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_FormulaHidden()
	{
		VARIANT result;
		InvokeHelper(0x106, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_FormulaHidden(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x106, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_FormulaLocal()
	{
		VARIANT result;
		InvokeHelper(0x107, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_FormulaLocal(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x107, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_FormulaR1C1()
	{
		VARIANT result;
		InvokeHelper(0x108, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_FormulaR1C1(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x108, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_FormulaR1C1Local()
	{
		VARIANT result;
		InvokeHelper(0x109, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_FormulaR1C1Local(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x109, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT FunctionWizard()
	{
		VARIANT result;
		InvokeHelper(0x23b, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	BOOL GoalSeek(VARIANT& Goal, LPDISPATCH ChangingCell)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_DISPATCH;
		InvokeHelper(0x1d8, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &Goal, ChangingCell);
		return result;
	}
	VARIANT Group(VARIANT& Start, VARIANT& End, VARIANT& By, VARIANT& Periods)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Start, &End, &By, &Periods);
		return result;
	}
	VARIANT get_HasArray()
	{
		VARIANT result;
		InvokeHelper(0x10a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_HasFormula()
	{
		VARIANT result;
		InvokeHelper(0x10b, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Height()
	{
		VARIANT result;
		InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Hidden()
	{
		VARIANT result;
		InvokeHelper(0x10c, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Hidden(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x10c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_HorizontalAlignment()
	{
		VARIANT result;
		InvokeHelper(0x88, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_HorizontalAlignment(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x88, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_IndentLevel()
	{
		VARIANT result;
		InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_IndentLevel(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xc9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	void InsertIndent(long InsertAmount)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x565, DISPATCH_METHOD, VT_EMPTY, NULL, parms, InsertAmount);
	}
	VARIANT Insert(VARIANT& Shift, VARIANT& CopyOrigin)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xfc, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Shift, &CopyOrigin);
		return result;
	}
	LPDISPATCH get_Interior()
	{
		LPDISPATCH result;
		InvokeHelper(0x81, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Item(VARIANT& RowIndex, VARIANT& ColumnIndex)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &RowIndex, &ColumnIndex);
		return result;
	}
	void put_Item(VARIANT& RowIndex, VARIANT& ColumnIndex, VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xaa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &RowIndex, &ColumnIndex, &newValue);
	}
	VARIANT Justify()
	{
		VARIANT result;
		InvokeHelper(0x1ef, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Left()
	{
		VARIANT result;
		InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long get_ListHeaderRows()
	{
		long result;
		InvokeHelper(0x4a3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT ListNames()
	{
		VARIANT result;
		InvokeHelper(0xfd, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long get_LocationInTable()
	{
		long result;
		InvokeHelper(0x2b3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Locked()
	{
		VARIANT result;
		InvokeHelper(0x10d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Locked(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x10d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	void Merge(VARIANT& Across)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x234, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Across);
	}
	void UnMerge()
	{
		InvokeHelper(0x568, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_MergeArea()
	{
		LPDISPATCH result;
		InvokeHelper(0x569, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_MergeCells()
	{
		VARIANT result;
		InvokeHelper(0xd0, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_MergeCells(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xd0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Name()
	{
		VARIANT result;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Name(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT NavigateArrow(VARIANT& TowardPrecedent, VARIANT& ArrowNumber, VARIANT& LinkNumber)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x408, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &TowardPrecedent, &ArrowNumber, &LinkNumber);
		return result;
	}
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Next()
	{
		LPDISPATCH result;
		InvokeHelper(0x1f6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString NoteText(VARIANT& Text, VARIANT& Start, VARIANT& Length)
	{
		CString result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x467, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, &Text, &Start, &Length);
		return result;
	}
	VARIANT get_NumberFormat()
	{
		VARIANT result;
		InvokeHelper(0xc1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_NumberFormat(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xc1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_NumberFormatLocal()
	{
		VARIANT result;
		InvokeHelper(0x449, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_NumberFormatLocal(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x449, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	LPDISPATCH get_Offset(VARIANT& RowOffset, VARIANT& ColumnOffset)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xfe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &RowOffset, &ColumnOffset);
		return result;
	}
	VARIANT get_Orientation()
	{
		VARIANT result;
		InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Orientation(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_OutlineLevel()
	{
		VARIANT result;
		InvokeHelper(0x10f, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_OutlineLevel(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x10f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	long get_PageBreak()
	{
		long result;
		InvokeHelper(0xff, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PageBreak(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xff, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT Parse(VARIANT& ParseLine, VARIANT& Destination)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1dd, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &ParseLine, &Destination);
		return result;
	}
	VARIANT _PasteSpecial(long Paste, long Operation, VARIANT& SkipBlanks, VARIANT& Transpose)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x403, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Paste, Operation, &SkipBlanks, &Transpose);
		return result;
	}
	LPDISPATCH get_PivotField()
	{
		LPDISPATCH result;
		InvokeHelper(0x2db, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_PivotItem()
	{
		LPDISPATCH result;
		InvokeHelper(0x2e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_PivotTable()
	{
		LPDISPATCH result;
		InvokeHelper(0x2cc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Precedents()
	{
		LPDISPATCH result;
		InvokeHelper(0x220, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_PrefixCharacter()
	{
		VARIANT result;
		InvokeHelper(0x1f8, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Previous()
	{
		LPDISPATCH result;
		InvokeHelper(0x1f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT __PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x389, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate);
		return result;
	}
	VARIANT PrintPreview(VARIANT& EnableChanges)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x119, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &EnableChanges);
		return result;
	}
	LPDISPATCH get_QueryTable()
	{
		LPDISPATCH result;
		InvokeHelper(0x56a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Range(VARIANT& Cell1, VARIANT& Cell2)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Cell1, &Cell2);
		return result;
	}
	VARIANT RemoveSubtotal()
	{
		VARIANT result;
		InvokeHelper(0x373, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	BOOL Replace(VARIANT& What, VARIANT& Replacement, VARIANT& LookAt, VARIANT& SearchOrder, VARIANT& MatchCase, VARIANT& MatchByte, VARIANT& SearchFormat, VARIANT& ReplaceFormat)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xe2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &What, &Replacement, &LookAt, &SearchOrder, &MatchCase, &MatchByte, &SearchFormat, &ReplaceFormat);
		return result;
	}
	LPDISPATCH get_Resize(VARIANT& RowSize, VARIANT& ColumnSize)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x100, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &RowSize, &ColumnSize);
		return result;
	}
	long get_Row()
	{
		long result;
		InvokeHelper(0x101, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH RowDifferences(VARIANT& Comparison)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x1ff, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Comparison);
		return result;
	}
	VARIANT get_RowHeight()
	{
		VARIANT result;
		InvokeHelper(0x110, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_RowHeight(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x110, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	LPDISPATCH get_Rows()
	{
		LPDISPATCH result;
		InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT Run(VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15, VARIANT& Arg16, VARIANT& Arg17, VARIANT& Arg18, VARIANT& Arg19, VARIANT& Arg20, VARIANT& Arg21, VARIANT& Arg22, VARIANT& Arg23, VARIANT& Arg24, VARIANT& Arg25, VARIANT& Arg26, VARIANT& Arg27, VARIANT& Arg28, VARIANT& Arg29, VARIANT& Arg30)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x103, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
		return result;
	}
	VARIANT Select()
	{
		VARIANT result;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT Show()
	{
		VARIANT result;
		InvokeHelper(0x1f0, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT ShowDependents(VARIANT& Remove)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x36d, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Remove);
		return result;
	}
	VARIANT get_ShowDetail()
	{
		VARIANT result;
		InvokeHelper(0x249, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_ShowDetail(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x249, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT ShowErrors()
	{
		VARIANT result;
		InvokeHelper(0x36e, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT ShowPrecedents(VARIANT& Remove)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x36f, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Remove);
		return result;
	}
	VARIANT get_ShrinkToFit()
	{
		VARIANT result;
		InvokeHelper(0xd1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_ShrinkToFit(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xd1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT Sort(VARIANT& Key1, long Order1, VARIANT& Key2, VARIANT& Type, long Order2, VARIANT& Key3, long Order3, long Header, VARIANT& OrderCustom, VARIANT& MatchCase, long Orientation, long SortMethod, long DataOption1, long DataOption2, long DataOption3)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x370, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Key1, Order1, &Key2, &Type, Order2, &Key3, Order3, Header, &OrderCustom, &MatchCase, Orientation, SortMethod, DataOption1, DataOption2, DataOption3);
		return result;
	}
	VARIANT SortSpecial(long SortMethod, VARIANT& Key1, long Order1, VARIANT& Type, VARIANT& Key2, long Order2, VARIANT& Key3, long Order3, long Header, VARIANT& OrderCustom, VARIANT& MatchCase, long Orientation, long DataOption1, long DataOption2, long DataOption3)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x371, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, SortMethod, &Key1, Order1, &Type, &Key2, Order2, &Key3, Order3, Header, &OrderCustom, &MatchCase, Orientation, DataOption1, DataOption2, DataOption3);
		return result;
	}
	LPDISPATCH get_SoundNote()
	{
		LPDISPATCH result;
		InvokeHelper(0x394, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH SpecialCells(long Type, VARIANT& Value)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT;
		InvokeHelper(0x19a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Type, &Value);
		return result;
	}
	VARIANT get_Style()
	{
		VARIANT result;
		InvokeHelper(0x104, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Style(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x104, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT SubscribeTo(LPCTSTR Edition, long Format)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x1e1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Edition, Format);
		return result;
	}
	VARIANT Subtotal(long GroupBy, long Function, VARIANT& TotalList, VARIANT& Replace, VARIANT& PageBreaks, long SummaryBelowData)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4;
		InvokeHelper(0x372, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, GroupBy, Function, &TotalList, &Replace, &PageBreaks, SummaryBelowData);
		return result;
	}
	VARIANT get_Summary()
	{
		VARIANT result;
		InvokeHelper(0x111, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT Table(VARIANT& RowInput, VARIANT& ColumnInput)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1f1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &RowInput, &ColumnInput);
		return result;
	}
	VARIANT get_Text()
	{
		VARIANT result;
		InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT TextToColumns(VARIANT& Destination, long DataType, long TextQualifier, VARIANT& ConsecutiveDelimiter, VARIANT& Tab, VARIANT& Semicolon, VARIANT& Comma, VARIANT& Space, VARIANT& Other, VARIANT& OtherChar, VARIANT& FieldInfo, VARIANT& DecimalSeparator, VARIANT& ThousandsSeparator, VARIANT& TrailingMinusNumbers)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x410, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Destination, DataType, TextQualifier, &ConsecutiveDelimiter, &Tab, &Semicolon, &Comma, &Space, &Other, &OtherChar, &FieldInfo, &DecimalSeparator, &ThousandsSeparator, &TrailingMinusNumbers);
		return result;
	}
	VARIANT get_Top()
	{
		VARIANT result;
		InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT Ungroup()
	{
		VARIANT result;
		InvokeHelper(0xf4, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_UseStandardHeight()
	{
		VARIANT result;
		InvokeHelper(0x112, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_UseStandardHeight(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x112, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_UseStandardWidth()
	{
		VARIANT result;
		InvokeHelper(0x113, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_UseStandardWidth(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x113, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	LPDISPATCH get_Validation()
	{
		LPDISPATCH result;
		InvokeHelper(0x56b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Value(VARIANT& RangeValueDataType)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &RangeValueDataType);
		return result;
	}
	void put_Value(VARIANT& RangeValueDataType, VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &RangeValueDataType, &newValue);
	}
	VARIANT get_Value2()
	{
		VARIANT result;
		InvokeHelper(0x56c, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Value2(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x56c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_VerticalAlignment()
	{
		VARIANT result;
		InvokeHelper(0x89, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_VerticalAlignment(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x89, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Width()
	{
		VARIANT result;
		InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Worksheet()
	{
		LPDISPATCH result;
		InvokeHelper(0x15c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_WrapText()
	{
		VARIANT result;
		InvokeHelper(0x114, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_WrapText(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x114, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	LPDISPATCH AddComment(VARIANT& Text)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x56d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Text);
		return result;
	}
	LPDISPATCH get_Comment()
	{
		LPDISPATCH result;
		InvokeHelper(0x38e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ClearComments()
	{
		InvokeHelper(0x56e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_Phonetic()
	{
		LPDISPATCH result;
		InvokeHelper(0x56f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_FormatConditions()
	{
		LPDISPATCH result;
		InvokeHelper(0x570, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_ReadingOrder()
	{
		long result;
		InvokeHelper(0x3cf, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ReadingOrder(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x3cf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Hyperlinks()
	{
		LPDISPATCH result;
		InvokeHelper(0x571, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Phonetics()
	{
		LPDISPATCH result;
		InvokeHelper(0x713, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void SetPhonetic()
	{
		InvokeHelper(0x714, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_ID()
	{
		CString result;
		InvokeHelper(0x715, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ID(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x715, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT _PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6ec, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName);
		return result;
	}
	LPDISPATCH get_PivotCell()
	{
		LPDISPATCH result;
		InvokeHelper(0x7dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Dirty()
	{
		InvokeHelper(0x7de, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_Errors()
	{
		LPDISPATCH result;
		InvokeHelper(0x7df, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SmartTags()
	{
		LPDISPATCH result;
		InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Speak(VARIANT& SpeakDirection, VARIANT& SpeakFormulas)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x7e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &SpeakDirection, &SpeakFormulas);
	}
	VARIANT PasteSpecial(long Paste, long Operation, VARIANT& SkipBlanks, VARIANT& Transpose)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x788, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Paste, Operation, &SkipBlanks, &Transpose);
		return result;
	}
	BOOL get_AllowEdit()
	{
		BOOL result;
		InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ListObject()
	{
		LPDISPATCH result;
		InvokeHelper(0x8d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_XPath()
	{
		LPDISPATCH result;
		InvokeHelper(0x8d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ServerActions()
	{
		LPDISPATCH result;
		InvokeHelper(0x9bb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void RemoveDuplicates(VARIANT& Columns, long Header)
	{
		static BYTE parms[] = VTS_VARIANT VTS_I4;
		InvokeHelper(0x9bc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Columns, Header);
	}
	VARIANT PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x939, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName);
		return result;
	}
	CString get_MDX()
	{
		CString result;
		InvokeHelper(0x84b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void ExportAsFixedFormat(long Type, VARIANT& Filename, VARIANT& Quality, VARIANT& IncludeDocProperties, VARIANT& IgnorePrintAreas, VARIANT& From, VARIANT& To, VARIANT& OpenAfterPublish, VARIANT& FixedFormatExtClassPtr)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x9bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Type, &Filename, &Quality, &IncludeDocProperties, &IgnorePrintAreas, &From, &To, &OpenAfterPublish, &FixedFormatExtClassPtr);
	}
	VARIANT get_CountLarge()
	{
		VARIANT result;
		InvokeHelper(0x9c3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT CalculateRowMajorOrder()
	{
		VARIANT result;
		InvokeHelper(0x93c, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SparklineGroups()
	{
		LPDISPATCH result;
		InvokeHelper(0xb25, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ClearHyperlinks()
	{
		InvokeHelper(0xb26, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_DisplayFormat()
	{
		LPDISPATCH result;
		InvokeHelper(0x29a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT BorderAround(VARIANT& LineStyle, long Weight, long ColorIndex, VARIANT& Color, VARIANT& ThemeColor)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xad3, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &LineStyle, Weight, ColorIndex, &Color, &ThemeColor);
		return result;
	}
	void AllocateChanges()
	{
		InvokeHelper(0xb27, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void DiscardChanges()
	{
		InvokeHelper(0xb28, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// Range properties
public:

};


// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// CWorkbook wrapper class

class CWorkbook : public COleDispatchDriver
{
public:
	CWorkbook(){} // Calls COleDispatchDriver default constructor
	CWorkbook(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWorkbook(const CWorkbook& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// _Workbook methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_AcceptLabelsInFormulas()
	{
		BOOL result;
		InvokeHelper(0x5a1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AcceptLabelsInFormulas(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5a1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Activate()
	{
		InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_ActiveChart()
	{
		LPDISPATCH result;
		InvokeHelper(0xb7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveSheet()
	{
		LPDISPATCH result;
		InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Author()
	{
		CString result;
		InvokeHelper(0x23e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Author(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x23e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_AutoUpdateFrequency()
	{
		long result;
		InvokeHelper(0x5a2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AutoUpdateFrequency(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x5a2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AutoUpdateSaveChanges()
	{
		BOOL result;
		InvokeHelper(0x5a3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoUpdateSaveChanges(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5a3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ChangeHistoryDuration()
	{
		long result;
		InvokeHelper(0x5a4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ChangeHistoryDuration(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x5a4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_BuiltinDocumentProperties()
	{
		LPDISPATCH result;
		InvokeHelper(0x498, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ChangeFileAccess(long Mode, VARIANT& WritePassword, VARIANT& Notify)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x3dd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Mode, &WritePassword, &Notify);
	}
	void ChangeLink(LPCTSTR Name, LPCTSTR NewName, long Type)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_I4;
		InvokeHelper(0x322, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, NewName, Type);
	}
	LPDISPATCH get_Charts()
	{
		LPDISPATCH result;
		InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Close(VARIANT& SaveChanges, VARIANT& Filename, VARIANT& RouteWorkbook)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x115, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &SaveChanges, &Filename, &RouteWorkbook);
	}
	CString get_CodeName()
	{
		CString result;
		InvokeHelper(0x55d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get__CodeName()
	{
		CString result;
		InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put__CodeName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_Colors(VARIANT& Index)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x11e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &Index);
		return result;
	}
	void put_Colors(VARIANT& Index, VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x11e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &Index, &newValue);
	}
	LPDISPATCH get_CommandBars()
	{
		LPDISPATCH result;
		InvokeHelper(0x59f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Comments()
	{
		CString result;
		InvokeHelper(0x23f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Comments(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x23f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ConflictResolution()
	{
		long result;
		InvokeHelper(0x497, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ConflictResolution(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x497, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Container()
	{
		LPDISPATCH result;
		InvokeHelper(0x4a6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_CreateBackup()
	{
		BOOL result;
		InvokeHelper(0x11f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CustomDocumentProperties()
	{
		LPDISPATCH result;
		InvokeHelper(0x499, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_Date1904()
	{
		BOOL result;
		InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Date1904(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void DeleteNumberFormat(LPCTSTR NumberFormat)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x18d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, NumberFormat);
	}
	LPDISPATCH get_DialogSheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x2fc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_DisplayDrawingObjects()
	{
		long result;
		InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DisplayDrawingObjects(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL ExclusiveAccess()
	{
		BOOL result;
		InvokeHelper(0x490, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_FileFormat()
	{
		long result;
		InvokeHelper(0x120, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void ForwardMailer()
	{
		InvokeHelper(0x3cd, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_FullName()
	{
		CString result;
		InvokeHelper(0x121, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_HasMailer()
	{
		BOOL result;
		InvokeHelper(0x3d0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_HasMailer(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3d0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_HasPassword()
	{
		BOOL result;
		InvokeHelper(0x122, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_HasRoutingSlip()
	{
		BOOL result;
		InvokeHelper(0x3b6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_HasRoutingSlip(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3b6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_IsAddin()
	{
		BOOL result;
		InvokeHelper(0x5a5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_IsAddin(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5a5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Keywords()
	{
		CString result;
		InvokeHelper(0x241, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Keywords(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x241, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT LinkInfo(LPCTSTR Name, long LinkInfo, VARIANT& Type, VARIANT& EditionRef)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x327, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Name, LinkInfo, &Type, &EditionRef);
		return result;
	}
	VARIANT LinkSources(VARIANT& Type)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x328, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Type);
		return result;
	}
	LPDISPATCH get_Mailer()
	{
		LPDISPATCH result;
		InvokeHelper(0x3d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void MergeWorkbook(VARIANT& Filename)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x5a6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename);
	}
	LPDISPATCH get_Modules()
	{
		LPDISPATCH result;
		InvokeHelper(0x246, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_MultiUserEditing()
	{
		BOOL result;
		InvokeHelper(0x491, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Names()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ba, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH NewWindow()
	{
		LPDISPATCH result;
		InvokeHelper(0x118, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_OnSave()
	{
		CString result;
		InvokeHelper(0x49a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnSave(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x49a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnSheetActivate()
	{
		CString result;
		InvokeHelper(0x407, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnSheetActivate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x407, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnSheetDeactivate()
	{
		CString result;
		InvokeHelper(0x439, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnSheetDeactivate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x439, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void OpenLinks(LPCTSTR Name, VARIANT& ReadOnly, VARIANT& Type)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x323, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, &ReadOnly, &Type);
	}
	CString get_Path()
	{
		CString result;
		InvokeHelper(0x123, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_PersonalViewListSettings()
	{
		BOOL result;
		InvokeHelper(0x5a7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_PersonalViewListSettings(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5a7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_PersonalViewPrintSettings()
	{
		BOOL result;
		InvokeHelper(0x5a8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_PersonalViewPrintSettings(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5a8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH PivotCaches()
	{
		LPDISPATCH result;
		InvokeHelper(0x5a9, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Post(VARIANT& DestName)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x48e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &DestName);
	}
	BOOL get_PrecisionAsDisplayed()
	{
		BOOL result;
		InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_PrecisionAsDisplayed(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void __PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x389, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate);
	}
	void PrintPreview(VARIANT& EnableChanges)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x119, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &EnableChanges);
	}
	void _Protect(VARIANT& Password, VARIANT& Structure, VARIANT& Windows)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x11a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Password, &Structure, &Windows);
	}
	void _ProtectSharing(VARIANT& Filename, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& ReadOnlyRecommended, VARIANT& CreateBackup, VARIANT& SharingPassword)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x5aa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, &SharingPassword);
	}
	BOOL get_ProtectStructure()
	{
		BOOL result;
		InvokeHelper(0x24c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ProtectWindows()
	{
		BOOL result;
		InvokeHelper(0x127, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ReadOnly()
	{
		BOOL result;
		InvokeHelper(0x128, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get__ReadOnlyRecommended()
	{
		BOOL result;
		InvokeHelper(0x129, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void RefreshAll()
	{
		InvokeHelper(0x5ac, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Reply()
	{
		InvokeHelper(0x3d1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ReplyAll()
	{
		InvokeHelper(0x3d2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void RemoveUser(long Index)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x5ad, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Index);
	}
	long get_RevisionNumber()
	{
		long result;
		InvokeHelper(0x494, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void Route()
	{
		InvokeHelper(0x3b2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_Routed()
	{
		BOOL result;
		InvokeHelper(0x3b7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_RoutingSlip()
	{
		LPDISPATCH result;
		InvokeHelper(0x3b5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void RunAutoMacros(long Which)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x27a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Which);
	}
	void Save()
	{
		InvokeHelper(0x11b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void _SaveAs(VARIANT& Filename, VARIANT& FileFormat, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& ReadOnlyRecommended, VARIANT& CreateBackup, long AccessMode, VARIANT& ConflictResolution, VARIANT& AddToMru, VARIANT& TextCodepage, VARIANT& TextVisualLayout)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x11c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename, &FileFormat, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, AccessMode, &ConflictResolution, &AddToMru, &TextCodepage, &TextVisualLayout);
	}
	void SaveCopyAs(VARIANT& Filename)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xaf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename);
	}
	BOOL get_Saved()
	{
		BOOL result;
		InvokeHelper(0x12a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Saved(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x12a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SaveLinkValues()
	{
		BOOL result;
		InvokeHelper(0x196, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SaveLinkValues(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void SendMail(VARIANT& Recipients, VARIANT& Subject, VARIANT& ReturnReceipt)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x3b3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Recipients, &Subject, &ReturnReceipt);
	}
	void SendMailer(VARIANT& FileFormat, long Priority)
	{
		static BYTE parms[] = VTS_VARIANT VTS_I4;
		InvokeHelper(0x3d4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &FileFormat, Priority);
	}
	void SetLinkOnData(LPCTSTR Name, VARIANT& Procedure)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT;
		InvokeHelper(0x329, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, &Procedure);
	}
	LPDISPATCH get_Sheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x1e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_ShowConflictHistory()
	{
		BOOL result;
		InvokeHelper(0x493, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowConflictHistory(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x493, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Styles()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ed, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Subject()
	{
		CString result;
		InvokeHelper(0x3b9, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Subject(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x3b9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Title()
	{
		CString result;
		InvokeHelper(0xc7, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Title(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xc7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Unprotect(VARIANT& Password)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x11d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Password);
	}
	void UnprotectSharing(VARIANT& SharingPassword)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x5af, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &SharingPassword);
	}
	void UpdateFromFile()
	{
		InvokeHelper(0x3e3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void UpdateLink(VARIANT& Name, VARIANT& Type)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x324, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Name, &Type);
	}
	BOOL get_UpdateRemoteReferences()
	{
		BOOL result;
		InvokeHelper(0x19b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_UpdateRemoteReferences(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x19b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_UserControl()
	{
		BOOL result;
		InvokeHelper(0x4ba, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_UserControl(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4ba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_UserStatus()
	{
		VARIANT result;
		InvokeHelper(0x495, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CustomViews()
	{
		LPDISPATCH result;
		InvokeHelper(0x5b0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Windows()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ae, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Worksheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_WriteReserved()
	{
		BOOL result;
		InvokeHelper(0x12b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_WriteReservedBy()
	{
		CString result;
		InvokeHelper(0x12c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Excel4IntlMacroSheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x245, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Excel4MacroSheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x243, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_TemplateRemoveExtData()
	{
		BOOL result;
		InvokeHelper(0x5b1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_TemplateRemoveExtData(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5b1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void HighlightChangesOptions(VARIANT& When, VARIANT& Who, VARIANT& Where)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x5b2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &When, &Who, &Where);
	}
	BOOL get_HighlightChangesOnScreen()
	{
		BOOL result;
		InvokeHelper(0x5b5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_HighlightChangesOnScreen(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5b5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_KeepChangeHistory()
	{
		BOOL result;
		InvokeHelper(0x5b6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_KeepChangeHistory(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5b6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ListChangesOnNewSheet()
	{
		BOOL result;
		InvokeHelper(0x5b7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ListChangesOnNewSheet(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x5b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void PurgeChangeHistoryNow(long Days, VARIANT& SharingPassword)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT;
		InvokeHelper(0x5b8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Days, &SharingPassword);
	}
	void AcceptAllChanges(VARIANT& When, VARIANT& Who, VARIANT& Where)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x5ba, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &When, &Who, &Where);
	}
	void RejectAllChanges(VARIANT& When, VARIANT& Who, VARIANT& Where)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x5bb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &When, &Who, &Where);
	}
	void PivotTableWizard(VARIANT& SourceType, VARIANT& SourceData, VARIANT& TableDestination, VARIANT& TableName, VARIANT& RowGrand, VARIANT& ColumnGrand, VARIANT& SaveData, VARIANT& HasAutoFormat, VARIANT& AutoPage, VARIANT& Reserved, VARIANT& BackgroundQuery, VARIANT& OptimizeCache, VARIANT& PageFieldOrder, VARIANT& PageFieldWrapCount, VARIANT& ReadData, VARIANT& Connection)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x2ac, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &SourceType, &SourceData, &TableDestination, &TableName, &RowGrand, &ColumnGrand, &SaveData, &HasAutoFormat, &AutoPage, &Reserved, &BackgroundQuery, &OptimizeCache, &PageFieldOrder, &PageFieldWrapCount, &ReadData, &Connection);
	}
	void ResetColors()
	{
		InvokeHelper(0x5bc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_VBProject()
	{
		LPDISPATCH result;
		InvokeHelper(0x5bd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void FollowHyperlink(LPCTSTR Address, VARIANT& SubAddress, VARIANT& NewWindow, VARIANT& AddHistory, VARIANT& ExtraInfo, VARIANT& Method, VARIANT& HeaderInfo)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x5be, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Address, &SubAddress, &NewWindow, &AddHistory, &ExtraInfo, &Method, &HeaderInfo);
	}
	void AddToFavorites()
	{
		InvokeHelper(0x5c4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_IsInplace()
	{
		BOOL result;
		InvokeHelper(0x6e9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void _PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6ec, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName);
	}
	void WebPagePreview()
	{
		InvokeHelper(0x71a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_PublishObjects()
	{
		LPDISPATCH result;
		InvokeHelper(0x71b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_WebOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x71c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ReloadAs(long Encoding)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x71d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Encoding);
	}
	LPDISPATCH get_HTMLProject()
	{
		LPDISPATCH result;
		InvokeHelper(0x71f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_EnvelopeVisible()
	{
		BOOL result;
		InvokeHelper(0x720, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnvelopeVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x720, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CalculationVersion()
	{
		long result;
		InvokeHelper(0x70e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void Dummy17(long calcid)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x7fc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, calcid);
	}
	void sblt(LPCTSTR s)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x722, DISPATCH_METHOD, VT_EMPTY, NULL, parms, s);
	}
	BOOL get_VBASigned()
	{
		BOOL result;
		InvokeHelper(0x724, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ShowPivotTableFieldList()
	{
		BOOL result;
		InvokeHelper(0x7fe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowPivotTableFieldList(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7fe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_UpdateLinks()
	{
		long result;
		InvokeHelper(0x360, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_UpdateLinks(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x360, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void BreakLink(LPCTSTR Name, long Type)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4;
		InvokeHelper(0x7ff, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name, Type);
	}
	void Dummy16()
	{
		InvokeHelper(0x800, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SaveAs(VARIANT& Filename, VARIANT& FileFormat, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& ReadOnlyRecommended, VARIANT& CreateBackup, long AccessMode, VARIANT& ConflictResolution, VARIANT& AddToMru, VARIANT& TextCodepage, VARIANT& TextVisualLayout, VARIANT& Local)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x785, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename, &FileFormat, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, AccessMode, &ConflictResolution, &AddToMru, &TextCodepage, &TextVisualLayout, &Local);
	}
	BOOL get_EnableAutoRecover()
	{
		BOOL result;
		InvokeHelper(0x801, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableAutoRecover(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x801, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_RemovePersonalInformation()
	{
		BOOL result;
		InvokeHelper(0x802, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_RemovePersonalInformation(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x802, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_FullNameURLEncoded()
	{
		CString result;
		InvokeHelper(0x787, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void CheckIn(VARIANT& SaveChanges, VARIANT& Comments, VARIANT& MakePublic)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x803, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &SaveChanges, &Comments, &MakePublic);
	}
	BOOL CanCheckIn()
	{
		BOOL result;
		InvokeHelper(0x805, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SendForReview(VARIANT& Recipients, VARIANT& Subject, VARIANT& ShowMessage, VARIANT& IncludeAttachment)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x806, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Recipients, &Subject, &ShowMessage, &IncludeAttachment);
	}
	void ReplyWithChanges(VARIANT& ShowMessage)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x809, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &ShowMessage);
	}
	void EndReview()
	{
		InvokeHelper(0x80a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_Password()
	{
		CString result;
		InvokeHelper(0x1ad, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Password(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1ad, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_WritePassword()
	{
		CString result;
		InvokeHelper(0x468, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_WritePassword(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x468, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_PasswordEncryptionProvider()
	{
		CString result;
		InvokeHelper(0x80b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_PasswordEncryptionAlgorithm()
	{
		CString result;
		InvokeHelper(0x80c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_PasswordEncryptionKeyLength()
	{
		long result;
		InvokeHelper(0x80d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void SetPasswordEncryptionOptions(VARIANT& PasswordEncryptionProvider, VARIANT& PasswordEncryptionAlgorithm, VARIANT& PasswordEncryptionKeyLength, VARIANT& PasswordEncryptionFileProperties)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x80e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &PasswordEncryptionProvider, &PasswordEncryptionAlgorithm, &PasswordEncryptionKeyLength, &PasswordEncryptionFileProperties);
	}
	BOOL get_PasswordEncryptionFileProperties()
	{
		BOOL result;
		InvokeHelper(0x80f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ReadOnlyRecommended()
	{
		BOOL result;
		InvokeHelper(0x7d5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ReadOnlyRecommended(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7d5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Protect(VARIANT& Password, VARIANT& Structure, VARIANT& Windows)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x7ed, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Password, &Structure, &Windows);
	}
	LPDISPATCH get_SmartTagOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x810, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void RecheckSmartTags()
	{
		InvokeHelper(0x811, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_Permission()
	{
		LPDISPATCH result;
		InvokeHelper(0x8d8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SharedWorkspace()
	{
		LPDISPATCH result;
		InvokeHelper(0x8d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Sync()
	{
		LPDISPATCH result;
		InvokeHelper(0x8da, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void SendFaxOverInternet(VARIANT& Recipients, VARIANT& Subject, VARIANT& ShowMessage)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x8db, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Recipients, &Subject, &ShowMessage);
	}
	LPDISPATCH get_XmlNamespaces()
	{
		LPDISPATCH result;
		InvokeHelper(0x8dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_XmlMaps()
	{
		LPDISPATCH result;
		InvokeHelper(0x8dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long XmlImport(LPCTSTR Url, LPDISPATCH * ImportMap, VARIANT& Overwrite, VARIANT& Destination)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_PDISPATCH VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x8de, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Url, ImportMap, &Overwrite, &Destination);
		return result;
	}
	LPDISPATCH get_SmartDocument()
	{
		LPDISPATCH result;
		InvokeHelper(0x8e1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_DocumentLibraryVersions()
	{
		LPDISPATCH result;
		InvokeHelper(0x8e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_InactiveListBorderVisible()
	{
		BOOL result;
		InvokeHelper(0x8e3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_InactiveListBorderVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x8e3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayInkComments()
	{
		BOOL result;
		InvokeHelper(0x8e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayInkComments(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x8e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long XmlImportXml(LPCTSTR Data, LPDISPATCH * ImportMap, VARIANT& Overwrite, VARIANT& Destination)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_PDISPATCH VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x8e5, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Data, ImportMap, &Overwrite, &Destination);
		return result;
	}
	void SaveAsXMLData(LPCTSTR Filename, LPDISPATCH Map)
	{
		static BYTE parms[] = VTS_BSTR VTS_DISPATCH;
		InvokeHelper(0x8e6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename, Map);
	}
	void ToggleFormsDesign()
	{
		InvokeHelper(0x8e7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_ContentTypeProperties()
	{
		LPDISPATCH result;
		InvokeHelper(0x9d0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Connections()
	{
		LPDISPATCH result;
		InvokeHelper(0x9d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void RemoveDocumentInformation(long RemoveDocInfoType)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x9d2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, RemoveDocInfoType);
	}
	LPDISPATCH get_Signatures()
	{
		LPDISPATCH result;
		InvokeHelper(0x9d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void CheckInWithVersion(VARIANT& SaveChanges, VARIANT& Comments, VARIANT& MakePublic, VARIANT& VersionType)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x9d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &SaveChanges, &Comments, &MakePublic, &VersionType);
	}
	LPDISPATCH get_ServerPolicy()
	{
		LPDISPATCH result;
		InvokeHelper(0x9d7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void LockServerFile()
	{
		InvokeHelper(0x9d8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_DocumentInspectors()
	{
		LPDISPATCH result;
		InvokeHelper(0x9d9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetWorkflowTasks()
	{
		LPDISPATCH result;
		InvokeHelper(0x9da, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH GetWorkflowTemplates()
	{
		LPDISPATCH result;
		InvokeHelper(0x9db, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName, VARIANT& IgnorePrintAreas)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x939, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName, &IgnorePrintAreas);
	}
	LPDISPATCH get_ServerViewableItems()
	{
		LPDISPATCH result;
		InvokeHelper(0x9dc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_TableStyles()
	{
		LPDISPATCH result;
		InvokeHelper(0x9dd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_DefaultTableStyle()
	{
		VARIANT result;
		InvokeHelper(0x9de, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_DefaultTableStyle(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x9de, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_DefaultPivotTableStyle()
	{
		VARIANT result;
		InvokeHelper(0x9df, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_DefaultPivotTableStyle(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x9df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	BOOL get_CheckCompatibility()
	{
		BOOL result;
		InvokeHelper(0x9e0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CheckCompatibility(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x9e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_HasVBProject()
	{
		BOOL result;
		InvokeHelper(0x9e1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CustomXMLParts()
	{
		LPDISPATCH result;
		InvokeHelper(0x9e2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_Final()
	{
		BOOL result;
		InvokeHelper(0x9e3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Final(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x9e3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Research()
	{
		LPDISPATCH result;
		InvokeHelper(0x9e4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Theme()
	{
		LPDISPATCH result;
		InvokeHelper(0x9e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ApplyTheme(LPCTSTR Filename)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9e6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename);
	}
	BOOL get_Excel8CompatibilityMode()
	{
		BOOL result;
		InvokeHelper(0x9e7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ConnectionsDisabled()
	{
		BOOL result;
		InvokeHelper(0x9e8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void EnableConnections()
	{
		InvokeHelper(0x9e9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_ShowPivotChartActiveFields()
	{
		BOOL result;
		InvokeHelper(0x9ea, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowPivotChartActiveFields(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x9ea, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void ExportAsFixedFormat(long Type, VARIANT& Filename, VARIANT& Quality, VARIANT& IncludeDocProperties, VARIANT& IgnorePrintAreas, VARIANT& From, VARIANT& To, VARIANT& OpenAfterPublish, VARIANT& FixedFormatExtClassPtr)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x9bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Type, &Filename, &Quality, &IncludeDocProperties, &IgnorePrintAreas, &From, &To, &OpenAfterPublish, &FixedFormatExtClassPtr);
	}
	LPDISPATCH get_IconSets()
	{
		LPDISPATCH result;
		InvokeHelper(0x9eb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_EncryptionProvider()
	{
		CString result;
		InvokeHelper(0x9ec, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_EncryptionProvider(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x9ec, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DoNotPromptForConvert()
	{
		BOOL result;
		InvokeHelper(0x9ed, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DoNotPromptForConvert(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x9ed, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ForceFullCalculation()
	{
		BOOL result;
		InvokeHelper(0x9ee, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ForceFullCalculation(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x9ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void ProtectSharing(VARIANT& Filename, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& ReadOnlyRecommended, VARIANT& CreateBackup, VARIANT& SharingPassword, VARIANT& FileFormat)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x9ef, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, &SharingPassword, &FileFormat);
	}
	LPDISPATCH get_SlicerCaches()
	{
		LPDISPATCH result;
		InvokeHelper(0xb32, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveSlicer()
	{
		LPDISPATCH result;
		InvokeHelper(0xb33, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_DefaultSlicerStyle()
	{
		VARIANT result;
		InvokeHelper(0xb34, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_DefaultSlicerStyle(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xb34, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	void Dummy26()
	{
		InvokeHelper(0xb35, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Dummy27()
	{
		InvokeHelper(0xb36, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_AccuracyVersion()
	{
		long result;
		InvokeHelper(0xb37, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AccuracyVersion(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xb37, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// _Workbook properties
public:

};

// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard


// CWorkbooks wrapper class

class CWorkbooks : public COleDispatchDriver
{
public:
	CWorkbooks(){} // Calls COleDispatchDriver default constructor
	CWorkbooks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWorkbooks(const CWorkbooks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Workbooks methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Add(VARIANT& Template)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Template);
		return result;
	}
	void Close()
	{
		InvokeHelper(0x115, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Item(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH _Open(LPCTSTR Filename, VARIANT& UpdateLinks, VARIANT& ReadOnly, VARIANT& Format, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& IgnoreReadOnlyRecommended, VARIANT& Origin, VARIANT& Delimiter, VARIANT& Editable, VARIANT& Notify, VARIANT& Converter, VARIANT& AddToMru)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x2aa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Filename, &UpdateLinks, &ReadOnly, &Format, &Password, &WriteResPassword, &IgnoreReadOnlyRecommended, &Origin, &Delimiter, &Editable, &Notify, &Converter, &AddToMru);
		return result;
	}
	void __OpenText(LPCTSTR Filename, VARIANT& Origin, VARIANT& StartRow, VARIANT& DataType, long TextQualifier, VARIANT& ConsecutiveDelimiter, VARIANT& Tab, VARIANT& Semicolon, VARIANT& Comma, VARIANT& Space, VARIANT& Other, VARIANT& OtherChar, VARIANT& FieldInfo, VARIANT& TextVisualLayout)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x2ab, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename, &Origin, &StartRow, &DataType, TextQualifier, &ConsecutiveDelimiter, &Tab, &Semicolon, &Comma, &Space, &Other, &OtherChar, &FieldInfo, &TextVisualLayout);
	}
	LPDISPATCH get__Default(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	void _OpenText(LPCTSTR Filename, VARIANT& Origin, VARIANT& StartRow, VARIANT& DataType, long TextQualifier, VARIANT& ConsecutiveDelimiter, VARIANT& Tab, VARIANT& Semicolon, VARIANT& Comma, VARIANT& Space, VARIANT& Other, VARIANT& OtherChar, VARIANT& FieldInfo, VARIANT& TextVisualLayout, VARIANT& DecimalSeparator, VARIANT& ThousandsSeparator)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6ed, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename, &Origin, &StartRow, &DataType, TextQualifier, &ConsecutiveDelimiter, &Tab, &Semicolon, &Comma, &Space, &Other, &OtherChar, &FieldInfo, &TextVisualLayout, &DecimalSeparator, &ThousandsSeparator);
	}
	LPDISPATCH Open(LPCTSTR Filename, VARIANT& UpdateLinks, VARIANT& ReadOnly, VARIANT& Format, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& IgnoreReadOnlyRecommended, VARIANT& Origin, VARIANT& Delimiter, VARIANT& Editable, VARIANT& Notify, VARIANT& Converter, VARIANT& AddToMru, VARIANT& Local, VARIANT& CorruptLoad)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x783, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Filename, &UpdateLinks, &ReadOnly, &Format, &Password, &WriteResPassword, &IgnoreReadOnlyRecommended, &Origin, &Delimiter, &Editable, &Notify, &Converter, &AddToMru, &Local, &CorruptLoad);
		return result;
	}
	void OpenText(LPCTSTR Filename, VARIANT& Origin, VARIANT& StartRow, VARIANT& DataType, long TextQualifier, VARIANT& ConsecutiveDelimiter, VARIANT& Tab, VARIANT& Semicolon, VARIANT& Comma, VARIANT& Space, VARIANT& Other, VARIANT& OtherChar, VARIANT& FieldInfo, VARIANT& TextVisualLayout, VARIANT& DecimalSeparator, VARIANT& ThousandsSeparator, VARIANT& TrailingMinusNumbers, VARIANT& Local)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x784, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename, &Origin, &StartRow, &DataType, TextQualifier, &ConsecutiveDelimiter, &Tab, &Semicolon, &Comma, &Space, &Other, &OtherChar, &FieldInfo, &TextVisualLayout, &DecimalSeparator, &ThousandsSeparator, &TrailingMinusNumbers, &Local);
	}
	LPDISPATCH OpenDatabase(LPCTSTR Filename, VARIANT& CommandText, VARIANT& CommandType, VARIANT& BackgroundQuery, VARIANT& ImportDataAs)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x813, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Filename, &CommandText, &CommandType, &BackgroundQuery, &ImportDataAs);
		return result;
	}
	void CheckOut(LPCTSTR Filename)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x815, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename);
	}
	BOOL CanCheckOut(LPCTSTR Filename)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x816, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Filename);
		return result;
	}
	LPDISPATCH _OpenXML(LPCTSTR Filename, VARIANT& Stylesheets)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT;
		InvokeHelper(0x817, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Filename, &Stylesheets);
		return result;
	}
	LPDISPATCH OpenXML(LPCTSTR Filename, VARIANT& Stylesheets, VARIANT& LoadOption)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x8e8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Filename, &Stylesheets, &LoadOption);
		return result;
	}

	// Workbooks properties
public:

};

// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// CWorksheet wrapper class

class CWorksheet : public COleDispatchDriver
{
public:
	CWorksheet(){} // Calls COleDispatchDriver default constructor
	CWorksheet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWorksheet(const CWorksheet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// _Worksheet methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Activate()
	{
		InvokeHelper(0x130, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Copy(VARIANT& Before, VARIANT& After)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x227, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Before, &After);
	}
	void Delete()
	{
		InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_CodeName()
	{
		CString result;
		InvokeHelper(0x55d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get__CodeName()
	{
		CString result;
		InvokeHelper(0x80010000, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put__CodeName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x80010000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Index()
	{
		long result;
		InvokeHelper(0x1e6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void Move(VARIANT& Before, VARIANT& After)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x27d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Before, &After);
	}
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Name(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Next()
	{
		LPDISPATCH result;
		InvokeHelper(0x1f6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_OnDoubleClick()
	{
		CString result;
		InvokeHelper(0x274, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnDoubleClick(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x274, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnSheetActivate()
	{
		CString result;
		InvokeHelper(0x407, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnSheetActivate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x407, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnSheetDeactivate()
	{
		CString result;
		InvokeHelper(0x439, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnSheetDeactivate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x439, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_PageSetup()
	{
		LPDISPATCH result;
		InvokeHelper(0x3e6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Previous()
	{
		LPDISPATCH result;
		InvokeHelper(0x1f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void __PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x389, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate);
	}
	void PrintPreview(VARIANT& EnableChanges)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x119, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &EnableChanges);
	}
	void _Protect(VARIANT& Password, VARIANT& DrawingObjects, VARIANT& Contents, VARIANT& Scenarios, VARIANT& UserInterfaceOnly)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x11a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Password, &DrawingObjects, &Contents, &Scenarios, &UserInterfaceOnly);
	}
	BOOL get_ProtectContents()
	{
		BOOL result;
		InvokeHelper(0x124, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ProtectDrawingObjects()
	{
		BOOL result;
		InvokeHelper(0x125, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ProtectionMode()
	{
		BOOL result;
		InvokeHelper(0x487, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_ProtectScenarios()
	{
		BOOL result;
		InvokeHelper(0x126, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void _SaveAs(LPCTSTR Filename, VARIANT& FileFormat, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& ReadOnlyRecommended, VARIANT& CreateBackup, VARIANT& AddToMru, VARIANT& TextCodepage, VARIANT& TextVisualLayout)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x11c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename, &FileFormat, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, &AddToMru, &TextCodepage, &TextVisualLayout);
	}
	void Select(VARIANT& Replace)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Replace);
	}
	void Unprotect(VARIANT& Password)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x11d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Password);
	}
	long get_Visible()
	{
		long result;
		InvokeHelper(0x22e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Visible(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x22e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Shapes()
	{
		LPDISPATCH result;
		InvokeHelper(0x561, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_TransitionExpEval()
	{
		BOOL result;
		InvokeHelper(0x191, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_TransitionExpEval(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x191, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH Arcs(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x2f8, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	BOOL get_AutoFilterMode()
	{
		BOOL result;
		InvokeHelper(0x318, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoFilterMode(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x318, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void SetBackgroundPicture(LPCTSTR Filename)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x4a4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename);
	}
	LPDISPATCH Buttons(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x22d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	void Calculate()
	{
		InvokeHelper(0x117, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_EnableCalculation()
	{
		BOOL result;
		InvokeHelper(0x590, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableCalculation(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x590, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Cells()
	{
		LPDISPATCH result;
		InvokeHelper(0xee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH ChartObjects(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x424, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH CheckBoxes(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x338, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	void CheckSpelling(VARIANT& CustomDictionary, VARIANT& IgnoreUppercase, VARIANT& AlwaysSuggest, VARIANT& SpellLang)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1f9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &CustomDictionary, &IgnoreUppercase, &AlwaysSuggest, &SpellLang);
	}
	LPDISPATCH get_CircularReference()
	{
		LPDISPATCH result;
		InvokeHelper(0x42d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ClearArrows()
	{
		InvokeHelper(0x3ca, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_Columns()
	{
		LPDISPATCH result;
		InvokeHelper(0xf1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_ConsolidationFunction()
	{
		long result;
		InvokeHelper(0x315, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT get_ConsolidationOptions()
	{
		VARIANT result;
		InvokeHelper(0x316, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT get_ConsolidationSources()
	{
		VARIANT result;
		InvokeHelper(0x317, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	BOOL get_DisplayAutomaticPageBreaks()
	{
		BOOL result;
		InvokeHelper(0x283, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayAutomaticPageBreaks(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x283, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH Drawings(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x304, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH DrawingObjects(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x58, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH DropDowns(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x344, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	BOOL get_EnableAutoFilter()
	{
		BOOL result;
		InvokeHelper(0x484, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableAutoFilter(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x484, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_EnableSelection()
	{
		long result;
		InvokeHelper(0x591, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_EnableSelection(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x591, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableOutlining()
	{
		BOOL result;
		InvokeHelper(0x485, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableOutlining(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x485, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnablePivotTable()
	{
		BOOL result;
		InvokeHelper(0x486, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnablePivotTable(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x486, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT Evaluate(VARIANT& Name)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Name);
		return result;
	}
	VARIANT _Evaluate(VARIANT& Name)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xfffffffb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Name);
		return result;
	}
	BOOL get_FilterMode()
	{
		BOOL result;
		InvokeHelper(0x320, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void ResetAllPageBreaks()
	{
		InvokeHelper(0x592, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH GroupBoxes(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x342, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH GroupObjects(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x459, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH Labels(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x349, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH Lines(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x2ff, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH ListBoxes(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x340, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH get_Names()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ba, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH OLEObjects(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x31f, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	CString get_OnCalculate()
	{
		CString result;
		InvokeHelper(0x271, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnCalculate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x271, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnData()
	{
		CString result;
		InvokeHelper(0x275, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnData(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x275, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnEntry()
	{
		CString result;
		InvokeHelper(0x273, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnEntry(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x273, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH OptionButtons(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x33a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH get_Outline()
	{
		LPDISPATCH result;
		InvokeHelper(0x66, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Ovals(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x321, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	void Paste(VARIANT& Destination, VARIANT& Link)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xd3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Destination, &Link);
	}
	void _PasteSpecial(VARIANT& Format, VARIANT& Link, VARIANT& DisplayAsIcon, VARIANT& IconFileName, VARIANT& IconIndex, VARIANT& IconLabel)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x403, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Format, &Link, &DisplayAsIcon, &IconFileName, &IconIndex, &IconLabel);
	}
	LPDISPATCH Pictures(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x303, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH PivotTables(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x2b2, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH PivotTableWizard(VARIANT& SourceType, VARIANT& SourceData, VARIANT& TableDestination, VARIANT& TableName, VARIANT& RowGrand, VARIANT& ColumnGrand, VARIANT& SaveData, VARIANT& HasAutoFormat, VARIANT& AutoPage, VARIANT& Reserved, VARIANT& BackgroundQuery, VARIANT& OptimizeCache, VARIANT& PageFieldOrder, VARIANT& PageFieldWrapCount, VARIANT& ReadData, VARIANT& Connection)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x2ac, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &SourceType, &SourceData, &TableDestination, &TableName, &RowGrand, &ColumnGrand, &SaveData, &HasAutoFormat, &AutoPage, &Reserved, &BackgroundQuery, &OptimizeCache, &PageFieldOrder, &PageFieldWrapCount, &ReadData, &Connection);
		return result;
	}
	LPDISPATCH get_Range(VARIANT& Cell1, VARIANT& Cell2)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Cell1, &Cell2);
		return result;
	}
	LPDISPATCH Rectangles(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x306, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	LPDISPATCH get_Rows()
	{
		LPDISPATCH result;
		InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Scenarios(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x38c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	CString get_ScrollArea()
	{
		CString result;
		InvokeHelper(0x599, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ScrollArea(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x599, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH ScrollBars(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x33e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	void ShowAllData()
	{
		InvokeHelper(0x31a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ShowDataForm()
	{
		InvokeHelper(0x199, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH Spinners(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x346, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	double get_StandardHeight()
	{
		double result;
		InvokeHelper(0x197, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_StandardWidth()
	{
		double result;
		InvokeHelper(0x198, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_StandardWidth(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x198, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH TextBoxes(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x309, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	BOOL get_TransitionFormEntry()
	{
		BOOL result;
		InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_TransitionFormEntry(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x192, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Type()
	{
		long result;
		InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_UsedRange()
	{
		LPDISPATCH result;
		InvokeHelper(0x19c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_HPageBreaks()
	{
		LPDISPATCH result;
		InvokeHelper(0x58a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_VPageBreaks()
	{
		LPDISPATCH result;
		InvokeHelper(0x58b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_QueryTables()
	{
		LPDISPATCH result;
		InvokeHelper(0x59a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_DisplayPageBreaks()
	{
		BOOL result;
		InvokeHelper(0x59b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayPageBreaks(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x59b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Comments()
	{
		LPDISPATCH result;
		InvokeHelper(0x23f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Hyperlinks()
	{
		LPDISPATCH result;
		InvokeHelper(0x571, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ClearCircles()
	{
		InvokeHelper(0x59c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void CircleInvalid()
	{
		InvokeHelper(0x59d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get__DisplayRightToLeft()
	{
		long result;
		InvokeHelper(0x288, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put__DisplayRightToLeft(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x288, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_AutoFilter()
	{
		LPDISPATCH result;
		InvokeHelper(0x319, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_DisplayRightToLeft()
	{
		BOOL result;
		InvokeHelper(0x6ee, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayRightToLeft(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x6ee, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Scripts()
	{
		LPDISPATCH result;
		InvokeHelper(0x718, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void _PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6ec, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName);
	}
	void _CheckSpelling(VARIANT& CustomDictionary, VARIANT& IgnoreUppercase, VARIANT& AlwaysSuggest, VARIANT& SpellLang, VARIANT& IgnoreFinalYaa, VARIANT& SpellScript)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x719, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &CustomDictionary, &IgnoreUppercase, &AlwaysSuggest, &SpellLang, &IgnoreFinalYaa, &SpellScript);
	}
	LPDISPATCH get_Tab()
	{
		LPDISPATCH result;
		InvokeHelper(0x411, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_MailEnvelope()
	{
		LPDISPATCH result;
		InvokeHelper(0x7e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void SaveAs(LPCTSTR Filename, VARIANT& FileFormat, VARIANT& Password, VARIANT& WriteResPassword, VARIANT& ReadOnlyRecommended, VARIANT& CreateBackup, VARIANT& AddToMru, VARIANT& TextCodepage, VARIANT& TextVisualLayout, VARIANT& Local)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x785, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename, &FileFormat, &Password, &WriteResPassword, &ReadOnlyRecommended, &CreateBackup, &AddToMru, &TextCodepage, &TextVisualLayout, &Local);
	}
	LPDISPATCH get_CustomProperties()
	{
		LPDISPATCH result;
		InvokeHelper(0x7ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SmartTags()
	{
		LPDISPATCH result;
		InvokeHelper(0x7e0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Protection()
	{
		LPDISPATCH result;
		InvokeHelper(0xb0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void PasteSpecial(VARIANT& Format, VARIANT& Link, VARIANT& DisplayAsIcon, VARIANT& IconFileName, VARIANT& IconIndex, VARIANT& IconLabel, VARIANT& NoHTMLFormatting)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x788, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Format, &Link, &DisplayAsIcon, &IconFileName, &IconIndex, &IconLabel, &NoHTMLFormatting);
	}
	void Protect(VARIANT& Password, VARIANT& DrawingObjects, VARIANT& Contents, VARIANT& Scenarios, VARIANT& UserInterfaceOnly, VARIANT& AllowFormattingCells, VARIANT& AllowFormattingColumns, VARIANT& AllowFormattingRows, VARIANT& AllowInsertingColumns, VARIANT& AllowInsertingRows, VARIANT& AllowInsertingHyperlinks, VARIANT& AllowDeletingColumns, VARIANT& AllowDeletingRows, VARIANT& AllowSorting, VARIANT& AllowFiltering, VARIANT& AllowUsingPivotTables)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x7ed, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Password, &DrawingObjects, &Contents, &Scenarios, &UserInterfaceOnly, &AllowFormattingCells, &AllowFormattingColumns, &AllowFormattingRows, &AllowInsertingColumns, &AllowInsertingRows, &AllowInsertingHyperlinks, &AllowDeletingColumns, &AllowDeletingRows, &AllowSorting, &AllowFiltering, &AllowUsingPivotTables);
	}
	LPDISPATCH get_ListObjects()
	{
		LPDISPATCH result;
		InvokeHelper(0x8d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH XmlDataQuery(LPCTSTR XPath, VARIANT& SelectionNamespaces, VARIANT& Map)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x8d4, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, XPath, &SelectionNamespaces, &Map);
		return result;
	}
	LPDISPATCH XmlMapQuery(LPCTSTR XPath, VARIANT& SelectionNamespaces, VARIANT& Map)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x8d7, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, XPath, &SelectionNamespaces, &Map);
		return result;
	}
	void PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName, VARIANT& IgnorePrintAreas)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x939, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName, &IgnorePrintAreas);
	}
	BOOL get_EnableFormatConditionsCalculation()
	{
		BOOL result;
		InvokeHelper(0x9cf, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableFormatConditionsCalculation(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x9cf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Sort()
	{
		LPDISPATCH result;
		InvokeHelper(0x370, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ExportAsFixedFormat(long Type, VARIANT& Filename, VARIANT& Quality, VARIANT& IncludeDocProperties, VARIANT& IgnorePrintAreas, VARIANT& From, VARIANT& To, VARIANT& OpenAfterPublish, VARIANT& FixedFormatExtClassPtr)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x9bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Type, &Filename, &Quality, &IncludeDocProperties, &IgnorePrintAreas, &From, &To, &OpenAfterPublish, &FixedFormatExtClassPtr);
	}
	long get_PrintedCommentPages()
	{
		long result;
		InvokeHelper(0xb29, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}

	// _Worksheet properties
public:

};

// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// CWorksheets wrapper class

class CWorksheets : public COleDispatchDriver
{
public:
	CWorksheets(){} // Calls COleDispatchDriver default constructor
	CWorksheets(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWorksheets(const CWorksheets& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Worksheets methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Add(VARIANT& Before, VARIANT& After, VARIANT& Count, VARIANT& Type)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Before, &After, &Count, &Type);
		return result;
	}
	void Copy(VARIANT& Before, VARIANT& After)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x227, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Before, &After);
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void Delete()
	{
		InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void FillAcrossSheets(LPDISPATCH Range, long Type)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4;
		InvokeHelper(0x1d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Range, Type);
	}
	LPDISPATCH get_Item(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	void Move(VARIANT& Before, VARIANT& After)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x27d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Before, &After);
	}
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	void __PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x389, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate);
	}
	void PrintPreview(VARIANT& EnableChanges)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x119, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &EnableChanges);
	}
	void Select(VARIANT& Replace)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xeb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Replace);
	}
	LPDISPATCH get_HPageBreaks()
	{
		LPDISPATCH result;
		InvokeHelper(0x58a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_VPageBreaks()
	{
		LPDISPATCH result;
		InvokeHelper(0x58b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Visible()
	{
		VARIANT result;
		InvokeHelper(0x22e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Visible(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x22e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	LPDISPATCH get__Default(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	void _PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6ec, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName);
	}
	void PrintOut(VARIANT& From, VARIANT& To, VARIANT& Copies, VARIANT& Preview, VARIANT& ActivePrinter, VARIANT& PrintToFile, VARIANT& Collate, VARIANT& PrToFileName, VARIANT& IgnorePrintAreas)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x939, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &From, &To, &Copies, &Preview, &ActivePrinter, &PrintToFile, &Collate, &PrToFileName, &IgnorePrintAreas);
	}

	// Worksheets properties
public:

};

// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// CApplication wrapper class

class CApplication : public COleDispatchDriver
{
public:
	CApplication(){} // Calls COleDispatchDriver default constructor
	CApplication(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CApplication(const CApplication& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// _Application methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveCell()
	{
		LPDISPATCH result;
		InvokeHelper(0x131, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveChart()
	{
		LPDISPATCH result;
		InvokeHelper(0xb7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveDialog()
	{
		LPDISPATCH result;
		InvokeHelper(0x32f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveMenuBar()
	{
		LPDISPATCH result;
		InvokeHelper(0x2f6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_ActivePrinter()
	{
		CString result;
		InvokeHelper(0x132, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ActivePrinter(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_ActiveSheet()
	{
		LPDISPATCH result;
		InvokeHelper(0x133, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveWindow()
	{
		LPDISPATCH result;
		InvokeHelper(0x2f7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveWorkbook()
	{
		LPDISPATCH result;
		InvokeHelper(0x134, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_AddIns()
	{
		LPDISPATCH result;
		InvokeHelper(0x225, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Assistant()
	{
		LPDISPATCH result;
		InvokeHelper(0x59e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Calculate()
	{
		InvokeHelper(0x117, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH get_Cells()
	{
		LPDISPATCH result;
		InvokeHelper(0xee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Charts()
	{
		LPDISPATCH result;
		InvokeHelper(0x79, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Columns()
	{
		LPDISPATCH result;
		InvokeHelper(0xf1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_CommandBars()
	{
		LPDISPATCH result;
		InvokeHelper(0x59f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_DDEAppReturnCode()
	{
		long result;
		InvokeHelper(0x14c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void DDEExecute(long Channel, LPCTSTR String)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x14d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Channel, String);
	}
	long DDEInitiate(LPCTSTR App, LPCTSTR Topic)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x14e, DISPATCH_METHOD, VT_I4, (void*)&result, parms, App, Topic);
		return result;
	}
	void DDEPoke(long Channel, VARIANT& Item, VARIANT& Data)
	{
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x14f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Channel, &Item, &Data);
	}
	VARIANT DDERequest(long Channel, LPCTSTR Item)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_BSTR;
		InvokeHelper(0x150, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Channel, Item);
		return result;
	}
	void DDETerminate(long Channel)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x151, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Channel);
	}
	LPDISPATCH get_DialogSheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x2fc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT Evaluate(VARIANT& Name)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Name);
		return result;
	}
	VARIANT _Evaluate(VARIANT& Name)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xfffffffb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Name);
		return result;
	}
	VARIANT ExecuteExcel4Macro(LPCTSTR String)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x15e, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, String);
		return result;
	}
	LPDISPATCH Intersect(LPDISPATCH Arg1, LPDISPATCH Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15, VARIANT& Arg16, VARIANT& Arg17, VARIANT& Arg18, VARIANT& Arg19, VARIANT& Arg20, VARIANT& Arg21, VARIANT& Arg22, VARIANT& Arg23, VARIANT& Arg24, VARIANT& Arg25, VARIANT& Arg26, VARIANT& Arg27, VARIANT& Arg28, VARIANT& Arg29, VARIANT& Arg30)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH VTS_DISPATCH VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x2fe, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Arg1, Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
		return result;
	}
	LPDISPATCH get_MenuBars()
	{
		LPDISPATCH result;
		InvokeHelper(0x24d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Modules()
	{
		LPDISPATCH result;
		InvokeHelper(0x246, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Names()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ba, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Range(VARIANT& Cell1, VARIANT& Cell2)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, &Cell1, &Cell2);
		return result;
	}
	LPDISPATCH get_Rows()
	{
		LPDISPATCH result;
		InvokeHelper(0x102, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT Run(VARIANT& Macro, VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15, VARIANT& Arg16, VARIANT& Arg17, VARIANT& Arg18, VARIANT& Arg19, VARIANT& Arg20, VARIANT& Arg21, VARIANT& Arg22, VARIANT& Arg23, VARIANT& Arg24, VARIANT& Arg25, VARIANT& Arg26, VARIANT& Arg27, VARIANT& Arg28, VARIANT& Arg29, VARIANT& Arg30)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x103, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Macro, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
		return result;
	}
	VARIANT _Run2(VARIANT& Macro, VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15, VARIANT& Arg16, VARIANT& Arg17, VARIANT& Arg18, VARIANT& Arg19, VARIANT& Arg20, VARIANT& Arg21, VARIANT& Arg22, VARIANT& Arg23, VARIANT& Arg24, VARIANT& Arg25, VARIANT& Arg26, VARIANT& Arg27, VARIANT& Arg28, VARIANT& Arg29, VARIANT& Arg30)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x326, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Macro, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
		return result;
	}
	LPDISPATCH get_Selection()
	{
		LPDISPATCH result;
		InvokeHelper(0x93, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void SendKeys(VARIANT& Keys, VARIANT& Wait)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x17f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Keys, &Wait);
	}
	LPDISPATCH get_Sheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x1e5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ShortcutMenus(long Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x308, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, Index);
		return result;
	}
	LPDISPATCH get_ThisWorkbook()
	{
		LPDISPATCH result;
		InvokeHelper(0x30a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Toolbars()
	{
		LPDISPATCH result;
		InvokeHelper(0x228, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Union(LPDISPATCH Arg1, LPDISPATCH Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15, VARIANT& Arg16, VARIANT& Arg17, VARIANT& Arg18, VARIANT& Arg19, VARIANT& Arg20, VARIANT& Arg21, VARIANT& Arg22, VARIANT& Arg23, VARIANT& Arg24, VARIANT& Arg25, VARIANT& Arg26, VARIANT& Arg27, VARIANT& Arg28, VARIANT& Arg29, VARIANT& Arg30)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH VTS_DISPATCH VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x30b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Arg1, Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
		return result;
	}
	LPDISPATCH get_Windows()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ae, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Workbooks()
	{
		LPDISPATCH result;
		InvokeHelper(0x23c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_WorksheetFunction()
	{
		LPDISPATCH result;
		InvokeHelper(0x5a0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Worksheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x1ee, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Excel4IntlMacroSheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x245, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Excel4MacroSheets()
	{
		LPDISPATCH result;
		InvokeHelper(0x243, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void ActivateMicrosoftApp(long Index)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x447, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Index);
	}
	void AddChartAutoFormat(VARIANT& Chart, LPCTSTR Name, VARIANT& Description)
	{
		static BYTE parms[] = VTS_VARIANT VTS_BSTR VTS_VARIANT;
		InvokeHelper(0xd8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Chart, Name, &Description);
	}
	void AddCustomList(VARIANT& ListArray, VARIANT& ByRow)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x30c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &ListArray, &ByRow);
	}
	BOOL get_AlertBeforeOverwriting()
	{
		BOOL result;
		InvokeHelper(0x3a2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AlertBeforeOverwriting(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3a2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_AltStartupPath()
	{
		CString result;
		InvokeHelper(0x139, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_AltStartupPath(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AskToUpdateLinks()
	{
		BOOL result;
		InvokeHelper(0x3e0, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AskToUpdateLinks(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3e0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableAnimations()
	{
		BOOL result;
		InvokeHelper(0x49c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableAnimations(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x49c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_AutoCorrect()
	{
		LPDISPATCH result;
		InvokeHelper(0x479, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Build()
	{
		long result;
		InvokeHelper(0x13a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_CalculateBeforeSave()
	{
		BOOL result;
		InvokeHelper(0x13b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CalculateBeforeSave(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x13b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Calculation()
	{
		long result;
		InvokeHelper(0x13c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Calculation(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x13c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_Caller(VARIANT& Index)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x13d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &Index);
		return result;
	}
	BOOL get_CanPlaySounds()
	{
		BOOL result;
		InvokeHelper(0x13e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_CanRecordSounds()
	{
		BOOL result;
		InvokeHelper(0x13f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_Caption()
	{
		CString result;
		InvokeHelper(0x8b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Caption(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x8b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_CellDragAndDrop()
	{
		BOOL result;
		InvokeHelper(0x140, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CellDragAndDrop(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x140, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double CentimetersToPoints(double Centimeters)
	{
		double result;
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x43e, DISPATCH_METHOD, VT_R8, (void*)&result, parms, Centimeters);
		return result;
	}
	BOOL CheckSpelling(LPCTSTR Word, VARIANT& CustomDictionary, VARIANT& IgnoreUppercase)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1f9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Word, &CustomDictionary, &IgnoreUppercase);
		return result;
	}
	VARIANT get_ClipboardFormats(VARIANT& Index)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x141, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &Index);
		return result;
	}
	BOOL get_DisplayClipboardWindow()
	{
		BOOL result;
		InvokeHelper(0x142, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayClipboardWindow(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x142, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ColorButtons()
	{
		BOOL result;
		InvokeHelper(0x16d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ColorButtons(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CommandUnderlines()
	{
		long result;
		InvokeHelper(0x143, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CommandUnderlines(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x143, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ConstrainNumeric()
	{
		BOOL result;
		InvokeHelper(0x144, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ConstrainNumeric(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x144, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT ConvertFormula(VARIANT& Formula, long FromReferenceStyle, VARIANT& ToReferenceStyle, VARIANT& ToAbsolute, VARIANT& RelativeTo)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x145, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Formula, FromReferenceStyle, &ToReferenceStyle, &ToAbsolute, &RelativeTo);
		return result;
	}
	BOOL get_CopyObjectsWithCells()
	{
		BOOL result;
		InvokeHelper(0x3df, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CopyObjectsWithCells(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3df, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Cursor()
	{
		long result;
		InvokeHelper(0x489, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Cursor(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x489, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CustomListCount()
	{
		long result;
		InvokeHelper(0x313, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_CutCopyMode()
	{
		long result;
		InvokeHelper(0x14a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CutCopyMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x14a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DataEntryMode()
	{
		long result;
		InvokeHelper(0x14b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DataEntryMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x14b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT Dummy1(VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6f6, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1, &Arg2, &Arg3, &Arg4);
		return result;
	}
	VARIANT Dummy2(VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6f7, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8);
		return result;
	}
	VARIANT Dummy3()
	{
		VARIANT result;
		InvokeHelper(0x6f8, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT Dummy4(VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6f9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15);
		return result;
	}
	VARIANT Dummy5(VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x6fa, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13);
		return result;
	}
	VARIANT Dummy6()
	{
		VARIANT result;
		InvokeHelper(0x6fb, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT Dummy7()
	{
		VARIANT result;
		InvokeHelper(0x6fc, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT Dummy8(VARIANT& Arg1)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x6fd, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1);
		return result;
	}
	VARIANT Dummy9()
	{
		VARIANT result;
		InvokeHelper(0x6fe, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	BOOL Dummy10(VARIANT& arg)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x6ff, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &arg);
		return result;
	}
	void Dummy11()
	{
		InvokeHelper(0x700, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get__Default()
	{
		CString result;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_DefaultFilePath()
	{
		CString result;
		InvokeHelper(0x40e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DefaultFilePath(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x40e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void DeleteChartAutoFormat(LPCTSTR Name)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xd9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Name);
	}
	void DeleteCustomList(long ListNum)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x30f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ListNum);
	}
	LPDISPATCH get_Dialogs()
	{
		LPDISPATCH result;
		InvokeHelper(0x2f9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_DisplayAlerts()
	{
		BOOL result;
		InvokeHelper(0x157, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayAlerts(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x157, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayFormulaBar()
	{
		BOOL result;
		InvokeHelper(0x158, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayFormulaBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x158, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayFullScreen()
	{
		BOOL result;
		InvokeHelper(0x425, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayFullScreen(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x425, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayNoteIndicator()
	{
		BOOL result;
		InvokeHelper(0x159, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayNoteIndicator(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x159, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DisplayCommentIndicator()
	{
		long result;
		InvokeHelper(0x4ac, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DisplayCommentIndicator(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4ac, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayExcel4Menus()
	{
		BOOL result;
		InvokeHelper(0x39f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayExcel4Menus(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x39f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayRecentFiles()
	{
		BOOL result;
		InvokeHelper(0x39e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayRecentFiles(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x39e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayScrollBars()
	{
		BOOL result;
		InvokeHelper(0x15a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayScrollBars(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayStatusBar()
	{
		BOOL result;
		InvokeHelper(0x15b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayStatusBar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void DoubleClick()
	{
		InvokeHelper(0x15d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_EditDirectlyInCell()
	{
		BOOL result;
		InvokeHelper(0x3a1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EditDirectlyInCell(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x3a1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableAutoComplete()
	{
		BOOL result;
		InvokeHelper(0x49b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableAutoComplete(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x49b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_EnableCancelKey()
	{
		long result;
		InvokeHelper(0x448, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_EnableCancelKey(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x448, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableSound()
	{
		BOOL result;
		InvokeHelper(0x4ad, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableSound(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4ad, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableTipWizard()
	{
		BOOL result;
		InvokeHelper(0x428, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableTipWizard(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x428, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_FileConverters(VARIANT& Index1, VARIANT& Index2)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x3a3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &Index1, &Index2);
		return result;
	}
	LPDISPATCH get_FileSearch()
	{
		LPDISPATCH result;
		InvokeHelper(0x4b0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_FileFind()
	{
		LPDISPATCH result;
		InvokeHelper(0x4b1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void _FindFile()
	{
		InvokeHelper(0x42c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_FixedDecimal()
	{
		BOOL result;
		InvokeHelper(0x15f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_FixedDecimal(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x15f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FixedDecimalPlaces()
	{
		long result;
		InvokeHelper(0x160, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FixedDecimalPlaces(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x160, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT GetCustomListContents(long ListNum)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x312, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, ListNum);
		return result;
	}
	long GetCustomListNum(VARIANT& ListArray)
	{
		long result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x311, DISPATCH_METHOD, VT_I4, (void*)&result, parms, &ListArray);
		return result;
	}
	VARIANT GetOpenFilename(VARIANT& FileFilter, VARIANT& FilterIndex, VARIANT& Title, VARIANT& ButtonText, VARIANT& MultiSelect)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x433, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &FileFilter, &FilterIndex, &Title, &ButtonText, &MultiSelect);
		return result;
	}
	VARIANT GetSaveAsFilename(VARIANT& InitialFilename, VARIANT& FileFilter, VARIANT& FilterIndex, VARIANT& Title, VARIANT& ButtonText)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x434, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &InitialFilename, &FileFilter, &FilterIndex, &Title, &ButtonText);
		return result;
	}
	void Goto(VARIANT& Reference, VARIANT& Scroll)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x1db, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Reference, &Scroll);
	}
	double get_Height()
	{
		double result;
		InvokeHelper(0x7b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Height(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x7b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Help(VARIANT& HelpFile, VARIANT& HelpContextID)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x162, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &HelpFile, &HelpContextID);
	}
	BOOL get_IgnoreRemoteRequests()
	{
		BOOL result;
		InvokeHelper(0x164, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_IgnoreRemoteRequests(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x164, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double InchesToPoints(double Inches)
	{
		double result;
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x43f, DISPATCH_METHOD, VT_R8, (void*)&result, parms, Inches);
		return result;
	}
	VARIANT InputBox(LPCTSTR Prompt, VARIANT& Title, VARIANT& Default, VARIANT& Left, VARIANT& Top, VARIANT& HelpFile, VARIANT& HelpContextID, VARIANT& Type)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x165, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Prompt, &Title, &Default, &Left, &Top, &HelpFile, &HelpContextID, &Type);
		return result;
	}
	BOOL get_Interactive()
	{
		BOOL result;
		InvokeHelper(0x169, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Interactive(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x169, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_International(VARIANT& Index)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x16a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &Index);
		return result;
	}
	BOOL get_Iteration()
	{
		BOOL result;
		InvokeHelper(0x16b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Iteration(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_LargeButtons()
	{
		BOOL result;
		InvokeHelper(0x16c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_LargeButtons(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_Left()
	{
		double result;
		InvokeHelper(0x7f, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Left(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x7f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_LibraryPath()
	{
		CString result;
		InvokeHelper(0x16e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void _MacroOptions(VARIANT& Macro, VARIANT& Description, VARIANT& HasMenu, VARIANT& MenuText, VARIANT& HasShortcutKey, VARIANT& ShortcutKey, VARIANT& Category, VARIANT& StatusBar, VARIANT& HelpContextID, VARIANT& HelpFile)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x46f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Macro, &Description, &HasMenu, &MenuText, &HasShortcutKey, &ShortcutKey, &Category, &StatusBar, &HelpContextID, &HelpFile);
	}
	void MailLogoff()
	{
		InvokeHelper(0x3b1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void MailLogon(VARIANT& Name, VARIANT& Password, VARIANT& DownloadNewMail)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x3af, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Name, &Password, &DownloadNewMail);
	}
	VARIANT get_MailSession()
	{
		VARIANT result;
		InvokeHelper(0x3ae, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long get_MailSystem()
	{
		long result;
		InvokeHelper(0x3cb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_MathCoprocessorAvailable()
	{
		BOOL result;
		InvokeHelper(0x16f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	double get_MaxChange()
	{
		double result;
		InvokeHelper(0x170, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_MaxChange(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x170, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MaxIterations()
	{
		long result;
		InvokeHelper(0x171, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MaxIterations(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x171, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MemoryFree()
	{
		long result;
		InvokeHelper(0x172, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_MemoryTotal()
	{
		long result;
		InvokeHelper(0x173, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_MemoryUsed()
	{
		long result;
		InvokeHelper(0x174, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_MouseAvailable()
	{
		BOOL result;
		InvokeHelper(0x175, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_MoveAfterReturn()
	{
		BOOL result;
		InvokeHelper(0x176, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_MoveAfterReturn(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x176, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_MoveAfterReturnDirection()
	{
		long result;
		InvokeHelper(0x478, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MoveAfterReturnDirection(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x478, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_RecentFiles()
	{
		LPDISPATCH result;
		InvokeHelper(0x4b2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH NextLetter()
	{
		LPDISPATCH result;
		InvokeHelper(0x3cc, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_NetworkTemplatesPath()
	{
		CString result;
		InvokeHelper(0x184, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ODBCErrors()
	{
		LPDISPATCH result;
		InvokeHelper(0x4b3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_ODBCTimeout()
	{
		long result;
		InvokeHelper(0x4b4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ODBCTimeout(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4b4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnCalculate()
	{
		CString result;
		InvokeHelper(0x271, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnCalculate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x271, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnData()
	{
		CString result;
		InvokeHelper(0x275, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnData(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x275, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnDoubleClick()
	{
		CString result;
		InvokeHelper(0x274, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnDoubleClick(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x274, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnEntry()
	{
		CString result;
		InvokeHelper(0x273, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnEntry(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x273, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void OnKey(LPCTSTR Key, VARIANT& Procedure)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT;
		InvokeHelper(0x272, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Key, &Procedure);
	}
	void OnRepeat(LPCTSTR Text, LPCTSTR Procedure)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x301, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Text, Procedure);
	}
	CString get_OnSheetActivate()
	{
		CString result;
		InvokeHelper(0x407, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnSheetActivate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x407, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OnSheetDeactivate()
	{
		CString result;
		InvokeHelper(0x439, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnSheetDeactivate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x439, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void OnTime(VARIANT& EarliestTime, LPCTSTR Procedure, VARIANT& LatestTime, VARIANT& Schedule)
	{
		static BYTE parms[] = VTS_VARIANT VTS_BSTR VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x270, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &EarliestTime, Procedure, &LatestTime, &Schedule);
	}
	void OnUndo(LPCTSTR Text, LPCTSTR Procedure)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x302, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Text, Procedure);
	}
	CString get_OnWindow()
	{
		CString result;
		InvokeHelper(0x26f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_OnWindow(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x26f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_OperatingSystem()
	{
		CString result;
		InvokeHelper(0x177, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_OrganizationName()
	{
		CString result;
		InvokeHelper(0x178, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_Path()
	{
		CString result;
		InvokeHelper(0x123, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_PathSeparator()
	{
		CString result;
		InvokeHelper(0x179, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	VARIANT get_PreviousSelections(VARIANT& Index)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x17a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &Index);
		return result;
	}
	BOOL get_PivotTableSelection()
	{
		BOOL result;
		InvokeHelper(0x4b5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_PivotTableSelection(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4b5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_PromptForSummaryInfo()
	{
		BOOL result;
		InvokeHelper(0x426, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_PromptForSummaryInfo(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x426, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Quit()
	{
		InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void RecordMacro(VARIANT& BasicCode, VARIANT& XlmCode)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x305, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &BasicCode, &XlmCode);
	}
	BOOL get_RecordRelative()
	{
		BOOL result;
		InvokeHelper(0x17b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_ReferenceStyle()
	{
		long result;
		InvokeHelper(0x17c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ReferenceStyle(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x17c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_RegisteredFunctions(VARIANT& Index1, VARIANT& Index2)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x307, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, &Index1, &Index2);
		return result;
	}
	BOOL RegisterXLL(LPCTSTR Filename)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Filename);
		return result;
	}
	void Repeat()
	{
		InvokeHelper(0x12d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ResetTipWizard()
	{
		InvokeHelper(0x3a0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_RollZoom()
	{
		BOOL result;
		InvokeHelper(0x4b6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_RollZoom(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4b6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Save(VARIANT& Filename)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x11b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename);
	}
	void SaveWorkspace(VARIANT& Filename)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xd4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Filename);
	}
	BOOL get_ScreenUpdating()
	{
		BOOL result;
		InvokeHelper(0x17e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ScreenUpdating(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x17e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void SetDefaultChart(VARIANT& FormatName, VARIANT& Gallery)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xdb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &FormatName, &Gallery);
	}
	long get_SheetsInNewWorkbook()
	{
		long result;
		InvokeHelper(0x3e1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SheetsInNewWorkbook(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x3e1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowChartTipNames()
	{
		BOOL result;
		InvokeHelper(0x4b7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowChartTipNames(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowChartTipValues()
	{
		BOOL result;
		InvokeHelper(0x4b8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowChartTipValues(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4b8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardFont()
	{
		CString result;
		InvokeHelper(0x39c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardFont(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x39c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_StandardFontSize()
	{
		double result;
		InvokeHelper(0x39d, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_StandardFontSize(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x39d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StartupPath()
	{
		CString result;
		InvokeHelper(0x181, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	VARIANT get_StatusBar()
	{
		VARIANT result;
		InvokeHelper(0x182, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_StatusBar(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x182, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	CString get_TemplatesPath()
	{
		CString result;
		InvokeHelper(0x17d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_ShowToolTips()
	{
		BOOL result;
		InvokeHelper(0x183, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowToolTips(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x183, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_Top()
	{
		double result;
		InvokeHelper(0x7e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Top(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x7e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DefaultSaveFormat()
	{
		long result;
		InvokeHelper(0x4b9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DefaultSaveFormat(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4b9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_TransitionMenuKey()
	{
		CString result;
		InvokeHelper(0x136, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_TransitionMenuKey(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x136, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TransitionMenuKeyAction()
	{
		long result;
		InvokeHelper(0x137, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TransitionMenuKeyAction(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x137, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_TransitionNavigKeys()
	{
		BOOL result;
		InvokeHelper(0x138, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_TransitionNavigKeys(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Undo()
	{
		InvokeHelper(0x12f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	double get_UsableHeight()
	{
		double result;
		InvokeHelper(0x185, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	double get_UsableWidth()
	{
		double result;
		InvokeHelper(0x186, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	BOOL get_UserControl()
	{
		BOOL result;
		InvokeHelper(0x4ba, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_UserControl(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4ba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_UserName()
	{
		CString result;
		InvokeHelper(0x187, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_UserName(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x187, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Value()
	{
		CString result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_VBE()
	{
		LPDISPATCH result;
		InvokeHelper(0x4bb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_Version()
	{
		CString result;
		InvokeHelper(0x188, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_Visible()
	{
		BOOL result;
		InvokeHelper(0x22e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Visible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x22e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Volatile(VARIANT& Volatile)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x314, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Volatile);
	}
	void _Wait(VARIANT& Time)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x189, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Time);
	}
	double get_Width()
	{
		double result;
		InvokeHelper(0x7a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Width(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x7a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_WindowsForPens()
	{
		BOOL result;
		InvokeHelper(0x18b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_WindowState()
	{
		long result;
		InvokeHelper(0x18c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_WindowState(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x18c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_UILanguage()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_UILanguage(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DefaultSheetDirection()
	{
		long result;
		InvokeHelper(0xe5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DefaultSheetDirection(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xe5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_CursorMovement()
	{
		long result;
		InvokeHelper(0xe8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CursorMovement(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xe8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ControlCharacters()
	{
		BOOL result;
		InvokeHelper(0xe9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ControlCharacters(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xe9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT _WSFunction(VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15, VARIANT& Arg16, VARIANT& Arg17, VARIANT& Arg18, VARIANT& Arg19, VARIANT& Arg20, VARIANT& Arg21, VARIANT& Arg22, VARIANT& Arg23, VARIANT& Arg24, VARIANT& Arg25, VARIANT& Arg26, VARIANT& Arg27, VARIANT& Arg28, VARIANT& Arg29, VARIANT& Arg30)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xa9, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
		return result;
	}
	BOOL get_EnableEvents()
	{
		BOOL result;
		InvokeHelper(0x4bc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableEvents(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4bc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayInfoWindow()
	{
		BOOL result;
		InvokeHelper(0x4bd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayInfoWindow(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x4bd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL Wait(VARIANT& Time)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x6ea, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &Time);
		return result;
	}
	BOOL get_ExtendList()
	{
		BOOL result;
		InvokeHelper(0x701, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ExtendList(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x701, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_OLEDBErrors()
	{
		LPDISPATCH result;
		InvokeHelper(0x702, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString GetPhonetic(VARIANT& Text)
	{
		CString result;
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x703, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, &Text);
		return result;
	}
	LPDISPATCH get_COMAddIns()
	{
		LPDISPATCH result;
		InvokeHelper(0x704, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_DefaultWebOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x705, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_ProductCode()
	{
		CString result;
		InvokeHelper(0x706, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_UserLibraryPath()
	{
		CString result;
		InvokeHelper(0x707, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_AutoPercentEntry()
	{
		BOOL result;
		InvokeHelper(0x708, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoPercentEntry(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x708, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_LanguageSettings()
	{
		LPDISPATCH result;
		InvokeHelper(0x709, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Dummy101()
	{
		LPDISPATCH result;
		InvokeHelper(0x70a, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Dummy12(LPDISPATCH p1, LPDISPATCH p2)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_DISPATCH;
		InvokeHelper(0x70b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, p1, p2);
	}
	LPDISPATCH get_AnswerWizard()
	{
		LPDISPATCH result;
		InvokeHelper(0x70c, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void CalculateFull()
	{
		InvokeHelper(0x70d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL FindFile()
	{
		BOOL result;
		InvokeHelper(0x6eb, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	long get_CalculationVersion()
	{
		long result;
		InvokeHelper(0x70e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_ShowWindowsInTaskbar()
	{
		BOOL result;
		InvokeHelper(0x70f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowWindowsInTaskbar(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x70f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FeatureInstall()
	{
		long result;
		InvokeHelper(0x710, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FeatureInstall(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x710, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Ready()
	{
		BOOL result;
		InvokeHelper(0x78c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	VARIANT Dummy13(VARIANT& Arg1, VARIANT& Arg2, VARIANT& Arg3, VARIANT& Arg4, VARIANT& Arg5, VARIANT& Arg6, VARIANT& Arg7, VARIANT& Arg8, VARIANT& Arg9, VARIANT& Arg10, VARIANT& Arg11, VARIANT& Arg12, VARIANT& Arg13, VARIANT& Arg14, VARIANT& Arg15, VARIANT& Arg16, VARIANT& Arg17, VARIANT& Arg18, VARIANT& Arg19, VARIANT& Arg20, VARIANT& Arg21, VARIANT& Arg22, VARIANT& Arg23, VARIANT& Arg24, VARIANT& Arg25, VARIANT& Arg26, VARIANT& Arg27, VARIANT& Arg28, VARIANT& Arg29, VARIANT& Arg30)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0x78d, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Arg1, &Arg2, &Arg3, &Arg4, &Arg5, &Arg6, &Arg7, &Arg8, &Arg9, &Arg10, &Arg11, &Arg12, &Arg13, &Arg14, &Arg15, &Arg16, &Arg17, &Arg18, &Arg19, &Arg20, &Arg21, &Arg22, &Arg23, &Arg24, &Arg25, &Arg26, &Arg27, &Arg28, &Arg29, &Arg30);
		return result;
	}
	LPDISPATCH get_FindFormat()
	{
		LPDISPATCH result;
		InvokeHelper(0x78e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_FindFormat(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x78e, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_ReplaceFormat()
	{
		LPDISPATCH result;
		InvokeHelper(0x78f, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_ReplaceFormat(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x78f, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_UsedObjects()
	{
		LPDISPATCH result;
		InvokeHelper(0x790, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_CalculationState()
	{
		long result;
		InvokeHelper(0x791, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_CalculationInterruptKey()
	{
		long result;
		InvokeHelper(0x792, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_CalculationInterruptKey(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x792, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Watches()
	{
		LPDISPATCH result;
		InvokeHelper(0x793, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_DisplayFunctionToolTips()
	{
		BOOL result;
		InvokeHelper(0x794, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayFunctionToolTips(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x794, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_AutomationSecurity()
	{
		long result;
		InvokeHelper(0x795, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AutomationSecurity(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x795, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_FileDialog(long fileDialogType)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x796, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, fileDialogType);
		return result;
	}
	void Dummy14()
	{
		InvokeHelper(0x798, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void CalculateFullRebuild()
	{
		InvokeHelper(0x799, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_DisplayPasteOptions()
	{
		BOOL result;
		InvokeHelper(0x79a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayPasteOptions(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x79a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayInsertOptions()
	{
		BOOL result;
		InvokeHelper(0x79b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayInsertOptions(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x79b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_GenerateGetPivotData()
	{
		BOOL result;
		InvokeHelper(0x79c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_GenerateGetPivotData(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x79c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_AutoRecover()
	{
		LPDISPATCH result;
		InvokeHelper(0x79d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Hwnd()
	{
		long result;
		InvokeHelper(0x79e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	long get_Hinstance()
	{
		long result;
		InvokeHelper(0x79f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void CheckAbort(VARIANT& KeepAbort)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x7a0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &KeepAbort);
	}
	LPDISPATCH get_ErrorCheckingOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x7a2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_AutoFormatAsYouTypeReplaceHyperlinks()
	{
		BOOL result;
		InvokeHelper(0x7a3, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AutoFormatAsYouTypeReplaceHyperlinks(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7a3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_SmartTagRecognizers()
	{
		LPDISPATCH result;
		InvokeHelper(0x7a4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_NewWorkbook()
	{
		LPDISPATCH result;
		InvokeHelper(0x61d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SpellingOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x7a5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Speech()
	{
		LPDISPATCH result;
		InvokeHelper(0x7a6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_MapPaperSize()
	{
		BOOL result;
		InvokeHelper(0x7a7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_MapPaperSize(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7a7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowStartupDialog()
	{
		BOOL result;
		InvokeHelper(0x7a8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowStartupDialog(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7a8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_DecimalSeparator()
	{
		CString result;
		InvokeHelper(0x711, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DecimalSeparator(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x711, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_ThousandsSeparator()
	{
		CString result;
		InvokeHelper(0x712, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ThousandsSeparator(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x712, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_UseSystemSeparators()
	{
		BOOL result;
		InvokeHelper(0x7a9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_UseSystemSeparators(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x7a9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_ThisCell()
	{
		LPDISPATCH result;
		InvokeHelper(0x7aa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_RTD()
	{
		LPDISPATCH result;
		InvokeHelper(0x7ab, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_DisplayDocumentActionTaskPane()
	{
		BOOL result;
		InvokeHelper(0x8cb, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayDocumentActionTaskPane(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x8cb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void DisplayXMLSourcePane(VARIANT& XmlMap)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x8cc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &XmlMap);
	}
	BOOL get_ArbitraryXMLSupportAvailable()
	{
		BOOL result;
		InvokeHelper(0x8ce, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	VARIANT Support(LPDISPATCH Object, long ID, VARIANT& arg)
	{
		VARIANT result;
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_VARIANT;
		InvokeHelper(0x8cf, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, Object, ID, &arg);
		return result;
	}
	VARIANT Dummy20(long grfCompareFunctions)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x945, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, grfCompareFunctions);
		return result;
	}
	long get_MeasurementUnit()
	{
		long result;
		InvokeHelper(0x947, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_MeasurementUnit(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x947, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowSelectionFloaties()
	{
		BOOL result;
		InvokeHelper(0x948, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowSelectionFloaties(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x948, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowMenuFloaties()
	{
		BOOL result;
		InvokeHelper(0x949, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowMenuFloaties(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x949, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_ShowDevTools()
	{
		BOOL result;
		InvokeHelper(0x94a, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowDevTools(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x94a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_EnableLivePreview()
	{
		BOOL result;
		InvokeHelper(0x94b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableLivePreview(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x94b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayDocumentInformationPanel()
	{
		BOOL result;
		InvokeHelper(0x94c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayDocumentInformationPanel(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x94c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_AlwaysUseClearType()
	{
		BOOL result;
		InvokeHelper(0x94d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AlwaysUseClearType(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x94d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_WarnOnFunctionNameConflict()
	{
		BOOL result;
		InvokeHelper(0x94e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_WarnOnFunctionNameConflict(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x94e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FormulaBarHeight()
	{
		long result;
		InvokeHelper(0x94f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FormulaBarHeight(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x94f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DisplayFormulaAutoComplete()
	{
		BOOL result;
		InvokeHelper(0x950, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DisplayFormulaAutoComplete(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x950, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_GenerateTableRefs()
	{
		long result;
		InvokeHelper(0x951, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_GenerateTableRefs(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x951, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Assistance()
	{
		LPDISPATCH result;
		InvokeHelper(0x952, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void CalculateUntilAsyncQueriesDone()
	{
		InvokeHelper(0x953, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_EnableLargeOperationAlert()
	{
		BOOL result;
		InvokeHelper(0x954, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_EnableLargeOperationAlert(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x954, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_LargeOperationCellThousandCount()
	{
		long result;
		InvokeHelper(0x955, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_LargeOperationCellThousandCount(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x955, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_DeferAsyncQueries()
	{
		BOOL result;
		InvokeHelper(0x956, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_DeferAsyncQueries(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x956, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_MultiThreadedCalculation()
	{
		LPDISPATCH result;
		InvokeHelper(0x957, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long SharePointVersion(LPCTSTR bstrUrl)
	{
		long result;
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x958, DISPATCH_METHOD, VT_I4, (void*)&result, parms, bstrUrl);
		return result;
	}
	long get_ActiveEncryptionSession()
	{
		long result;
		InvokeHelper(0x95a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_HighQualityModeForGraphics()
	{
		BOOL result;
		InvokeHelper(0x95b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_HighQualityModeForGraphics(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x95b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_FileExportConverters()
	{
		LPDISPATCH result;
		InvokeHelper(0xad0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SmartArtLayouts()
	{
		LPDISPATCH result;
		InvokeHelper(0xad4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SmartArtQuickStyles()
	{
		LPDISPATCH result;
		InvokeHelper(0xad5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SmartArtColors()
	{
		LPDISPATCH result;
		InvokeHelper(0xad6, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_AddIns2()
	{
		LPDISPATCH result;
		InvokeHelper(0xad7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_PrintCommunication()
	{
		BOOL result;
		InvokeHelper(0xad8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_PrintCommunication(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xad8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void MacroOptions(VARIANT& Macro, VARIANT& Description, VARIANT& HasMenu, VARIANT& MenuText, VARIANT& HasShortcutKey, VARIANT& ShortcutKey, VARIANT& Category, VARIANT& StatusBar, VARIANT& HelpContextID, VARIANT& HelpFile, VARIANT& ArgumentDescriptions)
	{
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
		InvokeHelper(0xad2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Macro, &Description, &HasMenu, &MenuText, &HasShortcutKey, &ShortcutKey, &Category, &StatusBar, &HelpContextID, &HelpFile, &ArgumentDescriptions);
	}
	BOOL get_UseClusterConnector()
	{
		BOOL result;
		InvokeHelper(0xada, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_UseClusterConnector(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xada, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_ClusterConnector()
	{
		CString result;
		InvokeHelper(0xadb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ClusterConnector(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xadb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Quitting()
	{
		BOOL result;
		InvokeHelper(0xadc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_Dummy22()
	{
		BOOL result;
		InvokeHelper(0xadd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Dummy22(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xadd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_Dummy23()
	{
		BOOL result;
		InvokeHelper(0xade, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_Dummy23(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xade, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_ProtectedViewWindows()
	{
		LPDISPATCH result;
		InvokeHelper(0xadf, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_ActiveProtectedViewWindow()
	{
		LPDISPATCH result;
		InvokeHelper(0xae0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_IsSandboxed()
	{
		BOOL result;
		InvokeHelper(0xae1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_SaveISO8601Dates()
	{
		BOOL result;
		InvokeHelper(0xae2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SaveISO8601Dates(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xae2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_HinstancePtr()
	{
		VARIANT result;
		InvokeHelper(0xae3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	long get_FileValidation()
	{
		long result;
		InvokeHelper(0xae4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FileValidation(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xae4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FileValidationPivot()
	{
		long result;
		InvokeHelper(0xae5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FileValidationPivot(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xae5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// _Application properties
public:

};

// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

// CFont0 wrapper class

class CFont0 : public COleDispatchDriver
{
public:
	CFont0(){} // Calls COleDispatchDriver default constructor
	CFont0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFont0(const CFont0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// Font methods
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_Background()
	{
		VARIANT result;
		InvokeHelper(0xb4, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Background(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xb4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Bold()
	{
		VARIANT result;
		InvokeHelper(0x60, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Bold(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x60, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Color()
	{
		VARIANT result;
		InvokeHelper(0x63, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Color(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x63, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_ColorIndex()
	{
		VARIANT result;
		InvokeHelper(0x61, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_ColorIndex(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x61, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_FontStyle()
	{
		VARIANT result;
		InvokeHelper(0xb1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_FontStyle(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xb1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Italic()
	{
		VARIANT result;
		InvokeHelper(0x65, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Italic(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x65, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Name()
	{
		VARIANT result;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Name(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_OutlineFont()
	{
		VARIANT result;
		InvokeHelper(0xdd, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_OutlineFont(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xdd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Shadow()
	{
		VARIANT result;
		InvokeHelper(0x67, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Shadow(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x67, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Size()
	{
		VARIANT result;
		InvokeHelper(0x68, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Size(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x68, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Strikethrough()
	{
		VARIANT result;
		InvokeHelper(0x69, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Strikethrough(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x69, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Subscript()
	{
		VARIANT result;
		InvokeHelper(0xb3, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Subscript(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xb3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Superscript()
	{
		VARIANT result;
		InvokeHelper(0xb2, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Superscript(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0xb2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_Underline()
	{
		VARIANT result;
		InvokeHelper(0x6a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_Underline(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x6a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_ThemeColor()
	{
		VARIANT result;
		InvokeHelper(0x93d, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_ThemeColor(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x93d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	VARIANT get_TintAndShade()
	{
		VARIANT result;
		InvokeHelper(0x93e, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	void put_TintAndShade(VARIANT& newValue)
	{
		static BYTE parms[] = VTS_VARIANT;
		InvokeHelper(0x93e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, &newValue);
	}
	long get_ThemeFont()
	{
		long result;
		InvokeHelper(0x93f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ThemeFont(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x93f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// Font properties
public:

};

#endif
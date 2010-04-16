/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM nsIPCMan.idl
 */

#ifndef __gen_nsIPCMan_h__
#define __gen_nsIPCMan_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPCMan */
#define NS_IPCMAN_IID_STR "9ffb204d-74c9-44a0-867f-fdebdd89eb1e"

#define NS_IPCMAN_IID \
  {0x9ffb204d, 0x74c9, 0x44a0, \
    { 0x86, 0x7f, 0xfd, 0xeb, 0xdd, 0x89, 0xeb, 0x1e }}

class NS_NO_VTABLE nsIPCMan : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IPCMAN_IID)

  /* void connect (in string url); */
  NS_IMETHOD Connect(const char *url) = 0;

  /* void setFontFace (in wstring name); */
  NS_IMETHOD SetFontFace(const PRUnichar *name) = 0;

  /* void setFontFaceEn (in wstring name); */
  NS_IMETHOD SetFontFaceEn(const PRUnichar *name) = 0;

  /* void setFontSize (in short size); */
  NS_IMETHOD SetFontSize(PRInt16 size) = 0;

  /* void setAntiIdle (in long idleTime, in string idleString); */
  NS_IMETHOD SetAntiIdle(PRInt32 idleTime, const char *idleString) = 0;

  /* void setEscape (in string esc); */
  NS_IMETHOD SetEscape(const char *esc) = 0;

  /* void setAutoDbcsDetection (in PRUint32 value); */
  NS_IMETHOD SetAutoDbcsDetection(PRUint32 value) = 0;

  /* void setSearchEngineData (in string url, in string param_name, in PRUint32 num); */
  NS_IMETHOD SetSearchEngineData(const char *url, const char *param_name, PRUint32 num) = 0;

  /* void setUseMouseBrowsing (in boolean value); */
  NS_IMETHOD SetUseMouseBrowsing(PRBool value) = 0;

  /* void setUseTextDragDrop (in boolean value); */
  NS_IMETHOD SetUseTextDragDrop(PRBool value) = 0;

  /* void setLoadUrlInBackGround (in boolean value); */
  NS_IMETHOD SetLoadUrlInBackGround(PRBool value) = 0;

  /* void setGesturesSensitivityX (in PRUint32 value); */
  NS_IMETHOD SetGesturesSensitivityX(PRUint32 value) = 0;

  /* void setGesturesUseXAxisOnly (in boolean value); */
  NS_IMETHOD SetGesturesUseXAxisOnly(PRBool value) = 0;

  /* void setUseHelperWnd (in boolean value); */
  NS_IMETHOD SetUseHelperWnd(PRBool value) = 0;

  /* void setUseMouseWheelHack (in boolean value); */
  NS_IMETHOD SetUseMouseWheelHack(PRBool value) = 0;

  /* void setMouseOverEffect (in PRUint32 value); */
  NS_IMETHOD SetMouseOverEffect(PRUint32 value) = 0;

  /* void focus (); */
  NS_IMETHOD Focus(void) = 0;

  /* long getHWND (); */
  NS_IMETHOD GetHWND(PRInt32 *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPCMAN \
  NS_IMETHOD Connect(const char *url); \
  NS_IMETHOD SetFontFace(const PRUnichar *name); \
  NS_IMETHOD SetFontFaceEn(const PRUnichar *name); \
  NS_IMETHOD SetFontSize(PRInt16 size); \
  NS_IMETHOD SetAntiIdle(PRInt32 idleTime, const char *idleString); \
  NS_IMETHOD SetEscape(const char *esc); \
  NS_IMETHOD SetAutoDbcsDetection(PRUint32 value); \
  NS_IMETHOD SetSearchEngineData(const char *url, const char *param_name, PRUint32 num); \
  NS_IMETHOD SetUseMouseBrowsing(PRBool value); \
  NS_IMETHOD SetUseTextDragDrop(PRBool value); \
  NS_IMETHOD SetLoadUrlInBackGround(PRBool value); \
  NS_IMETHOD SetGesturesSensitivityX(PRUint32 value); \
  NS_IMETHOD SetGesturesUseXAxisOnly(PRBool value); \
  NS_IMETHOD SetUseHelperWnd(PRBool value); \
  NS_IMETHOD SetUseMouseWheelHack(PRBool value); \
  NS_IMETHOD SetMouseOverEffect(PRUint32 value); \
  NS_IMETHOD Focus(void); \
  NS_IMETHOD GetHWND(PRInt32 *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPCMAN(_to) \
  NS_IMETHOD Connect(const char *url) { return _to Connect(url); } \
  NS_IMETHOD SetFontFace(const PRUnichar *name) { return _to SetFontFace(name); } \
  NS_IMETHOD SetFontFaceEn(const PRUnichar *name) { return _to SetFontFaceEn(name); } \
  NS_IMETHOD SetFontSize(PRInt16 size) { return _to SetFontSize(size); } \
  NS_IMETHOD SetAntiIdle(PRInt32 idleTime, const char *idleString) { return _to SetAntiIdle(idleTime, idleString); } \
  NS_IMETHOD SetEscape(const char *esc) { return _to SetEscape(esc); } \
  NS_IMETHOD SetAutoDbcsDetection(PRUint32 value) { return _to SetAutoDbcsDetection(value); } \
  NS_IMETHOD SetSearchEngineData(const char *url, const char *param_name, PRUint32 num) { return _to SetSearchEngineData(url, param_name, num); } \
  NS_IMETHOD SetUseMouseBrowsing(PRBool value) { return _to SetUseMouseBrowsing(value); } \
  NS_IMETHOD SetUseTextDragDrop(PRBool value) { return _to SetUseTextDragDrop(value); } \
  NS_IMETHOD SetLoadUrlInBackGround(PRBool value) { return _to SetLoadUrlInBackGround(value); } \
  NS_IMETHOD SetGesturesSensitivityX(PRUint32 value) { return _to SetGesturesSensitivityX(value); } \
  NS_IMETHOD SetGesturesUseXAxisOnly(PRBool value) { return _to SetGesturesUseXAxisOnly(value); } \
  NS_IMETHOD SetUseHelperWnd(PRBool value) { return _to SetUseHelperWnd(value); } \
  NS_IMETHOD SetUseMouseWheelHack(PRBool value) { return _to SetUseMouseWheelHack(value); } \
  NS_IMETHOD SetMouseOverEffect(PRUint32 value) { return _to SetMouseOverEffect(value); } \
  NS_IMETHOD Focus(void) { return _to Focus(); } \
  NS_IMETHOD GetHWND(PRInt32 *_retval) { return _to GetHWND(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPCMAN(_to) \
  NS_IMETHOD Connect(const char *url) { return !_to ? NS_ERROR_NULL_POINTER : _to->Connect(url); } \
  NS_IMETHOD SetFontFace(const PRUnichar *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFontFace(name); } \
  NS_IMETHOD SetFontFaceEn(const PRUnichar *name) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFontFaceEn(name); } \
  NS_IMETHOD SetFontSize(PRInt16 size) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFontSize(size); } \
  NS_IMETHOD SetAntiIdle(PRInt32 idleTime, const char *idleString) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAntiIdle(idleTime, idleString); } \
  NS_IMETHOD SetEscape(const char *esc) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEscape(esc); } \
  NS_IMETHOD SetAutoDbcsDetection(PRUint32 value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutoDbcsDetection(value); } \
  NS_IMETHOD SetSearchEngineData(const char *url, const char *param_name, PRUint32 num) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchEngineData(url, param_name, num); } \
  NS_IMETHOD SetUseMouseBrowsing(PRBool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseMouseBrowsing(value); } \
  NS_IMETHOD SetUseTextDragDrop(PRBool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseTextDragDrop(value); } \
  NS_IMETHOD SetLoadUrlInBackGround(PRBool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadUrlInBackGround(value); } \
  NS_IMETHOD SetGesturesSensitivityX(PRUint32 value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGesturesSensitivityX(value); } \
  NS_IMETHOD SetGesturesUseXAxisOnly(PRBool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGesturesUseXAxisOnly(value); } \
  NS_IMETHOD SetUseHelperWnd(PRBool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseHelperWnd(value); } \
  NS_IMETHOD SetUseMouseWheelHack(PRBool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseMouseWheelHack(value); } \
  NS_IMETHOD SetMouseOverEffect(PRUint32 value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMouseOverEffect(value); } \
  NS_IMETHOD Focus(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(); } \
  NS_IMETHOD GetHWND(PRInt32 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHWND(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPCMan : public nsIPCMan
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPCMAN

  nsPCMan();

private:
  ~nsPCMan();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPCMan, nsIPCMan)

nsPCMan::nsPCMan()
{
  /* member initializers and constructor code */
}

nsPCMan::~nsPCMan()
{
  /* destructor code */
}

/* void connect (in string url); */
NS_IMETHODIMP nsPCMan::Connect(const char *url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFontFace (in wstring name); */
NS_IMETHODIMP nsPCMan::SetFontFace(const PRUnichar *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFontFaceEn (in wstring name); */
NS_IMETHODIMP nsPCMan::SetFontFaceEn(const PRUnichar *name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFontSize (in short size); */
NS_IMETHODIMP nsPCMan::SetFontSize(PRInt16 size)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAntiIdle (in long idleTime, in string idleString); */
NS_IMETHODIMP nsPCMan::SetAntiIdle(PRInt32 idleTime, const char *idleString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setEscape (in string esc); */
NS_IMETHODIMP nsPCMan::SetEscape(const char *esc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAutoDbcsDetection (in PRUint32 value); */
NS_IMETHODIMP nsPCMan::SetAutoDbcsDetection(PRUint32 value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSearchEngineData (in string url, in string param_name, in PRUint32 num); */
NS_IMETHODIMP nsPCMan::SetSearchEngineData(const char *url, const char *param_name, PRUint32 num)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setUseMouseBrowsing (in boolean value); */
NS_IMETHODIMP nsPCMan::SetUseMouseBrowsing(PRBool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setUseTextDragDrop (in boolean value); */
NS_IMETHODIMP nsPCMan::SetUseTextDragDrop(PRBool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setLoadUrlInBackGround (in boolean value); */
NS_IMETHODIMP nsPCMan::SetLoadUrlInBackGround(PRBool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setGesturesSensitivityX (in PRUint32 value); */
NS_IMETHODIMP nsPCMan::SetGesturesSensitivityX(PRUint32 value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setGesturesUseXAxisOnly (in boolean value); */
NS_IMETHODIMP nsPCMan::SetGesturesUseXAxisOnly(PRBool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setUseHelperWnd (in boolean value); */
NS_IMETHODIMP nsPCMan::SetUseHelperWnd(PRBool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setUseMouseWheelHack (in boolean value); */
NS_IMETHODIMP nsPCMan::SetUseMouseWheelHack(PRBool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setMouseOverEffect (in PRUint32 value); */
NS_IMETHODIMP nsPCMan::SetMouseOverEffect(PRUint32 value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (); */
NS_IMETHODIMP nsPCMan::Focus()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getHWND (); */
NS_IMETHODIMP nsPCMan::GetHWND(PRInt32 *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPCMan_h__ */

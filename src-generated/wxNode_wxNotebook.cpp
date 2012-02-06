
#include <sstream>
#include "wxNode_wxNotebook.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxBookCtrlBase.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxNotebook::s_ct;



wxNode_wxNotebook::wxNode_wxNotebook()
  : wxNotebook()
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, const wxString& name)
  : wxNotebook(parent, id, pos, size, style, name)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style)
  : wxNotebook(parent, id, pos, size, style)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxNotebook(parent, id, pos, size)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos)
  : wxNotebook(parent, id, pos)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxNode_wxWindow* parent, int id)
  : wxNotebook(parent, id)
{

}




/*static*/ void wxNode_wxNotebook::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxNotebook"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxNotebook"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxNotebook::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxBookCtrlBase::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getRowCount", _GetRowCount);
  NODE_SET_PROTOTYPE_METHOD(target, "setPadding", _SetPadding);
  NODE_SET_PROTOTYPE_METHOD(target, "setTabSize", _SetTabSize);
  NODE_SET_PROTOTYPE_METHOD(target, "calcSizeFromPage", _CalcSizeFromPage);
  NODE_SET_PROTOTYPE_METHOD(target, "getThemeBackgroundColour", _GetThemeBackgroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "sendPageChangingEvent", _SendPageChangingEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "sendPageChangedEvent", _SendPageChangedEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocus", _AcceptsFocus);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _31812
   */
  if(args.Length() == 0) {
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31813
   */
  if(args.Length() == 6 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _14808  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31813
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31813
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31813
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31813
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxNotebook).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_GetRowCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36953
   */
  if(args.Length() == 0) {
    

    self->GetRowCount();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetRowCount).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SetPadding(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36954
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* padding = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetPadding(*padding);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetPadding).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SetTabSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36955
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetTabSize(*sz);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetTabSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_CalcSizeFromPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36956
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sizePage = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->CalcSizeFromPage(*sizePage);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CalcSizeFromPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_GetThemeBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36957
   */
  if(args.Length() == 0) {
    

    self->GetThemeBackgroundColour();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetThemeBackgroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SendPageChangingEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36958
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int nPage = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SendPageChangingEvent(nPage);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SendPageChangingEvent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SendPageChangedEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36959
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int nPageOld = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int nPageNew = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SendPageChangedEvent(nPageOld, nPageNew);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _36959
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int nPageOld = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SendPageChangedEvent(nPageOld);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SendPageChangedEvent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_AcceptsFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _36960
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AcceptsFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

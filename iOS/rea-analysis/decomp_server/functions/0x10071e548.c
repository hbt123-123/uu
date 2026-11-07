// rea decompile_all
// name: SADatabase::selectRecords:isInstantEvent:
// address: 0x10071e548
// body: available
// range: 0x10071e548-0x10071e7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071e7ec to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID SADatabase::selectRecords_isInstantEvent_
             (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  bool bVar1;
  int iVar2;
  undefined *self;
  unsigned_long_long uVar3;
  ID IVar4;
  sqlite3_stmt *psVar5;
  uchar *puVar6;
  ID IVar7;
  ID IVar8;
  class_t *self_00;
  char *pcVar9;
  ulong uVar10;
  
  uVar10 = (ulong)param_4;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc_init();
  uVar3 = count(param_1);
  if (((param_3 == 0) || (uVar3 == 0)) || (bVar1 = databaseCheck(param_1), (bVar1 & 1) == 0)) {
    IVar4 = objc_stub::copy((ID)self);
  }
  else {
    IVar4 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,
                       &cf_SELECTid_contentFROMdataCacheWHERE___0AND____dORDERBYidASCLIMIT_lu);
    psVar5 = dbCacheStmt_(param_1,IVar4);
    if (psVar5 == (sqlite3_stmt *)0x0) {
      pcVar9 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase selectRecords:isInstantEvent:]",0x96,0,
                 &cf_Failedtopreparestatement_error__s,pcVar9,uVar10,param_3);
      IVar4 = objc_stub::copy((ID)self);
    }
    else {
      IVar4 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
      iVar2 = _sqlite3_step((sqlite3_stmt *)psVar5);
      while (iVar2 == 100) {
        _sqlite3_column_int((sqlite3_stmt *)psVar5,0);
        puVar6 = _sqlite3_column_text((sqlite3_stmt *)psVar5,1);
        if (puVar6 == (uchar *)0x0) {
          pcVar9 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
          objc_stub::log_level_file_function_line_context_format_
                    ((ID)&objc::class_t::SALog,1,1,
                     "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                     ,"-[SADatabase selectRecords:isInstantEvent:]",0x9f,0,
                     &cf_Failedtoquerycolumn_text_error__s,pcVar9);
          IVar7 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__d);
          NSMutableArray::addObject_(IVar4,IVar7);
        }
        else {
          IVar7 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__d);
          IVar8 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,puVar6);
          self_00 = &objc::class_t::SAEventRecord;
          _objc_alloc();
          IVar7 = objc_stub::initWithRecordID_content_((ID)self_00,IVar7,IVar8);
          objc_stub::addObject_((ID)self,IVar7);
        }
        iVar2 = _sqlite3_step((sqlite3_stmt *)psVar5);
      }
      deleteRecords_(param_1,IVar4);
      IVar4 = objc_stub::copy((ID)self);
    }
  }
  return IVar4;
}


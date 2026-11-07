// rea decompile_all
// name: SADatabase::columnsInTable:
// address: 0x10071f884
// body: available
// range: 0x10071f884-0x10071f9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071f9d8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SADatabase::columnsInTable_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID self;
  ID IVar2;
  char *pcVar3;
  uchar *puVar4;
  sqlite3 *db;
  sqlite3_stmt *local_48;
  
  self = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_PRAGMAtable_info_______);
  db = *(sqlite3 **)(param_1 + 8);
  _objc_retainAutorelease();
  pcVar3 = (char *)objc_stub::UTF8String(IVar2);
  iVar1 = _sqlite3_prepare_v2(db,pcVar3,-1,&local_48,(char **)0x0);
  if (iVar1 == 0) {
    while (iVar1 = _sqlite3_step(local_48), iVar1 == 100) {
      puVar4 = _sqlite3_column_text(local_48,1);
      if ((puVar4 != (uchar *)0x0) &&
         (IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,puVar4), IVar2 != 0))
      {
        NSMutableArray::addObject_(self,IVar2);
      }
    }
  }
  else {
    pcVar3 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
               ,"-[SADatabase columnsInTable:]",0x1a0,0,&cf_PreparePRAGMAtable_infoqueryfailure__s,
               pcVar3);
  }
  _sqlite3_finalize(local_48);
  return self;
}


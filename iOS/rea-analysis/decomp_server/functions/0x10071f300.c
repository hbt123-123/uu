// rea decompile_all
// name: SADatabase::deleteFirstRecords:
// address: 0x10071f300
// body: available
// range: 0x10071f300-0x10071f4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SADatabase::deleteFirstRecords_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  bool bVar1;
  int iVar2;
  unsigned_long_long uVar3;
  ID self;
  char *pcVar4;
  unsigned_long_long uVar5;
  sqlite3 *db;
  sqlite3_stmt *local_38;
  
  uVar3 = count(param_1);
  if (((param_3 != 0) && (uVar3 != 0)) && (bVar1 = databaseCheck(param_1), bVar1 != 0)) {
    uVar3 = count(param_1);
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    self = NSString::stringWithFormat_
                     ((ID)&_OBJC_CLASS___NSString,
                      &cf_DELETEFROMdataCacheWHEREidIN_SELECTidFROMdataCacheORDERBYidASCLIMIT_lu__);
    db = *(sqlite3 **)(param_1 + 8);
    _objc_retainAutorelease();
    pcVar4 = (char *)objc_stub::UTF8String(self);
    iVar2 = _sqlite3_prepare_v2(db,pcVar4,-1,&local_38,(char **)0x0);
    if (iVar2 == 0) {
      iVar2 = _sqlite3_step(local_38);
      if (iVar2 == 0x65) {
        _sqlite3_finalize(local_38);
        uVar5 = count(param_1);
        setCount_(param_1,uVar5 - uVar3);
        return 1;
      }
      pcVar4 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase deleteFirstRecords:]",0x153,0,
                 &cf_Failedtodeleterecordfromdatabase_error__s,pcVar4);
      _sqlite3_finalize(local_38);
      uVar3 = messagesCount(param_1);
      setCount_(param_1,uVar3);
    }
    else {
      pcVar4 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase deleteFirstRecords:]",0x14e,0,
                 &cf_Preparedeleterecordsqueryfailure__s,pcVar4);
      _sqlite3_finalize(local_38);
    }
  }
  return 0;
}


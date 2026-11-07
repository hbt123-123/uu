// rea decompile_all
// name: SADatabase::deleteRecords:
// address: 0x10071f120
// body: available
// range: 0x10071f120-0x10071f2ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SADatabase::deleteRecords_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  unsigned_long_long uVar3;
  ID IVar4;
  char *pcVar5;
  sqlite3 *db;
  sqlite3_stmt *local_48;
  
  uVar3 = count(param_1);
  if (((uVar3 == 0) || (IVar4 = objc_stub::count(param_3), IVar4 == 0)) ||
     (bVar1 = databaseCheck(param_1), bVar1 == 0)) {
    bVar1 = 0;
  }
  else {
    objc_stub::componentsJoinedByString_(param_3,&cf__);
    IVar4 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_DELETEFROMdataCacheWHEREidIN_____);
    db = *(sqlite3 **)(param_1 + 8);
    _objc_retainAutorelease();
    pcVar5 = (char *)objc_stub::UTF8String(IVar4);
    iVar2 = _sqlite3_prepare_v2(db,pcVar5,-1,&local_48,(char **)0x0);
    if (iVar2 == 0) {
      iVar2 = _sqlite3_step(local_48);
      bVar1 = (bool)(iVar2 == 0x65);
      if (iVar2 != 0x65) {
        pcVar5 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,1,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                   ,"-[SADatabase deleteRecords:]",0x139,0,
                   &cf_Failedtodeleterecordfromdatabase_error__s,pcVar5);
      }
      _sqlite3_finalize(local_48);
      uVar3 = messagesCount(param_1);
      setCount_(param_1,uVar3);
      IVar4 = objc_stub::count(param_3);
      uVar3 = flushRecordCount(param_1);
      setFlushRecordCount_(param_1,uVar3 - IVar4);
    }
    else {
      pcVar5 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase deleteRecords:]",0x133,0,&cf_Preparedeleterecordsqueryfailure__s,
                 pcVar5);
      _sqlite3_finalize(local_48);
      bVar1 = 0;
    }
  }
  return bVar1;
}


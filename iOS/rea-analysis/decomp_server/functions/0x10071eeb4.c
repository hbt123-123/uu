// rea decompile_all
// name: SADatabase::insertRecord:
// address: 0x10071eeb4
// body: available
// range: 0x10071eeb4-0x10071f11f inclusive
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

bool SADatabase::insertRecord_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  sqlite3_stmt *psVar4;
  char *pcVar5;
  unsigned_long_long uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  
  IVar3 = objc_stub::isValid(param_3);
  if ((IVar3 & 1) == 0) {
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
               ,"-[SADatabase insertRecord:]",0x108,0,
               &cf___inputparameterisinvalidforaddObjectToDatabase,param_1);
  }
  else {
    bVar1 = databaseCheck(param_1);
    if ((bVar1 != 0) && (bVar1 = preCheckForInsertRecords_(param_1,1), bVar1 != 0)) {
      IVar3 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,
                         &cf_INSERTINTOdataCache_type_content____values_______);
      psVar4 = dbCacheStmt_(param_1,IVar3);
      if (psVar4 == (sqlite3_stmt *)0x0) {
        pcVar8 = &cf_insertintodataCachetableofsqliteerror;
        uVar7 = 0x123;
      }
      else {
        IVar3 = objc_stub::type(param_3);
        _objc_retainAutorelease();
        pcVar5 = (char *)objc_stub::UTF8String(IVar3);
        _sqlite3_bind_text((sqlite3_stmt *)psVar4,1,pcVar5,-1,(void *)0xffffffffffffffff);
        IVar3 = objc_stub::content(param_3);
        _objc_retainAutorelease();
        pcVar5 = (char *)objc_stub::UTF8String(IVar3);
        _sqlite3_bind_text((sqlite3_stmt *)psVar4,2,pcVar5,-1,(void *)0xffffffffffffffff);
        IVar3 = objc_stub::isInstantEvent(param_3);
        _sqlite3_bind_int((sqlite3_stmt *)psVar4,3,(int)IVar3);
        iVar2 = _sqlite3_step((sqlite3_stmt *)psVar4);
        if (iVar2 == 0x65) {
          uVar6 = count(param_1);
          setCount_(param_1,uVar6 + 1);
          uVar6 = count(param_1);
          objc_stub::log_level_file_function_line_context_format_
                    ((ID)&objc::class_t::SALog,1,8,
                     "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                     ,"-[SADatabase insertRecord:]",0x120,0,
                     &cf_insertintodataCachetableofsqlitesuccess_currentcountis_lu,uVar6);
          return 1;
        }
        pcVar8 = &cf_insertintodataCachetableofsqlitefail_rcis_d;
        uVar7 = 0x11c;
      }
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase insertRecord:]",uVar7,0,pcVar8);
      return 0;
    }
  }
  return 0;
}


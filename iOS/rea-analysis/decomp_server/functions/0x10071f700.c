// rea decompile_all
// name: SADatabase::dbCacheStmt:
// address: 0x10071f700
// body: available
// range: 0x10071f700-0x10071f80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

sqlite3_stmt * SADatabase::dbCacheStmt_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  sqlite3_stmt *pStmt;
  char *pcVar3;
  undefined4 extraout_var;
  sqlite3 *db;
  sqlite3_stmt *local_38;
  
  IVar2 = objc_stub::length(param_3);
  if ((IVar2 != 0) && (pStmt = *(sqlite3_stmt **)(param_1 + 0x10), pStmt != (sqlite3_stmt *)0x0)) {
    _CFDictionaryGetValue(pStmt,param_3);
    local_38 = pStmt;
    if (pStmt != (sqlite3_stmt *)0x0) {
      _sqlite3_reset(pStmt);
      return (sqlite3_stmt *)pStmt;
    }
    db = *(sqlite3 **)(param_1 + 8);
    IVar2 = param_3;
    _objc_retainAutorelease();
    pcVar3 = (char *)objc_stub::UTF8String(IVar2);
    iVar1 = _sqlite3_prepare_v2(db,pcVar3,-1,&local_38,(char **)0x0);
    if (iVar1 == 0) {
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 0x10),param_3,local_38);
      return (sqlite3_stmt *)local_38;
    }
    pcVar3 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
               ,"-[SADatabase dbCacheStmt:]",0x189,0,&cf_sqlitestmtprepareerror__d___s,
               CONCAT44(extraout_var,iVar1),pcVar3);
    _sqlite3_finalize(local_38);
  }
  return (sqlite3_stmt *)0x0;
}


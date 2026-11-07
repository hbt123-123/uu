// rea decompile_all
// name: SADatabase::execUpdateSQL:
// address: 0x10071ea7c
// body: available
// range: 0x10071ea7c-0x10071eba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SADatabase::execUpdateSQL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  sqlite3 *db;
  cfstringStruct *pcVar5;
  sqlite3_stmt *local_38;
  
  bVar1 = databaseCheck(param_1);
  if (bVar1 == 0) {
    return 0;
  }
  db = *(sqlite3 **)(param_1 + 8);
  _objc_retainAutorelease();
  pcVar3 = (char *)objc_stub::UTF8String(param_3);
  iVar2 = _sqlite3_prepare_v2(db,pcVar3,-1,&local_38,(char **)0x0);
  if (iVar2 == 0) {
    iVar2 = _sqlite3_step(local_38);
    if (iVar2 == 0x65) {
      bVar1 = 1;
      goto LAB_10071eb80;
    }
    pcVar3 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
    pcVar5 = &cf_Failedtoupdaterecordsfromdatabase_error__s;
    uVar4 = 0xd0;
  }
  else {
    pcVar3 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + 8));
    pcVar5 = &cf_Prepareupdaterecordsqueryfailure__s;
    uVar4 = 0xcb;
  }
  objc_stub::log_level_file_function_line_context_format_
            ((ID)&objc::class_t::SALog,1,1,
             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
             ,"-[SADatabase execUpdateSQL:]",uVar4,0,pcVar5,pcVar3);
  bVar1 = 0;
LAB_10071eb80:
  _sqlite3_finalize(local_38);
  return bVar1;
}


// rea decompile_all
// name: SADatabase::messagesCount
// address: 0x10071fb58
// body: available
// range: 0x10071fb58-0x10071fbfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

unsigned_long_long SADatabase::messagesCount(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  sqlite3_stmt *psVar3;
  
  psVar3 = dbCacheStmt_(param_1,0x1009f0bb0);
  if (psVar3 == (sqlite3_stmt *)0x0) {
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
               ,"-[SADatabase messagesCount]",0x1d3,0,&cf_FailedtogetcountformdataCache);
  }
  else {
    iVar1 = _sqlite3_step((sqlite3_stmt *)psVar3);
    if (iVar1 == 100) {
      do {
        iVar1 = _sqlite3_column_int((sqlite3_stmt *)psVar3,0);
        iVar2 = _sqlite3_step((sqlite3_stmt *)psVar3);
      } while (iVar2 == 100);
      return (long)iVar1;
    }
  }
  return 0;
}


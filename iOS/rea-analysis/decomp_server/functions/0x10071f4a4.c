// rea decompile_all
// name: SADatabase::deleteAllRecords
// address: 0x10071f4a4
// body: available
// range: 0x10071f4a4-0x10071f58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

bool SADatabase::deleteAllRecords(ID param_1,SEL param_2)

{
  bool bVar1;
  int iVar2;
  unsigned_long_long uVar3;
  char *sql;
  sqlite3 *psVar4;
  
  uVar3 = count(param_1);
  if ((uVar3 != 0) && (bVar1 = databaseCheck(param_1), bVar1 != 0)) {
    psVar4 = *(sqlite3 **)(param_1 + 8);
    sql = (char *)objc_stub::UTF8String(0x1009f0a50);
    iVar2 = _sqlite3_exec(psVar4,sql,(callback *)0x0,(void *)0x0,(char **)0x0);
    if (iVar2 == 0) {
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,8,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase deleteAllRecords]",0x169,0,&cf_Deleteallrecordssuccessfully);
      setCount_(param_1,0);
      return 1;
    }
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
               ,"-[SADatabase deleteAllRecords]",0x166,0,&cf_Failedtodeleteallrecords);
  }
  return 0;
}


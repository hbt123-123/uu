// rea decompile_all
// name: SADatabase::open
// address: 0x10071e148
// body: available
// range: 0x10071e148-0x10071e263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int SADatabase::open(char *param_1,int param_2,...)

{
  bool bVar1;
  int iVar2;
  ID self;
  char *filename;
  sqlite3 **ppDb;
  
  bVar1 = isOpen((ID)param_1);
  if ((bVar1 & 1) == 0) {
    ppDb = (sqlite3 **)(param_1 + 8);
    if (*ppDb != (sqlite3 *)0x0) {
      close((ID)param_1);
    }
    self = filePath((ID)param_1);
    _objc_retainAutorelease();
    filename = (char *)objc_stub::UTF8String(self);
    iVar2 = _sqlite3_open_v2(filename,ppDb,6,(char *)0x0);
    if (iVar2 == 0) {
      iVar2 = 1;
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,8,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase open]",0x4e,0,&cf_SuccesstoopenSQLitedb);
      setIsOpen_((ID)param_1,1);
    }
    else {
      *ppDb = (sqlite3 *)0x0;
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase open]",0x4b,0,&cf_FailedtoopenSQLitedb);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


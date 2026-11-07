// rea decompile_all
// name: SADatabase::close
// address: 0x10071e264
// body: available
// range: 0x10071e264-0x10071e2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

int SADatabase::close(int param_1)

{
  ulong uVar1;
  ID IVar2;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(long *)(uVar1 + 0x10) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(uVar1 + 0x10) = 0;
  if (*(sqlite3 **)(uVar1 + 8) != (sqlite3 *)0x0) {
    _sqlite3_close(*(sqlite3 **)(uVar1 + 8));
  }
  *(undefined8 *)(uVar1 + 8) = 0;
  *(undefined2 *)(uVar1 + 0x18) = 0;
  IVar2 = objc_stub::log_level_file_function_line_context_format_
                    ((ID)&objc::class_t::SALog,1,8,
                     "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                     ,"-[SADatabase close]",0x5c,0,&cf___closedatabase,uVar1);
  return (int)IVar2;
}


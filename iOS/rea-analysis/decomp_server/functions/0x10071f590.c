// rea decompile_all
// name: SADatabase::preCheckForInsertRecords:
// address: 0x10071f590
// body: available
// range: 0x10071f590-0x10071f69f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

bool SADatabase::preCheckForInsertRecords_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  bool bVar1;
  unsigned_long_long uVar2;
  unsigned_long_long uVar3;
  
  uVar2 = maxCacheSize(param_1);
  if (param_3 <= uVar2) {
    do {
      uVar2 = count(param_1);
      uVar3 = maxCacheSize(param_1);
      if (uVar2 + param_3 < uVar3) {
        return 1;
      }
      uVar2 = maxCacheSize(param_1);
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,2,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
                 ,"-[SADatabase preCheckForInsertRecords:]",0x174,0,
                 &cf_AddObjectToDatabasetouchMAX_MESSAGE_SIZE__lu_trytodeletesomeoldevents,uVar2);
      bVar1 = deleteFirstRecords_(param_1,100);
    } while ((bVar1 & 1) != 0);
    uVar2 = maxCacheSize(param_1);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Tracker/SADatabase.m"
               ,"-[SADatabase preCheckForInsertRecords:]",0x176,0,
               &cf_AddObjectToDatabasetouchMAX_MESSAGE_SIZE__lu_trytodeletesomeoldeventsFAILED,uVar2
              );
  }
  return 0;
}


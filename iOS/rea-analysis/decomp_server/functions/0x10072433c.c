// rea decompile_all
// name: SensorsAnalyticsSDK::startFlushTimer
// address: 0x10072433c
// body: available
// range: 0x10072433c-0x1007243d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::startFlushTimer(ID param_1,SEL param_2)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  objc_stub::log_level_file_function_line_context_format_
            ((ID)&objc::class_t::SALog,1,8,
             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SensorsAnalyticsSDK.m"
             ,"-[SensorsAnalyticsSDK startFlushTimer]",0x374,0,&cf_startingflushtimer_);
  local_48 = PTR___NSConcreteStackBlock_100995490;
  local_40 = 0xc2000000;
  local_38 = FUN_1007243d8;
  puStack_30 = &DAT_1009e7950;
  local_28 = param_1;
  _dispatch_async(PTR___dispatch_main_q_1009954b0,&local_48);
  return;
}


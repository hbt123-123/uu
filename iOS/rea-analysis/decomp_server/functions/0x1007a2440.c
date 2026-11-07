// rea decompile_all
// name: SentryProfilerState::appendBacktrace:
// address: 0x1007a2440
// body: available
// range: 0x1007a2440-0x1007a248f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void SentryProfilerState::appendBacktrace_(ID param_1,SEL param_2,const_void__ param_3)

{
  undefined *local_40;
  undefined8 local_38;
  code *local_30;
  undefined *puStack_28;
  ID local_20;
  const_void__ pvStack_18;
  
  local_40 = PTR___NSConcreteStackBlock_100995490;
  local_38 = 0xc2000000;
  local_30 = FUN_1007a2494;
  puStack_28 = &DAT_1009ea1a8;
  local_20 = param_1;
  pvStack_18 = param_3;
  objc_stub::FUN_1007ee760(param_1,&local_40);
  return;
}


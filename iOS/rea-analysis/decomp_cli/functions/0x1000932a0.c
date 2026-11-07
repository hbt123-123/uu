// rea decompile_all
// name: FUN_1000932a0
// address: 0x1000932a0
// body: available
// range: 0x1000932a0-0x10009335b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000932a0(code *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 local_60 [16];
  ulong local_50;
  ulong uStack_48;
  undefined1 local_40 [16];
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
      (*param_1)(local_40);
    }
    else {
      uStack_48 = param_4 & 0xffffffffffffff;
      local_50 = param_3;
      (*param_1)(local_60,&local_50,param_4 >> 0x38 & 0xf);
    }
  }
  return;
}


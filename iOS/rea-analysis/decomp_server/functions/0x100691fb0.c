// rea decompile_all
// name: FUN_100691fb0
// address: 0x100691fb0
// body: available
// range: 0x100691fb0-0x100692043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100691fb0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_38;
  
  local_38 = 0;
  if (param_2 != 0) {
    if (param_2 == 2) {
      local_38 = *(undefined8 *)(param_1 + 0x10);
    }
    else if (param_2 == 1) {
      local_38 = *(undefined8 *)(param_1 + 8);
    }
    else {
      FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0x6c,
                    "Write","false");
    }
  }
  FUN_100691ae4(param_1,&local_38,param_3,param_4);
  return;
}


// rea decompile_all
// name: FUN_100692c10
// address: 0x100692c10
// body: available
// range: 0x100692c10-0x100692c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100692c10(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 == 2) {
    lVar2 = *(long *)(param_1 + 0x10);
LAB_100692c70:
    param_2 = lVar2 + param_2;
  }
  else {
    if (param_3 == 1) {
      lVar2 = *(long *)(param_1 + 8);
      goto LAB_100692c70;
    }
    if (param_3 != 0) {
      FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/ptrbuffer.cc",0x61,
                    "Seek","false");
      param_2 = *(ulong *)(param_1 + 8);
      goto joined_r0x000100692c78;
    }
  }
  *(ulong *)(param_1 + 8) = param_2;
joined_r0x000100692c78:
  if ((long)param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x10);
    if ((param_2 & 0xffffffff) <= uVar1) {
      return;
    }
  }
  *(ulong *)(param_1 + 8) = uVar1;
  return;
}


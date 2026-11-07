// rea decompile_all
// name: FUN_10065a120
// address: 0x10065a120
// body: available
// range: 0x10065a120-0x10065a1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065a120(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_1006612a4(auStack_60,param_2);
  uVar1 = 0;
  FUN_10065fa88(0);
  FUN_100643424(param_2,auStack_88);
  FUN_100644548(auStack_60);
  FUN_1006599cc(uVar1);
  if ((char)param_1[4] == '\x01') {
    if ((char)param_1[2] == '\0') {
      if (*param_1 != 0 || param_1[1] != 0) {
        return;
      }
    }
    else {
      if ((char)param_1[2] == '\x01') {
        return;
      }
      if (*(long *)(param_1[3] + 0x10) != 0) {
        return;
      }
    }
    FUN_100646fb0(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
  }
  return;
}


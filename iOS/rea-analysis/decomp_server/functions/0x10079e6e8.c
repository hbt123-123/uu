// rea decompile_all
// name: FUN_10079e6e8
// address: 0x10079e6e8
// body: available
// range: 0x10079e6e8-0x10079e78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10079e6e8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined1 auStack_398 [44];
  undefined1 local_36c;
  code *local_360;
  
  puVar1 = param_2;
  _bzero(param_2,0x4d0);
  *param_2 = (int)param_1;
  FUN_1007871b4();
  *(char *)(param_2 + 0x66) = (char)param_3;
  *(undefined1 *)((long)param_2 + 0x19b) = 0;
  *(bool *)((long)param_2 + 0x199) = puVar1 == param_1;
  if (puVar1 != param_1) {
    FUN_100761fa0(param_2);
    param_3 = (uint)*(byte *)(param_2 + 0x66);
  }
  if (param_3 != 0) {
    FUN_100769e5c(auStack_398,0x96,param_2);
    do {
      uVar2 = 0;
      (*local_360)();
    } while ((uVar2 & 1) != 0);
    *(undefined1 *)((long)param_2 + 0x19a) = local_36c;
    FUN_10079e7b4(param_2);
  }
  return 1;
}


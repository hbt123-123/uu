// rea decompile_all
// name: FUN_10069ada4
// address: 0x10069ada4
// body: available
// range: 0x10069ada4-0x10069ae37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069ada4(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 local_38;
  
  if (*(int *)(param_2 + 0x18) == 0 || *(int *)(param_2 + 0x1c) == 0xffff) {
    if ((*(uint *)(param_2 + 0x20) & 0xfffffffb) == 0 || *(int *)(param_2 + 0x24) == 0xffff) {
      FUN_10069a9a4(&local_38,param_2,param_3);
      *(undefined8 *)(param_2 + 0x18) = local_38;
      goto LAB_10069ae1c;
    }
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x20);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x24);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    lVar1 = param_2;
    FUN_10069f164();
    *(long *)(param_3 + 2) = lVar1;
  }
LAB_10069ae1c:
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  return;
}


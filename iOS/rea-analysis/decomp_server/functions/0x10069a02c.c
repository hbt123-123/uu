// rea decompile_all
// name: FUN_10069a02c
// address: 0x10069a02c
// body: available
// range: 0x10069a02c-0x10069a0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10069a02c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  ulong uStack_30;
  byte local_21;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  if (param_2 != param_3) {
    FUN_10069bc50(&local_38,param_2,param_3,param_3 - param_2);
    pppuVar1 = (undefined8 ***)local_38;
    if (-1 < (char)local_21) {
      uStack_30 = (ulong)local_21;
      pppuVar1 = &local_38;
    }
    FUN_10069bcec(param_1,pppuVar1,(long)pppuVar1 + uStack_30);
    if ((char)local_21 < '\0') {
      operator_delete(local_38);
    }
  }
  return param_1;
}


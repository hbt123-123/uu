// rea decompile_all
// name: FUN_10069bc50
// address: 0x10069bc50
// body: available
// range: 0x10069bc50-0x10069bceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069bce8 to 0x100692980 FUN_100692980 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069bc50(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar3 = param_1;
    }
    else {
      uVar1 = 0x19;
      if ((param_4 | 7) != 0x17) {
        uVar1 = (param_4 | 7) + 1;
      }
      puVar3 = operator_new(uVar1);
      param_1[1] = param_4;
      param_1[2] = uVar1 | 0x8000000000000000;
      *param_1 = puVar3;
    }
    sVar2 = param_3 - (long)param_2;
    if (sVar2 != 0) {
      _memmove(puVar3,param_2,sVar2);
    }
    *(undefined1 *)((long)puVar3 + sVar2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100692980();
}


// rea decompile_all
// name: FUN_100384ff4
// address: 0x100384ff4
// body: available
// range: 0x100384ff4-0x100385097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100385094 to 0x100384e54 FUN_100384e54 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100384ff4(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = _strlen(param_2);
  if (0x7ffffffffffffff7 < sVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_100384e54();
  }
  if (sVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)sVar2;
    puVar3 = param_1;
    if (sVar2 == 0) goto LAB_100385078;
  }
  else {
    uVar1 = 0x19;
    if ((sVar2 | 7) != 0x17) {
      uVar1 = (sVar2 | 7) + 1;
    }
    puVar3 = operator_new(uVar1);
    param_1[1] = sVar2;
    param_1[2] = uVar1 | 0x8000000000000000;
    *param_1 = puVar3;
  }
  _memmove(puVar3,param_2,sVar2);
LAB_100385078:
  *(undefined1 *)((long)puVar3 + sVar2) = 0;
  return param_1;
}


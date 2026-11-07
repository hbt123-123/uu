// rea decompile_all
// name: FUN_1003830ac
// address: 0x1003830ac
// body: available
// range: 0x1003830ac-0x10038315b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100383158 to 0x1003860f8 FUN_1003860f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1003830ac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar9 = (ulong)bVar3;
  uVar8 = param_1[1];
  uVar10 = uVar8;
  if (-1 < (char)bVar3) {
    uVar10 = uVar9;
  }
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  uVar5 = uVar10 - uVar1;
  if (uVar10 < uVar1) {
    bVar6 = false;
  }
  else {
    if ((char)bVar3 < '\0') {
      if (uVar1 == 0xffffffffffffffff || uVar8 < uVar5) goto LAB_100383158;
      uVar10 = uVar8 - uVar5;
      if (uVar1 <= uVar8 - uVar5) {
        uVar10 = uVar1;
      }
      param_1 = (undefined8 *)*param_1;
    }
    else {
      if (uVar9 < uVar5 || uVar1 == 0xffffffffffffffff) {
LAB_100383158:
                    /* WARNING: Subroutine does not return */
        FUN_1003860f8();
      }
      uVar10 = uVar9 - uVar5;
      if (uVar1 <= uVar9 - uVar5) {
        uVar10 = uVar1;
      }
    }
    puVar2 = (void *)*param_2;
    if (-1 < (char)bVar4) {
      puVar2 = param_2;
    }
    iVar7 = _memcmp((void *)((long)param_1 + uVar5),puVar2,uVar10);
    bVar6 = iVar7 == 0 && uVar10 == uVar1;
  }
  return bVar6;
}


// rea decompile_all
// name: FUN_1005ce070
// address: 0x1005ce070
// body: available
// range: 0x1005ce070-0x1005ce157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ce154 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ce070(char *param_1)

{
  bool bVar1;
  uint uVar2;
  size_t sVar3;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  ulong uVar4;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  bVar1 = false;
  if (param_1 != (char *)0x0) {
    sVar3 = _strnlen(param_1,0x81);
    if (sVar3 == 0x80) {
      lVar6 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      do {
        uVar2 = _sscanf(param_1,"%2x");
        uVar4 = (ulong)uVar2;
        if (uVar2 != 1) goto LAB_1005ce120;
        *(undefined1 *)((long)&local_90 + lVar6) = 0;
        lVar6 = lVar6 + 1;
        param_1 = param_1 + 2;
      } while (lVar6 != 0x40);
      FUN_1006aaa18();
      puVar5 = &local_90;
      FUN_1006ab764(puVar5,uVar4);
      bVar1 = (int)puVar5 == 1;
    }
    else {
LAB_1005ce120:
      bVar1 = false;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}


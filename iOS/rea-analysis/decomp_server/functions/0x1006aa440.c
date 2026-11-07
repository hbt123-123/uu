// rea decompile_all
// name: FUN_1006aa440
// address: 0x1006aa440
// body: available
// range: 0x1006aa440-0x1006aa5c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aa5c4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006aa440(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  byte bVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  *param_1 = &PTR_FUN_1009e6f50;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  if ((param_2 != (char *)0x0) && (sVar3 = _strnlen(param_2,0x100), sVar3 == 0x80)) {
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    local_b0[0] = local_b0[0] & 0xffffffffff000000;
    uVar9 = 0;
    do {
      uVar7 = 0;
      bVar1 = true;
      do {
        bVar8 = bVar1;
        bVar2 = param_2[uVar7 | uVar9];
        *(byte *)((long)local_b0 + uVar7) = bVar2;
        if ((9 < (byte)(bVar2 - 0x30)) &&
           (0x25 < bVar2 - 0x41 || (1L << ((ulong)(bVar2 - 0x41) & 0x3f) & 0x3f0000003fU) == 0))
        goto LAB_1006aa590;
        uVar7 = 1;
        bVar1 = false;
      } while (bVar8);
      lVar4 = _strtol((char *)local_b0,(char **)0x0,0x10);
      *(char *)((long)&local_90 + (uVar9 >> 1)) = (char)lVar4;
      bVar1 = uVar9 < 0x7d;
      uVar9 = uVar9 + 2;
    } while (bVar1);
    local_b0[1] = 0;
    local_b0[0] = 0;
    local_b0[3] = 0;
    local_b0[2] = 0;
    FUN_1006aaa18();
    lVar5 = (long)param_1 + 0x1c;
    FUN_1006aaa24(lVar5,local_b0,lVar4);
    if ((int)lVar5 != 0) {
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      FUN_1006aaa18();
      puVar6 = &local_90;
      FUN_1006aad98(puVar6,local_b0,&local_d0,lVar5);
      if ((int)puVar6 != 0) {
        *(undefined8 *)((long)param_1 + 0x14) = uStack_c8;
        *(undefined8 *)((long)param_1 + 0xc) = local_d0;
        *(undefined1 *)((long)param_1 + 0x5c) = 1;
      }
    }
  }
LAB_1006aa590:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


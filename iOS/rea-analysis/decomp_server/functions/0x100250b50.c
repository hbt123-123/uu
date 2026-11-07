// rea decompile_all
// name: FUN_100250b50
// address: 0x100250b50
// body: available
// range: 0x100250b50-0x100250cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100250cf8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100250b50(long param_1,char *param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  char acStack_159 [257];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (((param_1 != 0) && (sVar5 = _strlen(param_2), sVar5 < 0x100)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    uVar14 = *(undefined8 *)(param_1 + 0x138);
    uVar8 = *(undefined8 *)(param_1 + 0x130);
    uVar24 = *(undefined8 *)(param_1 + 0x148);
    uVar20 = *(undefined8 *)(param_1 + 0x140);
    uVar15 = *(undefined8 *)(param_1 + 0x158);
    uVar9 = *(undefined8 *)(param_1 + 0x150);
    uVar7 = *(undefined8 *)(param_1 + 0x160);
    uVar16 = *(undefined8 *)(param_1 + 0xf8);
    uVar10 = *(undefined8 *)(param_1 + 0xf0);
    uVar25 = *(undefined8 *)(param_1 + 0x108);
    uVar21 = *(undefined8 *)(param_1 + 0x100);
    uVar17 = *(undefined8 *)(param_1 + 0x118);
    uVar11 = *(undefined8 *)(param_1 + 0x110);
    uVar26 = *(undefined8 *)(param_1 + 0x128);
    uVar22 = *(undefined8 *)(param_1 + 0x120);
    uVar18 = *(undefined8 *)(param_1 + 0xd8);
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    uVar27 = *(undefined8 *)(param_1 + 0xe8);
    uVar23 = *(undefined8 *)(param_1 + 0xe0);
    puVar1 = (undefined8 *)(param_1 + 0x168);
    uVar19 = *(undefined8 *)(param_1 + 0x170);
    uVar13 = *puVar1;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 200);
    lVar6 = param_1;
    FUN_10024f750(param_1,param_1 + 0xd0,puVar1,acStack_159,0x100,0,0,0,0);
    iVar4 = (int)lVar6;
    *(ulong *)(param_1 + 0xa8) = (ulong)(iVar4 == 0);
    while (iVar4 == 0) {
      if (param_3 == (code *)0x0) {
        iVar4 = _strcmp(acStack_159,param_2);
      }
      else {
        lVar6 = param_1;
        (*param_3)(param_1,acStack_159,param_2);
        iVar4 = (int)lVar6;
      }
      if (iVar4 == 0) goto LAB_100250ba0;
      lVar6 = param_1;
      FUN_100250a40(param_1,0,acStack_159,0x100,0,0,0,0);
      iVar4 = (int)lVar6;
    }
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    *(undefined8 *)(param_1 + 0x138) = uVar14;
    *(undefined8 *)(param_1 + 0x130) = uVar8;
    *(undefined8 *)(param_1 + 0x148) = uVar24;
    *(undefined8 *)(param_1 + 0x140) = uVar20;
    *(undefined8 *)(param_1 + 0x158) = uVar15;
    *(undefined8 *)(param_1 + 0x150) = uVar9;
    *(undefined8 *)(param_1 + 0x160) = uVar7;
    *(undefined8 *)(param_1 + 0xf8) = uVar16;
    *(undefined8 *)(param_1 + 0xf0) = uVar10;
    *(undefined8 *)(param_1 + 0x108) = uVar25;
    *(undefined8 *)(param_1 + 0x100) = uVar21;
    *(undefined8 *)(param_1 + 0x118) = uVar17;
    *(undefined8 *)(param_1 + 0x110) = uVar11;
    *(undefined8 *)(param_1 + 0x128) = uVar26;
    *(undefined8 *)(param_1 + 0x120) = uVar22;
    *(undefined8 *)(param_1 + 0xd8) = uVar18;
    *(undefined8 *)(param_1 + 0xd0) = uVar12;
    *(undefined8 *)(param_1 + 0xe8) = uVar27;
    *(undefined8 *)(param_1 + 0xe0) = uVar23;
    *(undefined8 *)(param_1 + 0x170) = uVar19;
    *puVar1 = uVar13;
  }
LAB_100250ba0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


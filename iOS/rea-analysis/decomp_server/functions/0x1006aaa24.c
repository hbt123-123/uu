// rea decompile_all
// name: FUN_1006aaa24
// address: 0x1006aaa24
// body: available
// range: 0x1006aaa24-0x1006aabc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aabc0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aaa24(undefined1 *param_1,long param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  short sVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  long lVar9;
  ulong auStack_98 [8];
  ulong auStack_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar9 = 0x40;
  while( true ) {
    sVar3 = *(short *)(param_3 + 2);
    iVar1 = sVar3 + 0x7e;
    if (-0x40 < sVar3) {
      iVar1 = sVar3 + 0x3f;
    }
    puVar4 = auStack_58;
    FUN_1006aabc4(puVar4,param_3 + 0x28,(iVar1 << 0x12) >> 0x18);
    if ((int)puVar4 == 0) goto LAB_1006aab94;
    puVar4 = auStack_98;
    FUN_1006aacb8(puVar4,auStack_58,param_3);
    if (puVar4 != (ulong *)0x0) break;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB_1006aab94;
  }
  sVar3 = *(short *)(param_3 + 2);
  iVar1 = sVar3 + 0xe;
  if (-8 < sVar3) {
    iVar1 = sVar3 + 7;
  }
  if (0 < sVar3) {
    uVar6 = 0;
    cVar5 = '\0';
    do {
      uVar6 = (iVar1 >> 3) + ~uVar6;
      *(char *)(param_2 + cVar5) =
           (char)(*(ulong *)((long)auStack_58 + (ulong)(uVar6 & 0xfffffff8)) >> ((uVar6 & 7) << 3));
      cVar5 = cVar5 + '\x01';
      uVar6 = (uint)cVar5;
    } while ((int)cVar5 < iVar1 >> 3);
  }
  cVar5 = param_3[1];
  uVar6 = (uint)cVar5;
  if (0 < (int)uVar6) {
    lVar9 = (long)(int)cVar5;
    uVar8 = cVar5 * 8;
    puVar7 = param_1;
    do {
      uVar6 = uVar6 - 1;
      uVar8 = uVar8 - 8;
      *puVar7 = (char)(*(ulong *)((long)auStack_98 + (ulong)(uVar6 & 0xfffffff8)) >> (uVar8 & 0x38))
      ;
      lVar9 = lVar9 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
    cVar5 = param_3[1];
    if (0 < (long)cVar5) {
      cVar2 = *param_3;
      lVar9 = (long)(int)cVar5;
      uVar8 = (uint)cVar5;
      uVar6 = uVar8 * 8;
      puVar7 = param_1 + cVar5;
      do {
        uVar8 = uVar8 - 1;
        uVar6 = uVar6 - 8;
        *puVar7 = (char)(*(ulong *)((long)auStack_98 + (ulong)(uVar8 & 0xfffffff8) + (long)cVar2 * 8
                                   ) >> (uVar6 & 0x38));
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_1006aab94:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


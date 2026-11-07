// rea decompile_all
// name: FUN_1006ab7f8
// address: 0x1006ab7f8
// body: available
// range: 0x1006ab7f8-0x1006ab987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ab984 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ab7f8(undefined8 param_1,undefined1 *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  ulong *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong auStack_98 [8];
  ulong local_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  sVar4 = *(short *)(param_3 + 2);
  iVar13 = (int)sVar4;
  iVar1 = iVar13 + 0xe;
  if (-8 < sVar4) {
    iVar1 = sVar4 + 7;
  }
  FUN_1006aaf60(local_58,param_1,iVar1 >> 3);
  iVar1 = iVar13 + 0x7e;
  if (-0x40 < iVar13) {
    iVar1 = iVar13 + 0x3f;
  }
  if (0 < (iVar1 << 0x12) >> 0x18) {
    uVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = local_58[uVar12] | uVar9;
      uVar12 = uVar12 + 1;
    } while ((iVar1 >> 6 & 0x7f) != uVar12);
    if (uVar9 != 0) {
      pcVar5 = param_3 + 0x28;
      FUN_1006ab988(pcVar5,local_58,(int)(char)(iVar1 >> 6));
      if ((int)pcVar5 == 1) {
        puVar6 = auStack_98;
        FUN_1006aacb8(puVar6,local_58,param_3);
        if (puVar6 != (ulong *)0x0) {
          cVar2 = param_3[1];
          uVar7 = (uint)cVar2;
          if (0 < (int)uVar7) {
            lVar10 = (long)(int)cVar2;
            uVar11 = cVar2 * 8;
            puVar8 = param_2;
            do {
              uVar7 = uVar7 - 1;
              uVar11 = uVar11 - 8;
              *puVar8 = (char)(*(ulong *)((long)auStack_98 + (ulong)(uVar7 & 0xfffffff8)) >>
                              (uVar11 & 0x38));
              lVar10 = lVar10 + -1;
              puVar8 = puVar8 + 1;
            } while (lVar10 != 0);
            cVar2 = param_3[1];
            if (0 < (long)cVar2) {
              cVar3 = *param_3;
              lVar10 = (long)(int)cVar2;
              uVar11 = (uint)cVar2;
              uVar7 = uVar11 * 8;
              puVar8 = param_2 + cVar2;
              do {
                uVar11 = uVar11 - 1;
                uVar7 = uVar7 - 8;
                *puVar8 = (char)(*(ulong *)((long)auStack_98 +
                                           (ulong)(uVar11 & 0xfffffff8) + (long)cVar3 * 8) >>
                                (uVar7 & 0x38));
                lVar10 = lVar10 + -1;
                puVar8 = puVar8 + 1;
              } while (lVar10 != 0);
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


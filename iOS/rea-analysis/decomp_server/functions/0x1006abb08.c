// rea decompile_all
// name: FUN_1006abb08
// address: 0x1006abb08
// body: available
// range: 0x1006abb08-0x1006abe2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006abe2c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006abb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined1 *param_5,char *param_6)

{
  char cVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  size_t sVar13;
  ulong local_100 [8];
  ulong *local_c0 [2];
  ulong auStack_b0 [4];
  ulong local_90 [4];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_c0[0] = local_90;
  local_c0[1] = auStack_b0;
  sVar2 = *(short *)(param_6 + 2);
  iVar12 = sVar2 + 0x7e;
  if (-0x40 < sVar2) {
    iVar12 = sVar2 + 0x3f;
  }
  if (0 < (long)*param_6) {
    lVar10 = 0;
    uVar8 = 0;
    sVar13 = (long)*param_6 * 8;
    do {
      uVar8 = *(ulong *)(param_4 + lVar10) | uVar8;
      lVar10 = lVar10 + 8;
    } while (sVar13 - lVar10 != 0);
    if (uVar8 != 0) {
      cVar3 = (char)(iVar12 >> 6);
      iVar4 = (int)cVar3;
      pcVar5 = param_6 + 0x28;
      FUN_1006ab988(pcVar5,param_4,iVar4);
      if ((int)pcVar5 == 1) {
        uVar8 = param_4;
        FUN_1006aaffc(param_4,local_90,auStack_b0,param_6);
        FUN_1006ab0c8(local_100,param_6 + 0x48,local_c0[uVar8 ^ 1],0,(int)(short)(sVar2 + 1),param_6
                     );
        lVar10 = 0;
        uVar8 = 0;
        do {
          uVar8 = *(ulong *)((long)local_100 + lVar10) | uVar8;
          lVar10 = lVar10 + 8;
        } while (sVar13 - lVar10 != 0);
        if (uVar8 != 0) {
          if (PTR_FUN_100aba058 == (undefined *)0x0) {
            if (0 < iVar4) {
              _bzero(local_90,(ulong)((iVar12 >> 6 & 0x7fU) << 3));
            }
            local_90[0] = 1;
          }
          else {
            puVar6 = local_90;
            FUN_1006aabc4(puVar6,param_6 + 0x28,iVar4);
            if ((int)puVar6 == 0) goto LAB_1006abda0;
          }
          FUN_1006acd74(param_4,param_4,local_90,param_6 + 0x28,iVar4);
          FUN_1006ac870(param_4,param_4,param_6 + 0x28,iVar4);
          FUN_1006acd74(param_4,param_4,local_90,param_6 + 0x28,iVar4);
          cVar1 = param_6[1];
          uVar7 = (uint)cVar1;
          if (0 < (int)uVar7) {
            lVar10 = (long)(int)cVar1;
            uVar11 = cVar1 * 8;
            puVar9 = param_5;
            do {
              uVar7 = uVar7 - 1;
              uVar11 = uVar11 - 8;
              *puVar9 = (char)(*(ulong *)((long)local_100 + (ulong)(uVar7 & 0xfffffff8)) >>
                              (uVar11 & 0x38));
              lVar10 = lVar10 + -1;
              puVar9 = puVar9 + 1;
            } while (lVar10 != 0);
          }
          sVar2 = *(short *)(param_6 + 2);
          iVar12 = sVar2 + 0xe;
          if (-8 < sVar2) {
            iVar12 = sVar2 + 7;
          }
          FUN_1006aaf60(local_90,param_1,iVar12 >> 3);
          auStack_b0[(long)cVar3 + -1] = 0;
          _memcpy(auStack_b0,local_100,sVar13);
          FUN_1006acd74(auStack_b0,local_90,auStack_b0,param_6 + 0x28,iVar4);
          FUN_1006acc3c(local_90,param_2,param_3,param_6);
          FUN_1006adc18(auStack_b0,local_90,auStack_b0,param_6 + 0x28,iVar4);
          FUN_1006acd74(auStack_b0,auStack_b0,param_4,param_6 + 0x28,iVar4);
          puVar6 = auStack_b0;
          FUN_1006ad34c(puVar6,iVar4);
          iVar12 = (int)param_6[1];
          uVar7 = iVar12 * 8;
          if (((int)puVar6 <= (int)uVar7) && (0 < iVar12)) {
            uVar11 = (uint)param_6[1];
            lVar10 = (long)(int)uVar11;
            puVar9 = param_5 + iVar12;
            do {
              uVar11 = uVar11 - 1;
              uVar7 = uVar7 - 8;
              *puVar9 = (char)(*(ulong *)((long)auStack_b0 + (ulong)(uVar11 & 0xfffffff8)) >>
                              (uVar7 & 0x38));
              lVar10 = lVar10 + -1;
              puVar9 = puVar9 + 1;
            } while (lVar10 != 0);
          }
        }
      }
    }
  }
LAB_1006abda0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


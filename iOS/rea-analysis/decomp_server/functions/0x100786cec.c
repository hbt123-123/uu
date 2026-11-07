// rea decompile_all
// name: FUN_100786cec
// address: 0x100786cec
// body: available
// range: 0x100786cec-0x100786fb7 inclusive
// range: 0x100786fbc-0x100786fcf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100786fb4 to 0x10074d7cc FUN_10074d7cc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100786fcc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100786cec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  long *plVar13;
  char local_511;
  long local_510;
  long lStack_508;
  long local_500;
  undefined1 local_4f8;
  undefined7 uStack_4f7;
  undefined8 uStack_4f0;
  undefined7 local_4e8;
  char cStack_4e1;
  undefined4 local_4e0;
  long local_4d8;
  void *local_4d0;
  undefined8 uStack_4c8;
  long local_4c0;
  undefined4 local_4b8;
  undefined8 ***local_4a8;
  undefined8 ***local_4a0;
  undefined8 ***local_498;
  long *local_490;
  long *plStack_488;
  void *local_478;
  undefined8 local_470 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_10079ae54(&local_490);
  if (local_490 != plStack_488) {
    plVar13 = local_490;
    do {
      uStack_4c8 = 0;
      local_4c0 = 0;
      local_4d0 = (void *)0x0;
      local_4a0 = (undefined8 ****)0x0;
      local_498 = (undefined8 ****)0x0;
      local_4a8 = (undefined8 ****)0x0;
      iVar3 = (int)*plVar13;
      FUN_10079b3e8();
      if (iVar3 == 0) {
        lVar4 = *plVar13;
        FUN_10074d300(&local_500,param_2);
        if (local_500 != 0) {
          local_4d8 = local_500;
          if (local_4c0 < 0) {
            operator_delete(local_4d0);
          }
          local_4d0 = (void *)CONCAT71(uStack_4f7,local_4f8);
          uStack_4c8 = uStack_4f0;
          local_4c0 = CONCAT17(cStack_4e1,local_4e8);
          cStack_4e1 = '\0';
          local_4f8 = 0;
          local_4b8 = local_4e0;
          lVar6 = *plVar13;
          FUN_10079b49c();
          iVar3 = (int)*plVar13;
          local_510 = lVar6;
          lStack_508 = lVar4;
          FUN_10079b4e8();
          if (iVar3 != 0) {
            local_511 = '\0';
            lVar4 = *plVar13;
            FUN_100786ab4(lVar4,local_478,local_470,&local_510,&local_511,0x80,0);
            FUN_10079b510(*plVar13);
            if (local_511 != '\0') {
              if (lVar4 != 0) {
                lVar6 = 0;
                do {
                  if (local_4a0 == local_498) {
                    uVar9 = (long)local_4a0 - (long)local_4a8;
                    uVar1 = ((long)uVar9 >> 3) + 1;
                    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_10074d7cc(&local_4a8);
                    }
                    uVar8 = (long)uVar9 >> 2;
                    if ((ulong)((long)uVar9 >> 2) <= uVar1) {
                      uVar8 = uVar1;
                    }
                    if (0x7ffffffffffffff7 < uVar9) {
                      uVar8 = 0x1fffffffffffffff;
                    }
                    if (uVar8 == 0) {
                      ppppuVar10 = (undefined8 ****)0x0;
                    }
                    else {
                      ppppuVar10 = &local_498;
                      FUN_10038c0f4();
                    }
                    ppppuVar11 = ppppuVar10 + ((long)uVar9 >> 3);
                    ppppuVar12 = ppppuVar11 + 1;
                    *ppppuVar11 = (undefined8 ***)local_470[lVar6];
                    while (local_4a0 != local_4a8) {
                      local_4a0 = local_4a0 + -1;
                      ppppuVar11 = ppppuVar11 + -1;
                      *ppppuVar11 = (undefined8 ***)*local_4a0;
                    }
                    local_498 = ppppuVar10 + uVar8;
                    local_4a0 = ppppuVar12;
                    if ((undefined8 ****)local_4a8 != (undefined8 ****)0x0) {
                      ppppuVar10 = (undefined8 ****)local_4a8;
                      local_4a8 = ppppuVar11;
                      operator_delete(ppppuVar10);
                      ppppuVar11 = (undefined8 ****)local_4a8;
                    }
                  }
                  else {
                    *local_4a0 = (undefined8 ***)local_470[lVar6];
                    ppppuVar11 = (undefined8 ****)local_4a8;
                    local_4a0 = local_4a0 + 1;
                  }
                  local_4a8 = ppppuVar11;
                  lVar6 = lVar6 + 1;
                } while (lVar6 != lVar4);
              }
              plVar5 = *(long **)(param_1 + 0x18);
              if (plVar5 == (long *)0x0) {
                FUN_100787148();
                goto LAB_100786fc8;
              }
              (**(code **)(*plVar5 + 0x30))(plVar5,&local_4d8);
            }
          }
        }
        if (cStack_4e1 < '\0') {
          operator_delete((void *)CONCAT71(uStack_4f7,local_4f8));
        }
      }
      else {
        lVar4 = *plVar13;
        FUN_10079b124();
        local_4b8 = 0xffffffff;
        plVar5 = *(long **)(param_1 + 0x18);
        local_4d8 = lVar4;
        if (plVar5 == (long *)0x0) {
          FUN_100787148();
LAB_100786fc8:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100786fcc);
          (*pcVar2)();
        }
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_4d8);
      }
      if ((undefined8 ****)local_4a8 != (undefined8 ****)0x0) {
        local_4a0 = local_4a8;
        operator_delete(local_4a8);
      }
      if (local_4c0 < 0) {
        operator_delete(local_4d0);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plStack_488);
  }
  pvVar7 = local_478;
  local_478 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    thunk_FUN_10079ab58();
    operator_delete(pvVar7);
  }
  FUN_10078709c(&local_490);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


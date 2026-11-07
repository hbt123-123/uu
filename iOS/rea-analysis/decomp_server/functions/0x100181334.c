// rea decompile_all
// name: FUN_100181334
// address: 0x100181334
// body: available
// range: 0x100181334-0x1001815d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001815d4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100181334(long *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  long local_68;
  int iVar9;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar8 = uVar2 >> 0x1e;
  iVar12 = (int)param_4;
  iVar9 = (int)((ulong)param_4 >> 0x20);
  uVar3 = (uint)(param_5 >> 0x20);
  if (uVar2 >> 0x1e < 2) {
    if (uVar8 != 0) {
      lVar11 = (long)(int)param_2;
      lVar10 = (param_2 >> 0x20) - lVar11;
      if (param_2 >> 0x20 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001815c8);
        (*pcVar4)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      lVar5 = param_2;
      if (param_2 != 0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar11,lVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1001815d0);
          (*pcVar4)();
        }
        param_2 = (lVar11 - lVar5) + param_2;
      }
LAB_100181494:
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar10 <= lVar5) {
        lVar5 = lVar10;
      }
      lVar11 = 0;
      if (param_2 != 0) {
        lVar11 = lVar5 + param_2;
      }
      FUN_100180840(param_1,param_2,lVar11,param_4,param_5,param_6,param_7);
      FUN_100006cdc(param_4,param_5);
      goto LAB_10018157c;
    }
    local_78 = (undefined1)param_2;
    uStack_77 = (undefined1)((ulong)param_2 >> 8);
    uStack_76 = (undefined1)((ulong)param_2 >> 0x10);
    uStack_75 = (undefined1)((ulong)param_2 >> 0x18);
    uStack_74 = (undefined1)((ulong)param_2 >> 0x20);
    uStack_73 = (undefined1)((ulong)param_2 >> 0x28);
    uStack_72 = (undefined1)((ulong)param_2 >> 0x30);
    uStack_71 = (undefined1)((ulong)param_2 >> 0x38);
    uStack_70 = (undefined1)param_3;
    uStack_6f = (undefined1)((ulong)param_3 >> 8);
    uStack_6e = (undefined1)((ulong)param_3 >> 0x10);
    uStack_6d = (undefined1)((ulong)param_3 >> 0x18);
    uStack_6c = (undefined1)((ulong)param_3 >> 0x20);
    uStack_6b = (undefined1)((ulong)param_3 >> 0x28);
    if (uVar3 >> 0x1e < 2) {
      if (uVar3 >> 0x1e != 0) {
        if (SBORROW4(iVar9,iVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100181418);
          (*pcVar4)();
        }
        goto LAB_100181548;
      }
LAB_100181500:
      uVar7 = param_5 >> 0x30 & 0xff;
    }
    else if (uVar3 >> 0x1e == 2) {
      uVar7 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100181520);
        (*pcVar4)();
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    if (uVar8 == 2) {
      lVar11 = *(long *)(param_2 + 0x10);
      lVar1 = *(long *)(param_2 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      lVar5 = param_2;
      if (param_2 != 0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar11,lVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1001815cc);
          (*pcVar4)();
        }
        param_2 = (lVar11 - lVar5) + param_2;
      }
      lVar10 = lVar1 - lVar11;
      if (SBORROW8(lVar1,lVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100181458);
        (*pcVar4)();
      }
      goto LAB_100181494;
    }
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6b = 0;
    local_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    if (uVar3 >> 0x1e < 2) {
      if (uVar3 >> 0x1e == 0) goto LAB_100181500;
      if (SBORROW4(iVar9,iVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001815d4);
        (*pcVar4)();
      }
LAB_100181548:
      uVar7 = (ulong)(iVar9 - iVar12);
    }
    else {
      uVar7 = 0;
      if (uVar3 >> 0x1e == 2) {
        uVar7 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10018153c);
          (*pcVar4)();
        }
      }
    }
  }
  puVar6 = &local_78;
  FUN_1001808dc(puVar6,uVar7,param_6,param_7);
  FUN_100006cdc(param_4,param_5);
  *param_1 = (long)puVar6;
  param_1[1] = uVar7;
LAB_10018157c:
  FUN_100006cdc(param_6,param_7);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


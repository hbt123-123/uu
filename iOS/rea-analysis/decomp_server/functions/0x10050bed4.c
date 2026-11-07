// rea decompile_all
// name: FUN_10050bed4
// address: 0x10050bed4
// body: available
// range: 0x10050bed4-0x10050c10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10050c108 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050bed4(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long unaff_x20;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100507c1c(param_3,2);
  uVar2 = (uint)(param_2 >> 0x20);
  uVar6 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar6 != 0) {
      iVar9 = (int)param_1;
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,iVar9)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c0fc);
        (*pcVar3)();
      }
      lVar5 = (long)(iVar7 - iVar9);
      thunk_FUN_100507c64();
      lVar12 = (long)iVar9;
      lVar11 = (param_1 >> 0x20) - lVar12;
      if (param_1 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c100);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      lVar4 = lVar5;
      if (lVar5 != 0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar12,lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c108);
          (*pcVar3)();
        }
        lVar5 = (lVar12 - lVar4) + lVar5;
      }
LAB_10050c068:
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar11 <= lVar4) {
        lVar4 = lVar11;
      }
      lVar12 = 0;
      if (lVar5 != 0) {
        lVar12 = lVar4 + lVar5;
      }
      FUN_100507b9c(lVar5,lVar12,unaff_x20 + 8);
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
        return;
      }
      goto LAB_10050c108;
    }
    uVar10 = param_2 >> 0x30 & 0xff;
    thunk_FUN_100507c64(uVar10);
    local_66 = (undefined1)param_1;
    local_65 = (undefined1)((ulong)param_1 >> 8);
    local_64 = (undefined1)((ulong)param_1 >> 0x10);
    local_63 = (undefined1)((ulong)param_1 >> 0x18);
    local_62 = (undefined1)((ulong)param_1 >> 0x20);
    local_61 = (undefined1)((ulong)param_1 >> 0x28);
    local_60 = (undefined1)((ulong)param_1 >> 0x30);
    local_5f = (undefined1)((ulong)param_1 >> 0x38);
    local_5e = (undefined1)param_2;
    local_5d = (undefined1)(param_2 >> 8);
    local_5c = (undefined1)(param_2 >> 0x10);
    local_5b = (undefined1)(param_2 >> 0x18);
    local_5a = (undefined1)(param_2 >> 0x20);
    local_59 = (undefined1)(param_2 >> 0x28);
    if (uVar10 != 0) {
      pvVar8 = *(void **)(unaff_x20 + 8);
      _memcpy(pvVar8,&local_66,uVar10);
      *(ulong *)(unaff_x20 + 8) = (long)pvVar8 + uVar10;
    }
  }
  else {
    if (uVar6 == 2) {
      lVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c0f8);
        (*pcVar3)();
      }
      thunk_FUN_100507c64();
      lVar12 = *(long *)(param_1 + 0x10);
      lVar1 = *(long *)(param_1 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      lVar4 = lVar5;
      if (lVar5 != 0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar12,lVar4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c104);
          (*pcVar3)();
        }
        lVar5 = (lVar12 - lVar4) + lVar5;
      }
      lVar11 = lVar1 - lVar12;
      if (SBORROW8(lVar1,lVar12)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c01c);
        (*pcVar3)();
      }
      goto LAB_10050c068;
    }
    thunk_FUN_100507c64(0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
LAB_10050c108:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


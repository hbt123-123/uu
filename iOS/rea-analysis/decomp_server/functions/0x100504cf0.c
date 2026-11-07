// rea decompile_all
// name: FUN_100504cf0
// address: 0x100504cf0
// body: available
// range: 0x100504cf0-0x100504f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100504f10 to 0x1007de830 _memmove (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100504f60 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100504cf0(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
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
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100504f60);
    (*pcVar3)();
  }
  uVar2 = (uint)(param_4 >> 0x20);
  uVar8 = uVar2 >> 0x1e;
  iVar7 = (int)param_3;
  iVar9 = (int)((ulong)param_3 >> 0x20);
  if (uVar2 >> 0x1e < 2) {
    if (uVar8 == 0) {
      uVar10 = param_4 >> 0x30 & 0xff;
    }
    else {
      if (SBORROW4(iVar9,iVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100504f50);
        (*pcVar3)();
      }
      uVar10 = (ulong)(iVar9 - iVar7);
    }
joined_r0x000100504d5c:
    pbVar5 = param_1;
    uVar11 = uVar10;
    if (0x7f < uVar10) {
      do {
        param_1 = pbVar5 + 1;
        *pbVar5 = (byte)uVar11 | 0x80;
        uVar10 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        pbVar5 = param_1;
        uVar11 = uVar10;
      } while (uVar12 != 0);
    }
    pbVar4 = param_1 + 1;
    *param_1 = (byte)uVar10;
    pbVar5 = pbVar4;
    if (uVar8 < 2) {
      if (uVar8 == 0) {
        local_66 = (undefined1)param_3;
        local_65 = (undefined1)((ulong)param_3 >> 8);
        local_64 = (undefined1)((ulong)param_3 >> 0x10);
        local_63 = (undefined1)((ulong)param_3 >> 0x18);
        local_62 = (undefined1)((ulong)param_3 >> 0x20);
        local_61 = (undefined1)((ulong)param_3 >> 0x28);
        local_60 = (undefined1)((ulong)param_3 >> 0x30);
        local_5f = (undefined1)((ulong)param_3 >> 0x38);
        local_5e = (undefined1)param_4;
        local_5d = (undefined1)(param_4 >> 8);
        local_5c = (undefined1)(param_4 >> 0x10);
        local_5b = (undefined1)(param_4 >> 0x18);
        local_5a = (undefined1)(param_4 >> 0x20);
        uVar10 = param_4 >> 0x30 & 0xff;
        local_59 = (undefined1)(param_4 >> 0x28);
        if (uVar10 != 0) {
          _memmove(pbVar4,&local_66,uVar10);
        }
      }
      else {
        lVar14 = (long)iVar7;
        pbVar13 = (byte *)((param_3 >> 0x20) - lVar14);
        if (param_3 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100504f54);
          (*pcVar3)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        pbVar6 = pbVar5;
        if (pbVar5 != (byte *)0x0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar14,(long)pbVar6)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100504f5c);
            (*pcVar3)();
          }
          pbVar5 = pbVar5 + (lVar14 - (long)pbVar6);
        }
LAB_100504eb8:
        __s10Foundation13__DataStorageC7_lengthSivg();
        if ((long)pbVar13 <= (long)pbVar6) {
          pbVar6 = pbVar13;
        }
        if ((pbVar5 != (byte *)0x0) && (0 < (long)pbVar6)) {
          if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
            _memmove(pbVar4,pbVar5,(size_t)pbVar6);
            return;
          }
          goto LAB_100504f60;
        }
      }
    }
    else if (uVar8 == 2) {
      lVar14 = *(long *)(param_3 + 0x10);
      lVar1 = *(long *)(param_3 + 0x18);
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      pbVar6 = pbVar5;
      if (pbVar5 != (byte *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar14,(long)pbVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100504f58);
          (*pcVar3)();
        }
        pbVar5 = pbVar5 + (lVar14 - (long)pbVar6);
      }
      pbVar13 = (byte *)(lVar1 - lVar14);
      if (SBORROW8(lVar1,lVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100504e74);
        (*pcVar3)();
      }
      goto LAB_100504eb8;
    }
  }
  else {
    if (uVar8 == 2) {
      uVar10 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100504f4c);
        (*pcVar3)();
      }
      goto joined_r0x000100504d5c;
    }
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
LAB_100504f60:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


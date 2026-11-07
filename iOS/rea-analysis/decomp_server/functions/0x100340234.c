// rea decompile_all
// name: FUN_100340234
// address: 0x100340234
// body: available
// range: 0x100340234-0x10034044f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034044c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100340234(Bytef *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uLong uVar4;
  Bytef *pBVar5;
  Bytef *pBVar6;
  uint uVar7;
  long lVar8;
  Bytef local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar7 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar7 == 0) {
      local_58 = (Bytef)param_1;
      uStack_57 = (undefined1)((ulong)param_1 >> 8);
      uStack_56 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_55 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_54 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_53 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_52 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_51 = (undefined1)((ulong)param_1 >> 0x38);
      uStack_50 = (undefined1)param_2;
      uStack_4f = (undefined1)((ulong)param_2 >> 8);
      uStack_4e = (undefined1)((ulong)param_2 >> 0x10);
      uStack_4d = (undefined1)((ulong)param_2 >> 0x18);
      uStack_4c = (undefined1)((ulong)param_2 >> 0x20);
      uStack_4b = (undefined1)((ulong)param_2 >> 0x28);
      uVar4 = _adler32(1,&local_58,(ushort)((ulong)param_2 >> 0x30) & 0xff);
      if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003402f4);
        (*pcVar3)();
      }
    }
    else {
      lVar8 = (long)(int)param_1;
      pBVar5 = (Bytef *)(((long)param_1 >> 0x20) - lVar8);
      if ((long)param_1 >> 0x20 < lVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100340434);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      pBVar6 = param_1;
      if (param_1 != (Bytef *)0x0) {
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar8,(long)pBVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034044c);
          (*pcVar3)();
        }
        param_1 = param_1 + (lVar8 - (long)pBVar6);
      }
      __s10Foundation13__DataStorageC7_lengthSivg();
      if ((long)pBVar5 <= (long)pBVar6) {
        pBVar6 = pBVar5;
      }
      if (param_1 == (Bytef *)0x0) {
        pBVar6 = (Bytef *)0x0;
      }
      else {
        if ((long)pBVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100340430);
          (*pcVar3)();
        }
        if ((ulong)pBVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003403c0);
          (*pcVar3)();
        }
      }
      uVar4 = _adler32(1,param_1,(uInt)pBVar6);
      if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100340444);
        (*pcVar3)();
      }
    }
  }
  else if (uVar7 == 2) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    pBVar5 = param_1;
    if (param_1 != (Bytef *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar8,(long)pBVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100340448);
        (*pcVar3)();
      }
      param_1 = param_1 + (lVar8 - (long)pBVar5);
    }
    pBVar6 = (Bytef *)(lVar1 - lVar8);
    if (SBORROW8(lVar1,lVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100340438);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)pBVar6 <= (long)pBVar5) {
      pBVar5 = pBVar6;
    }
    pBVar6 = (Bytef *)0x0;
    if (param_1 != (Bytef *)0x0) {
      pBVar6 = pBVar5;
    }
    if ((long)pBVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10034043c);
      (*pcVar3)();
    }
    if ((ulong)pBVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100340440);
      (*pcVar3)();
    }
    uVar4 = _adler32(1,param_1,(uInt)pBVar6);
    if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100340368);
      (*pcVar3)();
    }
  }
  else {
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    local_58 = '\0';
    uStack_57 = 0;
    uStack_56 = 0;
    uStack_55 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
    uStack_51 = 0;
    uVar4 = _adler32(1,&local_58,0);
    if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003403e4);
      (*pcVar3)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


// rea decompile_all
// name: FUN_100665dc4
// address: 0x100665dc4
// body: available
// range: 0x100665dc4-0x100665fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100665fe0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100665dc4(byte *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte local_56 [4];
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar6 = (uint)(param_2 >> 0x20);
  uVar5 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if (uVar5 == 0) {
      local_56[0] = (byte)param_1;
      local_56[1] = (char)((ulong)param_1 >> 8);
      local_56[2] = (char)((ulong)param_1 >> 0x10);
      local_56[3] = (char)((ulong)param_1 >> 0x18);
      local_52 = (char)((ulong)param_1 >> 0x20);
      local_51 = (char)((ulong)param_1 >> 0x28);
      local_50 = (char)((ulong)param_1 >> 0x30);
      local_4f = (char)((ulong)param_1 >> 0x38);
      local_4e = (char)param_2;
      local_4d = (char)(param_2 >> 8);
      local_4c = (char)(param_2 >> 0x10);
      local_4b = (char)(param_2 >> 0x18);
      local_4a = (char)(param_2 >> 0x20);
      uVar8 = param_2 >> 0x30 & 0xff;
      local_49 = (char)(param_2 >> 0x28);
      uVar7 = 0;
      if (uVar8 != 0) {
        pbVar3 = local_56;
        do {
          uVar6 = (uint)uVar7;
          uVar7 = (ulong)(uVar6 + *pbVar3);
          if (CARRY4(uVar6,(uint)*pbVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100665fc8);
            (*pcVar2)();
          }
          pbVar3 = pbVar3 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      goto LAB_100665f7c;
    }
    lVar9 = (long)(int)param_1;
    pbVar3 = (byte *)(((long)param_1 >> 0x20) - lVar9);
    if ((long)param_1 >> 0x20 < lVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100665fd4);
      (*pcVar2)();
    }
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (param_1 == (byte *)0x0) {
      __s10Foundation13__DataStorageC7_lengthSivg();
    }
    else {
      pbVar4 = param_1;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar9,(long)pbVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100665fe0);
        (*pcVar2)();
      }
      param_1 = param_1 + (lVar9 - (long)pbVar4);
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (param_1 != (byte *)0x0) {
        uVar7 = 0;
        if ((long)pbVar3 <= (long)pbVar4) {
          pbVar4 = pbVar3;
        }
        for (; pbVar4 != (byte *)0x0; pbVar4 = pbVar4 + -1) {
          uVar6 = (uint)uVar7;
          uVar7 = (ulong)(uVar6 + *param_1);
          if (CARRY4(uVar6,(uint)*param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100665fd0);
            (*pcVar2)();
          }
          param_1 = param_1 + 1;
        }
        goto LAB_100665f7c;
      }
    }
  }
  else if (uVar5 == 2) {
    lVar9 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    pbVar3 = param_1;
    if (param_1 != (byte *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar9,(long)pbVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100665fdc);
        (*pcVar2)();
      }
      param_1 = param_1 + (lVar9 - (long)pbVar3);
    }
    pbVar4 = (byte *)(lVar1 - lVar9);
    if (SBORROW8(lVar1,lVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100665fd8);
      (*pcVar2)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (param_1 != (byte *)0x0) {
      uVar7 = 0;
      if ((long)pbVar4 <= (long)pbVar3) {
        pbVar3 = pbVar4;
      }
      for (; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + -1) {
        uVar6 = (uint)uVar7;
        uVar7 = (ulong)(uVar6 + *param_1);
        if (CARRY4(uVar6,(uint)*param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100665fcc);
          (*pcVar2)();
        }
        param_1 = param_1 + 1;
      }
      goto LAB_100665f7c;
    }
  }
  uVar7 = 0;
LAB_100665f7c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (int)uVar7 + (int)(uVar7 / 0xffff) * -0xffff;
}


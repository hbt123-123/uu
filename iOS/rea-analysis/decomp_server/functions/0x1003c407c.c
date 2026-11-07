// rea decompile_all
// name: FUN_1003c407c
// address: 0x1003c407c
// body: available
// range: 0x1003c407c-0x1003c42df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c42dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003c407c(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  byte local_76 [4];
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar10 = (uint)(param_3 >> 0x20);
  uVar9 = uVar10 >> 0x1e;
  if (uVar10 >> 0x1e < 2) {
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = (long)(int)param_2;
    }
  }
  else {
    uVar6 = 0;
    if (uVar9 == 2) {
      uVar6 = *(ulong *)(param_2 + 0x10);
    }
  }
  uVar3 = (uint)param_1;
  uVar11 = param_3 >> 0x30 & 0xff;
  uVar10 = uVar10 >> 0x1e;
  uVar7 = uVar6;
  if (1 < uVar9) goto LAB_1003c4134;
LAB_1003c4124:
  uVar5 = uVar11;
  if (uVar9 != 0) {
    uVar5 = param_2 >> 0x20;
  }
  do {
    uVar8 = (ulong)(uVar7 == uVar5);
    if (uVar7 == uVar5) {
      uVar7 = 0;
      goto LAB_1003c4278;
    }
    if (uVar9 == 2) {
      if ((long)uVar7 < *(long *)(param_2 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42c0);
        (*pcVar2)();
      }
      if (*(long *)(param_2 + 0x18) <= (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42c8);
        (*pcVar2)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42dc);
        (*pcVar2)();
      }
      lVar4 = param_1;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42d0);
        (*pcVar2)();
      }
LAB_1003c41cc:
      bVar1 = *(byte *)(param_1 + (uVar7 - lVar4));
      param_1 = lVar4;
    }
    else {
      if (uVar10 == 1) {
        if (((long)uVar7 < (long)(int)param_2) || (param_2 >> 0x20 <= (long)uVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42c4);
          (*pcVar2)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42d8);
          (*pcVar2)();
        }
        lVar4 = param_1;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42cc);
          (*pcVar2)();
        }
        goto LAB_1003c41cc;
      }
      if ((long)uVar11 <= (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42bc);
        (*pcVar2)();
      }
      local_76[0] = (byte)param_2;
      local_76[1] = (char)((ulong)param_2 >> 8);
      local_76[2] = (char)((ulong)param_2 >> 0x10);
      local_76[3] = (char)((ulong)param_2 >> 0x18);
      local_72 = (char)((ulong)param_2 >> 0x20);
      local_71 = (char)((ulong)param_2 >> 0x28);
      local_70 = (char)((ulong)param_2 >> 0x30);
      local_6f = (char)((ulong)param_2 >> 0x38);
      local_6e = (char)param_3;
      local_6d = (char)(param_3 >> 8);
      local_6c = (char)(param_3 >> 0x10);
      local_6b = (char)(param_3 >> 0x18);
      local_6a = (char)(param_3 >> 0x20);
      local_69 = (char)(param_3 >> 0x28);
      bVar1 = local_76[uVar7];
    }
    if ((uint)bVar1 == (uVar3 & 0xff)) {
LAB_1003c4278:
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
        auVar12._8_8_ = uVar8;
        auVar12._0_8_ = uVar7;
        return auVar12;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    uVar7 = uVar7 + 1;
    if (uVar10 < 2) goto LAB_1003c4124;
LAB_1003c4134:
    if (uVar10 != 2) {
      if (uVar6 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c42d4);
        (*pcVar2)();
      }
      uVar7 = 0;
      uVar8 = 1;
      goto LAB_1003c4278;
    }
    uVar5 = *(ulong *)(param_2 + 0x18);
  } while( true );
}


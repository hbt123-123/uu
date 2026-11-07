// rea decompile_all
// name: FUN_1001f95d0
// address: 0x1001f95d0
// body: available
// range: 0x1001f95d0-0x1001f98af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f98ac to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_1001f95d0(long param_1,ulong param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
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
  if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f98a0);
    (*pcVar5)();
  }
  bVar10 = 0;
  bVar4 = 0;
  bVar3 = false;
  uVar9 = param_2 >> 0x30 & 0xff;
  lVar6 = param_1;
  lVar12 = param_3 + 1;
  do {
    uVar2 = (uint)(param_2 >> 0x20);
    uVar11 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      uVar8 = uVar9;
      if (uVar2 >> 0x1e != 0) {
        uVar8 = param_1 >> 0x20;
      }
    }
    else {
      if (uVar2 >> 0x1e != 2) {
        if (param_3 + 1 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f98a4);
          (*pcVar5)();
        }
        goto LAB_1001f97f4;
      }
      uVar8 = *(ulong *)(param_1 + 0x18);
    }
    if ((long)uVar8 <= lVar12) {
      if ((uVar11 == 0) || (uVar11 == 2)) goto LAB_1001f97f4;
      bVar10 = 1;
      goto LAB_1001f97f8;
    }
    if (uVar11 == 2) {
      if (lVar12 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f988c);
        (*pcVar5)();
      }
      if (*(long *)(param_1 + 0x18) <= lVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f9894);
        (*pcVar5)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f98ac);
        (*pcVar5)();
      }
      lVar7 = lVar6;
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar12,lVar7)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f989c);
        (*pcVar5)();
      }
LAB_1001f96ec:
      bVar1 = *(byte *)(lVar6 + (lVar12 - lVar7));
      lVar6 = lVar7;
    }
    else {
      if (uVar11 == 1) {
        if ((lVar12 < (int)param_1) || (param_1 >> 0x20 <= lVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f9890);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f98a8);
          (*pcVar5)();
        }
        lVar7 = lVar6;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar12,lVar7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f9898);
          (*pcVar5)();
        }
        goto LAB_1001f96ec;
      }
      if ((long)uVar9 <= lVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001f9888);
        (*pcVar5)();
      }
      local_76[0] = (byte)param_1;
      local_76[1] = (char)((ulong)param_1 >> 8);
      local_76[2] = (char)((ulong)param_1 >> 0x10);
      local_76[3] = (char)((ulong)param_1 >> 0x18);
      local_72 = (char)((ulong)param_1 >> 0x20);
      local_71 = (char)((ulong)param_1 >> 0x28);
      local_70 = (char)((ulong)param_1 >> 0x30);
      local_6f = (char)((ulong)param_1 >> 0x38);
      local_6e = (char)param_2;
      local_6d = (char)(param_2 >> 8);
      local_6c = (char)(param_2 >> 0x10);
      local_6b = (char)(param_2 >> 0x18);
      local_6a = (char)(param_2 >> 0x20);
      local_69 = (char)(param_2 >> 0x28);
      bVar1 = local_76[lVar12];
    }
    if (0x3f < bVar1) break;
    if (bVar1 == 0x3e) {
      bVar3 = true;
    }
    else if (bVar1 == 0x24) {
      bVar4 = 1;
    }
    bVar10 = bVar1 == 0x3f | bVar10;
    lVar12 = lVar12 + 1;
  } while( true );
  if (bVar3) {
LAB_1001f97f4:
    bVar10 = 1;
  }
  else {
    if (bVar1 < 0x70) {
      if (((bVar1 == 0x52) || (bVar1 == 99)) || (bVar1 == 0x6e)) goto LAB_1001f97f4;
    }
    else if (bVar1 < 0x75) {
      if (bVar1 == 0x70) {
        bVar10 = bVar10 & bVar4;
        goto LAB_1001f97f8;
      }
      if (bVar1 == 0x74) {
        bVar10 = bVar10 ^ 1;
        goto LAB_1001f97f8;
      }
    }
    else {
      if (bVar1 == 0x75) goto LAB_1001f97f8;
      if (bVar1 == 0x79) goto LAB_1001f97f4;
    }
    bVar10 = 0;
  }
LAB_1001f97f8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


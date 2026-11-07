// rea decompile_all
// name: FUN_1002210fc
// address: 0x1002210fc
// body: available
// range: 0x1002210fc-0x100221473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100221470 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002210fc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 local_7e [4];
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar5 = (uint)(param_2 >> 0x20);
  iVar13 = (int)param_1;
  puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar5 >> 0x1e < 2) {
    if (uVar5 >> 0x1e == 0) {
      uVar15 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar11 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar11,iVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100221468);
        (*pcVar6)();
      }
      uVar15 = (ulong)(iVar11 - iVar13);
    }
  }
  else {
    if (uVar5 >> 0x1e != 2) goto LAB_100221404;
    uVar15 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10022116c);
      (*pcVar6)();
    }
  }
  if (uVar15 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
    lVar7 = 0;
    FUN_1002309fc(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    uVar12 = param_2 >> 0x3e;
    if ((uVar5 >> 0x1e != 0) && (uVar12 = (long)iVar13, uVar5 >> 0x1e == 2)) {
      uVar12 = *(ulong *)(param_1 + 0x10);
    }
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100221464);
      (*pcVar6)();
    }
    uVar16 = 0;
    do {
      puVar14 = local_70;
      if (uVar15 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100221444);
        (*pcVar6)();
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100221448);
        (*pcVar6)();
      }
      lVar2 = uVar12 + uVar16;
      if (uVar5 >> 0x1e == 2) {
        if (lVar2 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100221450);
          (*pcVar6)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100221458);
          (*pcVar6)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100221470);
          (*pcVar6)();
        }
        lVar8 = lVar7;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar2,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100221460);
          (*pcVar6)();
        }
LAB_1002212b4:
        uVar4 = *(undefined1 *)(lVar7 + (lVar2 - lVar8));
      }
      else {
        if (uVar5 >> 0x1e == 1) {
          if ((lVar2 < iVar13) || (param_1 >> 0x20 <= lVar2)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100221454);
            (*pcVar6)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10022146c);
            (*pcVar6)();
          }
          lVar8 = lVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar2,lVar8)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10022145c);
            (*pcVar6)();
          }
          goto LAB_1002212b4;
        }
        if ((long)(param_2 >> 0x30 & 0xff) <= lVar2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10022144c);
          (*pcVar6)();
        }
        local_7e[0] = (undefined1)param_1;
        local_7e[1] = (undefined1)((ulong)param_1 >> 8);
        local_7e[2] = (undefined1)((ulong)param_1 >> 0x10);
        local_7e[3] = (undefined1)((ulong)param_1 >> 0x18);
        local_7a = (undefined1)((ulong)param_1 >> 0x20);
        local_79 = (undefined1)((ulong)param_1 >> 0x28);
        local_78 = (undefined1)((ulong)param_1 >> 0x30);
        local_77 = (undefined1)((ulong)param_1 >> 0x38);
        local_76 = (undefined1)param_2;
        local_75 = (undefined1)(param_2 >> 8);
        local_74 = (undefined1)(param_2 >> 0x10);
        local_73 = (undefined1)(param_2 >> 0x18);
        local_72 = (undefined1)(param_2 >> 0x20);
        local_71 = (undefined1)(param_2 >> 0x28);
        uVar4 = local_7e[uVar16 + uVar12];
      }
      puVar9 = &DAT_100a7e468;
      FUN_100004bb4(&DAT_100a7e468,&DAT_1008134c0);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined **)(puVar9 + 0x38) = PTR___ss5UInt8VN_100995d40;
      *(undefined **)(puVar9 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_100995d68;
      puVar9[0x20] = uVar4;
      lVar7 = 0x786868323025;
      uVar10 = 0xe600000000000000;
      __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x786868323025,0xe600000000000000,puVar9);
      uVar3 = *(ulong *)(puVar14 + 0x10);
      local_70 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar3) {
        FUN_1002309fc(1 < *(ulong *)(puVar14 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar3 + 1;
      *(long *)(local_70 + uVar3 * 0x10 + 0x20) = lVar7;
      *(undefined8 *)(local_70 + uVar3 * 0x10 + 0x28) = uVar10;
      uVar16 = uVar16 + 1;
      puVar14 = local_70;
    } while (uVar1 != uVar15);
  }
LAB_100221404:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar14;
}


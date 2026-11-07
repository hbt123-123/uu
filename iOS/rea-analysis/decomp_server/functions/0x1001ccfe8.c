// rea decompile_all
// name: FUN_1001ccfe8
// address: 0x1001ccfe8
// body: available
// range: 0x1001ccfe8-0x1001cd2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ccfe8(long param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_c0 [16];
  long local_b0;
  ulong uStack_a8;
  long local_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  long local_70;
  ulong uStack_68;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar5 = *(ulong *)(param_1 + 0x10);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_88,0x20,0);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if ((*(long *)(lVar9 + 0x10) == 0) ||
     (lVar13 = lVar1, uVar14 = uVar5, FUN_1001a3028(), (uVar14 & 1) == 0)) {
    _swift_endAccess(auStack_88);
    return;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + lVar13 * 8);
  _swift_endAccess(auStack_88);
  if ((*(byte *)(lVar9 + 0x31) & 1) != 0) {
    return;
  }
  uVar14 = *(ulong *)(param_1 + 0x30);
  lVar13 = *(long *)(param_1 + 0x28);
  uVar2 = (uint)(uVar14 >> 0x20);
  uVar12 = uVar2 >> 0x1e;
  iVar11 = (int)lVar13;
  iVar6 = (int)((ulong)lVar13 >> 0x20);
  local_70 = lVar13;
  uStack_68 = uVar14;
  if (uVar2 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((uVar14 & 0xff000000000000) == 0) goto LAB_1001cd0c8;
      lVar4 = *(long *)(lVar9 + 0x38);
      uVar7 = uVar14 >> 0x30 & 0xff;
      goto LAB_1001cd120;
    }
    lVar4 = (long)iVar11;
    lVar8 = lVar13 >> 0x20;
  }
  else {
    if (uVar12 != 2) {
LAB_1001cd0c8:
      FUN_100008d0c(&local_70);
      return;
    }
    lVar4 = *(long *)(lVar13 + 0x10);
    lVar8 = *(long *)(lVar13 + 0x18);
  }
  if (lVar4 == lVar8) {
    return;
  }
  FUN_1001d3730(&local_70,auStack_88);
  lVar4 = *(long *)(lVar9 + 0x38);
  if (uVar14 >> 0x3e == 2) {
    uVar7 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
    if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cd110);
      (*pcVar3)();
    }
  }
  else {
    if (SBORROW4(iVar6,iVar11)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cd2e8);
      (*pcVar3)();
    }
    uVar7 = (ulong)(iVar6 - iVar11);
  }
LAB_1001cd120:
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cd29c);
    (*pcVar3)();
  }
  if ((long)(lVar4 + uVar7) < 0x800001) {
    _swift_beginAccess(lVar9 + 0x40,auStack_88,0x21,0);
    uVar10 = *(ulong *)(lVar9 + 0x40);
    _swift_retain(lVar9);
    uVar5 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar9 + 0x40) = uVar10;
    uVar7 = uVar10;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      FUN_1000368b8(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(lVar9 + 0x40) = uVar7;
    }
    uVar5 = *(ulong *)(uVar7 + 0x10);
    uVar10 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_1000368b8(uVar10,uVar5 + 1,1,uVar7);
    }
    *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
    lVar1 = uVar10 + uVar5 * 0x10;
    *(ulong *)(lVar1 + 0x28) = uStack_68;
    *(long *)(lVar1 + 0x20) = local_70;
    *(ulong *)(lVar9 + 0x40) = uVar10;
    _swift_endAccess(auStack_88);
    if (uVar12 == 2) {
      uVar5 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cd26c);
        (*pcVar3)();
      }
    }
    else if (uVar12 == 1) {
      if (SBORROW4(iVar6,iVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cd2ec);
        (*pcVar3)();
      }
      uVar5 = (ulong)(iVar6 - iVar11);
    }
    else {
      uVar5 = uVar14 >> 0x30 & 0xff;
    }
    if (SCARRY8(*(long *)(lVar9 + 0x38),uVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cd2e4);
      (*pcVar3)();
    }
    *(ulong *)(lVar9 + 0x38) = *(long *)(lVar9 + 0x38) + uVar5;
    FUN_1001cf5b0(lVar9);
  }
  else {
    _swift_retain(lVar9);
    FUN_100008d0c(&local_70);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_b0 = lVar1;
    uStack_a8 = uVar5;
    local_a0 = lVar9;
    lStack_98 = param_1;
    FUN_1003fb4bc(FUN_1001d376c,auStack_c0,0xd0000000000000a1,0x800000010089dec0,0x6144656c646e6168,
                  0xee00293a5f286174,0xba,0);
    FUN_1001cd2ec(lVar1,uVar5,1);
  }
  _swift_release(lVar9);
  return;
}


// rea decompile_all
// name: FUN_1006454d0
// address: 0x1006454d0
// body: available
// range: 0x1006454d0-0x1006458c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

bool FUN_1006454d0(long *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char local_d0;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  
  lVar6 = *param_1;
  lVar7 = param_1[1];
  cVar1 = (char)param_1[2];
  lVar9 = param_1[3];
  if (cVar1 == '\0') {
    if (lVar6 != 0 || lVar7 != 0) goto LAB_100645520;
LAB_100645544:
    plVar4 = param_1;
    FUN_1006612a4(auStack_b0);
    FUN_100660be4();
    if (plVar4 == (long *)0x0) {
      FUN_100643424(param_1,auStack_80);
      FUN_100644548(auStack_b0);
    }
    else {
      lVar5 = 0;
      FUN_10065fa88();
      lVar10 = lVar5;
      FUN_100660be4();
      FUN_100643424(param_1,auStack_80);
      FUN_100644548(auStack_b0);
      if (lVar10 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006458b4);
        (*pcVar2)();
      }
joined_r0x000100645594:
      if (lVar5 != 0) goto LAB_1006455d4;
    }
    lVar6 = *unaff_x20;
    lVar7 = unaff_x20[1];
    cVar1 = (char)unaff_x20[2];
    lVar9 = unaff_x20[3];
    if (cVar1 == '\0') {
      if (lVar6 == 0 && lVar7 == 0) goto LAB_100645730;
    }
    else if ((cVar1 != '\x01') && (*(long *)(lVar9 + 0x10) == 0)) goto LAB_100645730;
    lVar5 = lVar6;
    FUN_10065f798(lVar6,lVar7,cVar1,lVar9);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006458b8);
      (*pcVar2)();
    }
    if (0x3f < lVar5 + 1) {
      if ((*(byte *)(unaff_x20 + 4) & 1) == 0) {
        FUN_10064b1b4(lVar6,lVar7,cVar1,lVar9,0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
        return lVar6 == 0;
      }
      return false;
    }
LAB_100645730:
    FUN_1006612a4(auStack_80);
    FUN_100660be4();
    if (unaff_x20 == (long *)0x0) {
      FUN_100643424();
      FUN_100644548(auStack_80);
      bVar3 = true;
    }
    else {
      lVar7 = 0;
      FUN_10065fa88();
      lVar6 = lVar7;
      FUN_100660be4();
      FUN_100643424();
      FUN_100644548(auStack_80);
      if (lVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006458bc);
        (*pcVar2)();
      }
      bVar3 = lVar7 == 0;
    }
    return bVar3;
  }
  if ((cVar1 != '\x01') && (*(long *)(lVar9 + 0x10) == 0)) goto LAB_100645544;
LAB_100645520:
  lVar5 = lVar6;
  FUN_10065f798(lVar6,lVar7,cVar1,lVar9);
  if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006458b0);
    (*pcVar2)();
  }
  if (lVar5 + 1 < 0x40) goto LAB_100645544;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar5 = lVar6;
    FUN_10064b1b4(lVar6,lVar7,cVar1,lVar9,0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
    goto joined_r0x000100645594;
  }
LAB_1006455d4:
  lVar11 = unaff_x20[1];
  lVar10 = *unaff_x20;
  lVar12 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  lVar5 = lVar6;
  FUN_10065fef8(lVar6,lVar7,cVar1,lVar9);
  FUN_100643424();
  FUN_10064fbe0(lVar6,lVar7,cVar1,lVar9,lVar5);
  FUN_10064d170();
  _swift_bridgeObjectRelease(lVar9);
  local_d0 = (char)uVar8;
  uVar8 = uVar8 & 0xff;
  lVar6 = lVar10;
  FUN_10065f798(lVar10,lVar11,uVar8,lVar12);
  if (0x3f < lVar6) {
    FUN_10064b1b4(lVar10,lVar11,uVar8,lVar12,0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
    _swift_bridgeObjectRelease(lVar12);
    return lVar10 == 0;
  }
  if (local_d0 == '\0') {
    if (lVar11 == 0 && lVar10 == 0) goto LAB_100645830;
    lVar6 = 0;
    FUN_1006605e8(0,lVar10,lVar11,0,lVar12);
    _swift_bridgeObjectRelease(lVar12);
    if (lVar11 != 0) goto LAB_100645888;
    uVar8 = (ulong)(lVar10 != 0);
LAB_100645880:
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006458c0);
      (*pcVar2)();
    }
  }
  else {
    if (local_d0 == '\x01') {
      if (SBORROW8(lVar11,lVar10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006458c4);
        (*pcVar2)();
      }
      if (lVar11 != lVar10) {
        lVar6 = 0;
        FUN_1006605e8(0,lVar10,lVar11,uVar8,lVar12);
LAB_100645870:
        _swift_bridgeObjectRelease(lVar12);
        uVar8 = lVar11 - lVar10;
        if (SBORROW8(lVar11,lVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006458c8);
          (*pcVar2)();
        }
        goto LAB_100645880;
      }
    }
    else if (*(long *)(lVar12 + 0x10) != 0) {
      lVar6 = 0;
      FUN_1006605e8(0,lVar10,lVar11,uVar8,lVar12);
      if (local_d0 == '\x02') {
        uVar8 = *(ulong *)(lVar12 + 0x10);
        _swift_bridgeObjectRelease(lVar12);
        goto LAB_100645880;
      }
      goto LAB_100645870;
    }
LAB_100645830:
    _swift_bridgeObjectRelease(lVar12);
    lVar6 = 0;
  }
LAB_100645888:
  return lVar6 == 0;
}


// rea decompile_all
// name: FUN_10014ff28
// address: 0x10014ff28
// body: available
// range: 0x10014ff28-0x100150257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001500c8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long * FUN_10014ff28(int *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ID IVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long *plVar13;
  code *pcVar14;
  undefined1 auStack_90 [16];
  int *local_80;
  ulong local_58;
  
  lVar5 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  plVar13 = (long *)(unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData);
  _swift_weakLoadStrong();
  if (plVar13 == (long *)0x0) {
    return (long *)0x0;
  }
  iVar10 = *param_1;
  iVar3 = *(int *)((long)plVar13 + 0x14);
  _swift_release();
  if (iVar10 != iVar3) {
    return plVar13;
  }
  plVar13 = (long *)(unaff_x20 + lVar5);
  _swift_weakLoadStrong();
  if (plVar13 == (long *)0x0) {
    return (long *)0x0;
  }
  iVar10 = param_1[0xc];
  lVar5 = plVar13[0x12];
  _swift_release();
  if (iVar10 != (int)lVar5) {
    return plVar13;
  }
  if (*(long *)(param_1 + 6) != 1) {
    uVar12 = 0;
    FUN_100401b14(0);
    FUN_1003fb45c(uVar12,FUN_100150258,0,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000016,
                  0x8000000100892690,0x120,7);
    puVar6 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    puVar7 = &DAT_d000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(&DAT_d000000000000013,0x8000000100891cd0);
    IVar8 = _objc_msgSend((ID)puVar6,"initWithDomain:code:userInfo:",puVar7,0x186a2,0);
    FUN_100152230(0);
    FUN_100151e58(IVar8);
    return (long *)0x0;
  }
  FUN_100149e1c();
  (**(code **)(*plVar13 + 0x88))(&local_58);
  _swift_release(plVar13);
  lVar5 = *(long *)(param_1 + 2);
  uVar2 = *(ulong *)(param_1 + 4);
  uVar4 = (uint)(uVar2 >> 0x20);
  uVar9 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar11 = uVar2 >> 0x30 & 0xff;
      goto LAB_100150100;
    }
    iVar10 = (int)((ulong)lVar5 >> 0x20);
    if (SBORROW4(iVar10,(int)lVar5)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100150258);
      (*pcVar14)();
    }
    uVar11 = (ulong)(iVar10 - (int)lVar5);
  }
  else {
    if (uVar9 != 2) {
      uVar11 = 0;
      goto LAB_100150100;
    }
    uVar11 = *(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10);
    if (SBORROW8(*(long *)(lVar5 + 0x18),*(long *)(lVar5 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1001500e4);
      (*pcVar14)();
    }
  }
  if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1001500fc);
    (*pcVar14)();
  }
LAB_100150100:
  uVar1 = local_58 + uVar11;
  if (!CARRY8(local_58,uVar11)) {
    plVar13 = *(long **)(unaff_x20 +
                        _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
                        ___lazy_storage___receiveOffset);
    pcVar14 = *(code **)(*plVar13 + 0x90);
    local_58 = uVar1;
    _swift_retain(plVar13);
    (*pcVar14)(&local_58);
    _swift_release(plVar13);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_80 = param_1;
    FUN_1003fb45c(FUN_100152470,auStack_90,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000016,
                  0x8000000100892690,0x12e,7);
    uVar12 = *(undefined8 *)(param_1 + 10);
    puVar6 = &DAT_10099ec90;
    _swift_allocObject(&DAT_10099ec90,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    plVar13 = (long *)&DAT_10099ecb8;
    _swift_allocObject(&DAT_10099ecb8,0x20,7);
    plVar13[2] = (long)puVar6;
    plVar13[3] = uVar1;
    _swift_retain(puVar6);
    FUN_100151b34(lVar5,uVar2,uVar12,FUN_1001524c4,plVar13);
    _swift_release(puVar6);
    _swift_release(plVar13);
    return plVar13;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100150254);
  (*pcVar14)();
}


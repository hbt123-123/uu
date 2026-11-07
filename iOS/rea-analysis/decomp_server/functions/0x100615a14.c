// rea decompile_all
// name: FUN_100615a14
// address: 0x100615a14
// body: available
// range: 0x100615a14-0x100615c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100615a14(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  dispatch_group_t group;
  undefined *puVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 local_b0;
  char acStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(*unaff_x20 + 0x50);
  lVar2 = 0xff;
  local_b0 = param_1;
  FUN_100616300();
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar12 = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)&local_b0 - uVar10;
  lVar11 = lVar13 - uVar10;
  pcVar9 = "isMainThread";
  IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar4 != 0) {
    if (DAT_100aafef8 != -1) {
      _swift_once(&DAT_100aafef8,FUN_10060f124);
    }
    pcVar9 = acStack_90;
    _swift_beginAccess(&DAT_100b3a770,pcVar9,0,0);
    uVar1 = DAT_100b3a790;
    pcVar14 = DAT_100b3a788;
    _swift_retain(DAT_100b3a790);
    (*pcVar14)(0);
    _swift_release(uVar1);
  }
  lVar5 = lVar3;
  _swift_allocBox();
  FUN_10061533c(pcVar9);
  pcVar14 = *(code **)(lVar12 + 0x10);
  (*pcVar14)(lVar11,pcVar9,lVar3);
  pcVar15 = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  lVar6 = lVar11;
  (*pcVar15)(lVar11,1,lVar2);
  (**(code **)(lVar12 + 8))(lVar11,lVar3);
  if ((int)lVar6 == 1) {
    group = _dispatch_group_create();
    _dispatch_group_enter(group);
    puVar7 = &DAT_1009dfb00;
    _swift_allocObject(&DAT_1009dfb00,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar8;
    *(long *)(puVar7 + 0x18) = lVar5;
    *(dispatch_group_t *)(puVar7 + 0x20) = group;
    _swift_retain();
    FUN_1006157c0(FUN_10061614c,puVar7);
    _swift_release(puVar7);
    __sSo17OS_dispatch_groupC8DispatchE4waityyF();
  }
  _swift_beginAccess(pcVar9,auStack_78,0,0);
  (*pcVar14)(lVar13,pcVar9,lVar3);
  lVar3 = lVar13;
  (*pcVar15)(lVar13,1,lVar2);
  if ((int)lVar3 != 1) {
    lVar3 = lVar13;
    _swift_getEnumCaseMultiPayload(lVar13,lVar2);
    if ((int)lVar3 == 1) {
      _swift_willThrow();
      _swift_release(lVar5);
    }
    else {
      (**(code **)(*(long *)(lVar8 + -8) + 0x20))(local_b0,lVar13);
      _swift_release(lVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100615c94);
  (*pcVar14)();
}


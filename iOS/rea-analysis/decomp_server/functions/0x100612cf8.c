// rea decompile_all
// name: FUN_100612cf8
// address: 0x100612cf8
// body: available
// range: 0x100612cf8-0x100612f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100612cf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  ID IVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  dispatch_group_t group;
  undefined *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined1 *local_a0;
  long local_98;
  char acStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar16 = *unaff_x20;
  lVar11 = *(long *)(lVar16 + 0x50);
  lVar3 = 0;
  local_a8 = param_1;
  __sSqMa(0,lVar11);
  lVar10 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = auStack_b0 + -uVar9;
  lVar15 = (long)local_a0 - uVar9;
  pcVar8 = "isMainThread";
  IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar4 != 0) {
    if (DAT_100aafef8 != -1) {
      _swift_once(&DAT_100aafef8,FUN_10060f124);
    }
    pcVar8 = acStack_90;
    _swift_beginAccess(&DAT_100b3a770,pcVar8,0,0);
    uVar1 = DAT_100b3a790;
    pcVar12 = DAT_100b3a788;
    _swift_retain(DAT_100b3a790);
    (*pcVar12)(0);
    _swift_release(uVar1);
  }
  lVar13 = lVar3;
  _swift_allocBox();
  pTVar5 = &TargetProtocolConformanceDescriptor_1008487f8;
  local_98 = lVar13;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,lVar16);
  FUN_100617228(pcVar8,lVar16,pTVar5);
  pcVar14 = *(code **)(lVar10 + 0x10);
  (*pcVar14)(lVar15,pcVar8,lVar3);
  lVar13 = *(long *)(lVar11 + -8);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar16 = lVar15;
  (*pcVar12)(lVar15,1,lVar11);
  (**(code **)(lVar10 + 8))(lVar15,lVar3);
  if ((int)lVar16 == 1) {
    group = _dispatch_group_create();
    _dispatch_group_enter(group);
    puVar6 = &DAT_1009df280;
    _swift_allocObject(&DAT_1009df280,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar11;
    *(long *)(puVar6 + 0x18) = local_98;
    *(dispatch_group_t *)(puVar6 + 0x20) = group;
    _swift_retain();
    FUN_100610788(FUN_10061484c,puVar6);
    _swift_release(puVar6);
    __sSo17OS_dispatch_groupC8DispatchE4waityyF();
  }
  _swift_beginAccess(pcVar8,auStack_78,0,0);
  puVar2 = local_a0;
  (*pcVar14)(local_a0,pcVar8,lVar3);
  puVar7 = puVar2;
  (*pcVar12)(puVar2,1,lVar11);
  if ((int)puVar7 != 1) {
    (**(code **)(lVar13 + 0x20))(local_a8,puVar2,lVar11);
    _swift_release(local_98);
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100612f4c);
  (*pcVar12)();
}


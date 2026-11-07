// rea decompile_all
// name: FUN_1000f4bf4
// address: 0x1000f4bf4
// body: available
// range: 0x1000f4bf4-0x1000f4de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000f4bf4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long extraout_x8;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  __s10Foundation4DateVACycfC(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar8 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer10InputQueue::lastTime) = param_1;
  lVar2 = _TtC14UURemoteServer10InputQueue::events;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer10InputQueue::events,auStack_68,0,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar7 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if ((long)uVar7 < 0) {
      uVar3 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (0 < (long)uVar3) {
    uVar9 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer10InputQueue::execQueue);
    puVar4 = &DAT_10099c828;
    _swift_allocObject(&DAT_10099c828,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    puVar5 = &DAT_10099c850;
    _swift_allocObject(&DAT_10099c850,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_1000f4ebc;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    local_78 = FUN_1000f4ed4;
    local_98 = PTR___NSConcreteStackBlock_100995490;
    local_90 = 0x42000000;
    local_88 = FUN_1000fcdcc;
    puStack_80 = &DAT_10099c868;
    local_70 = puVar5;
    aBlock = __Block_copy(&local_98);
    puVar6 = local_70;
    _swift_retain(puVar5);
    _swift_release(puVar6);
    _dispatch_sync(uVar9,aBlock);
    __Block_release(aBlock);
    puVar6 = puVar5;
    _swift_isEscapingClosureAtFileLocation(puVar5,"",0x8d,0x31,0x1c,1);
    _swift_release(puVar4);
    _swift_release(puVar5);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f4de4);
      (*pcVar1)();
    }
  }
  return;
}


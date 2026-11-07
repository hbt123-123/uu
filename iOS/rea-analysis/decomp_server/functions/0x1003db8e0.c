// rea decompile_all
// name: FUN_1003db8e0
// address: 0x1003db8e0
// body: available
// range: 0x1003db8e0-0x1003dbb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003db8e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = (long)puVar8 - extraout_x12;
  if (DAT_100a89380 != -1) {
    _swift_once(&DAT_100a89380,FUN_100407038);
  }
  lVar4 = lVar3;
  FUN_10021bec0(lVar3,&DAT_100b36948);
  pcVar11 = *(code **)(lVar10 + 0x10);
  (*pcVar11)(lVar9,lVar4,lVar3);
  if (DAT_100a891c8 != -1) {
    _swift_once(&DAT_100a891c8,FUN_1003a9e34);
  }
  uVar2 = DAT_100b36730;
  FUN_100004b70(0);
  uVar5 = uVar2;
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  if (DAT_100a892b0 != -1) {
    _swift_once(&DAT_100a892b0,FUN_1003b2590);
  }
  lVar4 = lVar3;
  FUN_10021bec0(lVar3,&DAT_100b36898);
  (*pcVar11)(puVar8,lVar4,lVar3);
  puVar7 = puVar8;
  FUN_10039d308(puVar8,&DAT_d000000000000010,0x80000001008b4a30,1);
  if (puVar7 == (undefined1 *)0x0) {
    puVar6 = &_OBJC_CLASS___NSRecursiveLock;
    _objc_allocWithZone();
    puVar7 = (undefined1 *)_objc_msgSend((ID)puVar6,"init");
  }
  (*pcVar11)(puVar8,lVar9,lVar3);
  FUN_1003dd174(puVar8,puVar7,uVar5,1,&DAT_100a8cd40,&DAT_100823100,thunk_FUN_1003d952c);
  _swift_unknownObjectRelease(puVar7);
  (**(code **)(lVar10 + 8))(lVar9,lVar3);
  puVar6 = &DAT_1009ba380;
  _swift_allocObject(&DAT_1009ba380,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  puVar1 = (undefined8 *)(puVar8 + _TtC8UUCommon14FileDataMapper::fileChanged);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = thunk_FUN_1003dd16c;
  puVar1[1] = puVar6;
  _swift_retain(puVar8);
  _swift_retain(puVar6);
  FUN_10008317c(uVar2,uVar5);
  _swift_release(puVar6);
  _swift_release(puVar8);
  DAT_100a8ccf0 = puVar8;
  return;
}


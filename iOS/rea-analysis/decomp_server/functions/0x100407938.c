// rea decompile_all
// name: FUN_100407938
// address: 0x100407938
// body: available
// range: 0x100407938-0x100407b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 *
FUN_100407938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  local_98 = param_8;
  local_90 = param_7;
  local_88 = param_1;
  local_80 = param_4;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100a892b0 != -1) {
    _swift_once(&DAT_100a892b0,FUN_1003b2590);
  }
  lVar4 = lVar3;
  FUN_10021bec0(lVar3,&DAT_100b36898);
  pcVar9 = *(code **)(lVar10 + 0x10);
  (*pcVar9)(puVar7,lVar4,lVar3);
  puVar6 = puVar7;
  FUN_10039d308(puVar7,param_2,param_3,1);
  if (puVar6 == (undefined1 *)0x0) {
    puVar5 = &_OBJC_CLASS___NSRecursiveLock;
    _objc_allocWithZone();
    puVar6 = (undefined1 *)_objc_msgSend((ID)puVar5,"init");
  }
  if ((param_5 & 1) == 0) {
    FUN_1003d96a0(0,local_98,param_9,param_10);
    uVar8 = local_88;
    (*pcVar9)(puVar7,local_88,lVar3);
    FUN_1003d949c(puVar7,puVar6,param_6,local_90);
  }
  else {
    FUN_1003d96e0(0,local_98,param_9,param_10);
    uVar8 = local_88;
    (*pcVar9)(puVar7,local_88,lVar3);
    FUN_1003d95f0(puVar7,puVar6,param_6,local_90);
  }
  _swift_unknownObjectRelease(puVar6);
  (**(code **)(lVar10 + 8))(uVar8,lVar3);
  puVar5 = &DAT_1009bc648;
  _swift_allocObject(&DAT_1009bc648,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = local_80;
  puVar1 = (undefined8 *)(puVar7 + _TtC8UUCommon14FileDataMapper::fileChanged);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_1003dd16c;
  puVar1[1] = puVar5;
  _swift_retain(puVar7);
  _swift_retain(puVar5);
  FUN_10008317c(uVar8,uVar2);
  _swift_release(puVar5);
  _swift_release(puVar7);
  return puVar7;
}


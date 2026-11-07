// rea decompile_all
// name: FUN_10010ddc4
// address: 0x10010ddc4
// body: available
// range: 0x10010ddc4-0x10010e35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10010ddc4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  class_t *self;
  ID IVar2;
  ID IVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_190 [16];
  undefined1 *local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined4 local_14c;
  undefined1 auStack_130 [16];
  undefined4 local_120;
  ID local_108;
  undefined1 auStack_100 [160];
  
  FUN_10010d488(param_2,param_3,param_4);
  uVar5 = param_2;
  FUN_10043434c(param_2,param_3,param_4);
  FUN_100401b14(0);
  uVar4 = (undefined4)uVar5;
  local_120 = uVar4;
  FUN_1003fb48c(FUN_100112e98,auStack_130,0xd0000000000000ac,0x800000010088b950,0xd000000000000019,
                0x800000010088c3e0,0x133,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar7 = DAT_100b360a8;
  uVar6 = *(undefined8 *)(DAT_100b360a8 + 0x80);
  _swift_retain(uVar6);
  FUN_100027f54();
  local_14c = uVar4;
  _swift_release(uVar6);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_160 = (undefined1 *)uVar5;
  FUN_1003fb48c(FUN_100112ea0,&local_170,0xd0000000000000ac,0x800000010088b950,0xd000000000000019,
                0x800000010088c3e0,0x135,0);
  FUN_100434530(auStack_100,param_2,param_3,param_4);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_160 = auStack_100;
  FUN_1003fb48c(FUN_100112ea8,&local_170,0xd0000000000000ac,0x800000010088b950,0xd000000000000019,
                0x800000010088c3e0,0x137,0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_160 = (undefined1 *)CONCAT44(local_14c,param_1);
  local_158 = auStack_100;
  FUN_1003fb48c(FUN_100112eb0,&local_170,0xd0000000000000ac,0x800000010088b950,0xd000000000000019,
                0x800000010088c3e0,0x138,0);
  self = &objc::class_t::StartVideoCaptureConfig;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  local_108 = IVar2;
  FUN_10011042c(&local_108,auStack_100,uVar5,unaff_x20);
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  local_160 = (undefined1 *)IVar2;
  FUN_1003fb48c(FUN_100112ebc,&local_170,0xd0000000000000ac,0x800000010088b950,0xd000000000000019,
                0x800000010088c3e0,0x15a,0);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  IVar3 = IVar2;
  if (lVar8 == 0) {
    FUN_1003fb48c(FUN_100112350,0,0xd0000000000000ac,0x800000010088b950,0xd00000000000002c,
                  0x800000010088ba40,0x224,0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    FUN_10019eb70(IVar2,lVar8,uVar5,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(lVar8);
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_160 = (undefined1 *)IVar3;
  local_158 = (undefined1 *)IVar2;
  FUN_1003fb48c(FUN_100112ec4,&local_170,0xd0000000000000ac,0x800000010088b950,0xd000000000000019,
                0x800000010088c3e0,0x15c,0);
  IVar2 = _objc_msgSend(IVar3,"resolutionWidth");
  if (((int)IVar2 < 1) || (IVar2 = _objc_msgSend(IVar3,"resolutionHeight"), (int)IVar2 < 1)) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_160 = (undefined1 *)IVar3;
    FUN_1003fb48c(FUN_100112ecc,&local_170,0xd0000000000000ac,0x800000010088b950,0xd000000000000019,
                  0x800000010088c3e0,0x15f,0);
  }
  lVar7 = *(long *)(lVar7 + 0x80);
  uVar5 = *(undefined8 *)(lVar7 + 0x10);
  _swift_retain(lVar7);
  FUN_1001115ec(uVar5,IVar3);
  IVar3 = _objc_msgSend(*(ID *)(lVar7 + 0x10),"screenId");
  IVar2 = _objc_msgSend(*(ID *)(lVar7 + 0x10),"videoTrackIndex");
  uVar1 = (uint)IVar2;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_180 = &DAT_d000000000000018;
  uStack_178 = 0x800000010088c400;
  local_170 = 0;
  local_16c = 1;
  local_168 = (undefined4)IVar3;
  local_164 = 0;
  local_160._0_5_ = (uint5)uVar1;
  local_158 = (undefined1 *)lVar7;
  FUN_1003fb48c(FUN_10003fd6c,auStack_190,0xd0000000000000a9,0x8000000100877660,0xd000000000000032,
                0x8000000100879be0,0x9fa,0);
  _swift_release(lVar7);
  FUN_100112ed4(auStack_100);
  return 0;
}


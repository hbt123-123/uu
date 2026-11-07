// rea decompile_all
// name: FUN_1001afb3c
// address: 0x1001afb3c
// body: available
// range: 0x1001afb3c-0x1001b0033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001afb3c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  class_t *self;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_140 [16];
  long local_130;
  undefined8 *puStack_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  self = &objc::class_t::CreateRoomConfig;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)self,"init");
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,*(undefined8 *)(param_1 + 0x18));
  _objc_msgSend(IVar3,"setToken:",uVar7);
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x40);
  }
  _swift_bridgeObjectRetain();
  puVar4 = puVar2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar2,PTR___sSSN_1009957f8);
  _swift_bridgeObjectRelease(puVar2);
  _objc_msgSend(IVar3,"setServerList:",puVar4);
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,PTR___sSSN_1009957f8);
  }
  _objc_msgSend(IVar3,"setSniRequiredServerList:",lVar5);
  uVar1 = 0;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x48);
  }
  _objc_msgSend(IVar3,"setConnectTimeout:",(ulong)uVar1);
  uVar1 = 0;
  if (*(char *)(param_1 + 0x8c) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  _objc_msgSend(IVar3,"setReconnectDelay:",(ulong)uVar1);
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 == 0) {
    uVar7 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
  }
  _swift_bridgeObjectRetain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar5);
  _swift_bridgeObjectRelease(lVar5);
  _objc_msgSend(IVar3,"setReportToken:",uVar7);
  lVar5 = *(long *)(param_1 + 0x70);
  if (lVar5 == 0) {
    uVar7 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x68);
  }
  _swift_bridgeObjectRetain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar5);
  _swift_bridgeObjectRelease(lVar5);
  _objc_msgSend(IVar3,"setReportUrl:",uVar7);
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 == 0) {
    uVar7 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x78);
  }
  _swift_bridgeObjectRetain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar5);
  _swift_bridgeObjectRelease(lVar5);
  _objc_msgSend(IVar3,"setReportServerAddress:",uVar7);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_130 = param_1;
  FUN_1003fb45c(FUN_1001b5874,auStack_140,0xd000000000000095,0x8000000100877f50,0xd000000000000017,
                0x800000010089b4d0,0xbb,0xb);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_130 = param_1;
  FUN_1003fb45c(FUN_1001b587c,auStack_140,0xd000000000000095,0x8000000100877f50,0xd000000000000017,
                0x800000010089b4d0,0xbc,0xb);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar5 = *(long *)(DAT_100b360a8 + 0x20);
  _swift_retain(lVar5);
  FUN_10012d6c0(&local_118);
  _swift_release();
  if (local_100 != 0) {
    uStack_b8 = uStack_110;
    local_c0 = local_118;
    local_b0 = local_108;
    lStack_a8 = local_100;
    uStack_98 = uStack_f0;
    local_a0 = local_f8;
    uStack_88 = uStack_e0;
    local_90 = local_e8;
    uStack_78 = uStack_d0;
    uStack_80 = local_d8;
    local_70 = local_c8;
    FUN_1001321c0();
    if (lVar5 != 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_130 = lVar5;
      puStack_128 = &local_c0;
      FUN_1003fb48c(FUN_1001b58d4,auStack_140,0xd000000000000095,0x8000000100877f50,
                    0xd000000000000017,0x800000010089b4d0,0xc5,0xb);
      FUN_1001b588c(&local_118);
      _objc_msgSend(IVar3,"setProxy:",lVar5);
      goto LAB_1001aff7c;
    }
    FUN_1001b588c(&local_118);
  }
  FUN_1003fb45c(FUN_1001b05e0,0,0xd000000000000095,0x8000000100877f50,0xd000000000000017,
                0x800000010089b4d0,0xcc,0xb);
LAB_1001aff7c:
  IVar6 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled),
                        "ControlledCreateRoom:",IVar3);
  IVar3 = IVar6;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_130 = CONCAT44(local_130._4_4_,(int)IVar3);
  FUN_1003fb48c(FUN_1001b5884,auStack_140,0xd000000000000095,0x8000000100877f50,0xd000000000000017,
                0x800000010089b4d0,0xd0,0);
  return IVar6;
}


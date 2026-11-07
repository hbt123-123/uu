// rea decompile_all
// name: FUN_1007c1e2c
// address: 0x1007c1e2c
// body: available
// range: 0x1007c1e2c-0x1007c210f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1007c1e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined *param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ID IVar11;
  long unaff_x20;
  code *pcVar12;
  long alStack_120 [8];
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  
  lVar8 = 0;
  local_c8 = param_6;
  local_c0 = param_5;
  local_b0 = param_3;
  local_a8 = param_9;
  __s10Foundation4DateVMa();
  local_a0 = *(long *)(lVar8 + -8);
  lVar2 = -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_e0 + lVar2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::segmentId) = param_2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::width) = param_8;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::height) = param_7;
  pcVar12 = *(code **)(local_a0 + 0x10);
  local_b8 = param_2;
  (*pcVar12)(puVar10,param_4,lVar8);
  FUN_1007c8da0(0);
  _objc_allocWithZone();
  puVar9 = puVar10;
  FUN_1007c8aa4(puVar10,param_7,param_8);
  local_d0 = puVar9;
  local_98 = lVar8;
  local_90 = param_4;
  (*pcVar12)(puVar10,param_4,lVar8);
  if (DAT_100abba38 != -1) {
    _swift_once(&DAT_100abba38,FUN_1007c0f64);
  }
  uVar3 = DAT_100b3a8f8;
  lVar8 = DAT_100abba40;
  local_d8 = DAT_100b3a8f0;
  _swift_bridgeObjectRetain(DAT_100b3a8f8);
  if (lVar8 != -1) {
    _swift_once(&DAT_100abba40,FUN_1007c0fa0);
  }
  uVar5 = DAT_100b3a908;
  uVar4 = DAT_100b3a900;
  lVar8 = DAT_100abba48;
  _swift_bridgeObjectRetain(DAT_100b3a908);
  if (lVar8 != -1) {
    _swift_once(&DAT_100abba48,FUN_1007c0fdc);
  }
  lVar8 = DAT_100b3a918;
  uVar6 = DAT_100b3a910;
  FUN_1007d1660(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(lVar8);
  *(undefined8 *)((long)alStack_120 + lVar2 + 0x28) = 0;
  *(undefined8 *)((long)alStack_120 + lVar2 + 0x30) = 0;
  uVar7 = local_c8;
  *(long *)((long)alStack_120 + lVar2 + 0x18) = lVar8;
  *(undefined8 *)((long)alStack_120 + lVar2 + 0x20) = uVar7;
  *(undefined8 *)((long)alStack_120 + lVar2 + 0x10) = uVar6;
  uVar6 = local_c0;
  *(undefined8 *)((long)alStack_120 + lVar2) = param_8;
  *(undefined8 *)((long)alStack_120 + lVar2 + 8) = uVar6;
  FUN_1007d169c(param_1,puVar10,local_b8,local_b0,local_d8,uVar3,uVar4,uVar5,param_7);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease();
  FUN_1007c1e20();
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x18) = 5;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  *(undefined1 **)(lVar8 + 0x20) = local_d0;
  *(undefined1 **)(lVar8 + 0x28) = puVar10;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (local_a8 != (undefined *)0x0) {
    puVar1 = local_a8;
  }
  _swift_bridgeObjectRetain(local_a8);
  FUN_1007c19c8(puVar1);
  *(long *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::events) = lVar8;
  FUN_1007c17c4();
  IVar11 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"init");
  (**(code **)(local_a0 + 8))(local_90,local_98);
  return IVar11;
}


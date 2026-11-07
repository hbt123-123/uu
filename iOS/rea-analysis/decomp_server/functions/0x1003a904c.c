// rea decompile_all
// name: FUN_1003a904c
// address: 0x1003a904c
// body: available
// range: 0x1003a904c-0x1003a959f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003a904c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ID IVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ID IVar9;
  void *aBlock;
  undefined *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 auStack_170 [2];
  undefined1 auStack_160 [16];
  long alStack_150 [2];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined8 local_120;
  ulong local_118;
  long local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [64];
  
  lVar5 = 0;
  local_e0 = param_3;
  local_d8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0 = *(long *)(lVar5 + -8);
  local_e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  lVar13 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_f8 = lVar13;
  __s8Dispatch0A3QoSVMa();
  local_108 = *(long *)(lVar5 + -8);
  lStack_100 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_110 = lVar13;
  FUN_1005cac3c();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  uVar15 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a8b3a0;
  FUN_100004bb4(&DAT_100a8b3a0,&DAT_100820640);
  puVar11 = auStack_a0;
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  uVar16 = *(undefined8 *)PTR__kAXTrustedCheckOptionPrompt_1009954d8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(puVar6 + 0x20) = uVar16;
  *(undefined1 **)(puVar6 + 0x28) = puVar11;
  puVar6[0x30] = 0;
  puVar7 = puVar6;
  FUN_1000cd340();
  _swift_setDeallocating(puVar6);
  FUN_1003a98f0(puVar6 + 0x20);
  puVar6 = puVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar7,PTR___sSSN_1009957f8,PTR___sSbN_1009958c8,PTR___sSSSHsWP_100995808);
  iVar4 = (int)puVar6;
  _swift_bridgeObjectRelease(puVar7);
  _AXIsProcessTrustedWithOptions();
  if (DAT_100a891a8 != -1) {
    _swift_once(&DAT_100a891a8,FUN_1003a8818);
  }
  IVar1 = DAT_100a8b390;
  bVar3 = iVar4 != 0;
  _objc_msgSend(DAT_100a8b390,"lock");
  DAT_100a8b398 = bVar3;
  _objc_msgSend(IVar1,"unlock");
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(bool *)(uVar15 - 0x10) = bVar3;
  (**(code **)(lVar14 + 0x68))(uVar15,2,lVar5);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar1 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar13 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar8 = uVar15;
    FUN_1005cc2b8();
    if ((uVar8 & 1) == 0) {
      _swift_release(lVar13);
    }
    else {
      local_120 = 0x80000001008b3100;
      IVar9 = 0xd00000000000009e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008b2f80);
      pcVar12 = "lastPathComponent";
      local_118 = uVar15;
      IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(uVar15 - 0x30) = FUN_1003a99b0;
      *(ulong *)(uVar15 - 0x28) = uVar15 - 0x20;
      *(undefined8 *)(uVar15 - 0x48) = 0x29;
      *(undefined8 *)(uVar15 - 0x50) = local_120;
      FUN_1005cc010(thunk_FUN_1003a85e4,uVar15 - 0x40,uVar15,0x65746f6d65525555,0xe800000000000000,
                    IVar9,pcVar12,0xd00000000000002b);
      _swift_release(lVar13);
      _swift_bridgeObjectRelease(pcVar12);
    }
  }
  _objc_msgSend(IVar1,"unlock");
  (**(code **)(lVar14 + 8))(uVar15,lVar5);
  lVar5 = local_d8;
  if (local_d8 != 0) {
    FUN_100004b70(0);
    uVar16 = local_e0;
    _swift_retain(local_e0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar6 = &DAT_1009b7dd0;
    _swift_allocObject(&DAT_1009b7dd0,0x21,7);
    *(long *)(puVar6 + 0x10) = lVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar16;
    puVar6[0x20] = bVar3;
    local_b0 = FUN_1003a87e4;
    local_d0 = PTR___NSConcreteStackBlock_100995490;
    local_c8 = 0x42000000;
    local_c0 = FUN_1000acdb4;
    puStack_b8 = &DAT_1009b7de8;
    local_a8 = puVar6;
    aBlock = __Block_copy(&local_d0);
    puVar7 = local_a8;
    _swift_retain(uVar16);
    _swift_release(puVar7);
    lVar13 = local_110;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_110);
    local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar10 = puVar6;
    FUN_10004eec4();
    lVar2 = local_e8;
    lVar14 = local_f8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_f8,&local_d0,puVar6,puVar10,local_e8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar14,aBlock);
    __Block_release(aBlock);
    FUN_10008317c(lVar5,uVar16);
    (**(code **)(local_f0 + 8))(lVar14,lVar2);
    (**(code **)(local_108 + 8))(lVar13,lStack_100);
  }
  return;
}


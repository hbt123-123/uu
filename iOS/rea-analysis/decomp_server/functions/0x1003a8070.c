// rea decompile_all
// name: FUN_1003a8070
// address: 0x1003a8070
// body: available
// range: 0x1003a8070-0x1003a84fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a8070(undefined8 param_1,long param_2,undefined8 param_3)

{
  ID IVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long lVar12;
  ulong uVar13;
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [16];
  long alStack_110 [2];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar3 + -8);
  local_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar11 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_b0 = lVar11;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_c8 = lVar11;
  FUN_1005cac3c();
  lVar12 = *(long *)(lVar4 + -8);
  lVar3 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  uVar2 = (undefined1)lVar3;
  uVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _CGPreflightScreenCaptureAccess();
  if (DAT_100a891a0 != -1) {
    _swift_once(&DAT_100a891a0,FUN_1003a790c);
  }
  IVar1 = DAT_100a8b2e8;
  _objc_msgSend(DAT_100a8b2e8,"lock");
  DAT_100a8b2f0 = uVar2;
  _objc_msgSend(IVar1,"unlock");
  local_98 = uVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined1 *)(uVar13 - 0x10) = uVar2;
  (**(code **)(lVar12 + 0x68))(uVar13,2,lVar4);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar1 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar3 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar5 = uVar13;
    FUN_1005cc2b8();
    if ((uVar5 & 1) == 0) {
      _swift_release(lVar3);
    }
    else {
      local_e0 = 0x80000001008b2e90;
      IVar6 = 0xd00000000000009e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008b2d40);
      pcVar10 = "lastPathComponent";
      local_d0 = param_3;
      IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
      local_d8 = param_2;
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(uVar13 - 0x30) = FUN_1003a87b8;
      *(ulong *)(uVar13 - 0x28) = uVar13 - 0x20;
      *(undefined8 *)(uVar13 - 0x48) = 0x29;
      *(undefined8 *)(uVar13 - 0x50) = local_e0;
      param_3 = local_d0;
      FUN_1005cc010(thunk_FUN_1003a85e4,uVar13 - 0x40,uVar13,0x65746f6d65525555,0xe800000000000000,
                    IVar6,pcVar10,0xd00000000000002d);
      _swift_release(lVar3);
      param_2 = local_d8;
      _swift_bridgeObjectRelease(pcVar10);
    }
  }
  _objc_msgSend(IVar1,"unlock");
  (**(code **)(lVar12 + 8))(uVar13,lVar4);
  if (param_2 != 0) {
    FUN_100004b70(0);
    _swift_retain(param_3);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar7 = &DAT_1009b7d30;
    _swift_allocObject(&DAT_1009b7d30,0x21,7);
    *(long *)(puVar7 + 0x10) = param_2;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    puVar7[0x20] = uVar2;
    local_70 = FUN_1003a87e4;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009b7d48;
    local_68 = puVar7;
    aBlock = __Block_copy(&local_90);
    puVar8 = local_68;
    _swift_retain(param_3);
    _swift_release(puVar8);
    lVar3 = local_c8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar7 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar9 = puVar7;
    FUN_10004eec4();
    lVar11 = local_a0;
    lVar4 = local_b0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_b0,&local_90,puVar7,puVar9,local_a0,puVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,lVar4,aBlock);
    __Block_release(aBlock);
    FUN_10008317c(param_2,param_3);
    (**(code **)(local_a8 + 8))(lVar4,lVar11);
    (**(code **)(local_c0 + 8))(lVar3,lStack_b8);
  }
  return;
}


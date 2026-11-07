// rea decompile_all
// name: FUN_1003c2700
// address: 0x1003c2700
// body: available
// range: 0x1003c2700-0x1003c2bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c2700(void)

{
  byte bVar1;
  long *plVar2;
  ID self;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ID IVar13;
  code *pcVar14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 auStack_d0 [2];
  byte abStack_c0 [8];
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar18 = *(long *)(lVar3 + -8);
  local_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  pbVar16 = abStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar17 = (long)pbVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar4 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a8c198;
  pcVar14 = (code *)&DAT_100822510;
  FUN_100004bb4(&DAT_100a8c198,&DAT_100822510);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar4 - extraout_x8_02;
  if (DAT_100a89308 != -1) {
    pcVar14 = FUN_1003dc3b8;
    _swift_once(&DAT_100a89308,FUN_1003dc3b8);
  }
  plVar2 = DAT_100a8cd10;
  plVar6 = DAT_100a8cd10;
  _swift_retain(DAT_100a8cd10);
  FUN_1003d8888();
  (**(code **)(*plVar2 + 0x128))(lVar19);
  _swift_release(plVar2);
  FUN_100006cc8(plVar6,pcVar14);
  lVar7 = 0;
  FUN_1003f84d4();
  lVar8 = lVar19;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar19,1,lVar7);
  if ((int)lVar8 == 0) {
    bVar1 = *(byte *)(lVar19 + 3);
    FUN_100040bb4(lVar19,&DAT_100a8c198,&DAT_100822510);
    lVar8 = local_b8;
    if ((bVar1 != 2) && ((bVar1 & 1) == 0)) {
      (**(code **)(lVar18 + 0x68))(pbVar16,2,local_b8);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      self = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar3 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        pbVar12 = pbVar16;
        FUN_1005cc2b8();
        if (((ulong)pbVar12 & 1) == 0) {
          _swift_release(lVar3);
        }
        else {
          IVar13 = 0xd000000000000090;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000090,0x80000001008b3cb0);
          pcVar15 = "lastPathComponent";
          IVar13 = _objc_msgSend(IVar13,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar13);
          *(undefined8 *)(lVar19 + -0x10) = 0xe700000000000000;
          *(undefined8 *)(lVar19 + -8) = 0xa4;
          FUN_1005cc010(FUN_1003fdb80,0,pbVar16,0x65746f6d65525555,0xe800000000000000,IVar13,pcVar15
                        ,0x29287472617473);
          _swift_release(lVar3);
          _swift_bridgeObjectRelease(pcVar15);
        }
      }
      _objc_msgSend(self,"unlock");
      (**(code **)(lVar18 + 8))(pbVar16,lVar8);
      return;
    }
  }
  else {
    FUN_100040bb4(lVar19,&DAT_100a8c198,&DAT_100822510);
  }
  puVar5 = &DAT_1009b9548;
  _swift_allocObject(&DAT_1009b9548,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  local_70 = FUN_1003d0f30;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009b9560;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar9 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar10 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar11 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar17,&local_98,puVar10,puVar11,lVar3,puVar9);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar4,lVar17,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar17,lVar3);
  (**(code **)(local_b0 + 8))(lVar4,lStack_a8);
  puVar10 = local_68;
  _swift_release(puVar5);
  _swift_release(puVar10);
  return;
}


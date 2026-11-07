// rea decompile_all
// name: FUN_1000b7ee0
// address: 0x1000b7ee0
// body: available
// range: 0x1000b7ee0-0x1000b82ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b7ee0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 local_d0;
  code *local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar10 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar14 - extraout_x12;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar9 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar9 & 0xffffffffffffff8;
    if ((long)uVar9 < 0) {
      uVar3 = uVar9;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 == 0) {
    FUN_100401b14();
    pcVar4 = FUN_1000b87c0;
    uVar8 = 0xb6;
  }
  else {
    if (*(char *)(unaff_x20 + 0x50) != '\x01') {
      uVar8 = 0;
      FUN_100401b14(0);
      local_c0 = lVar15;
      FUN_1003fb48c(uVar8,FUN_1000b8818,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000020,
                    0x8000000100882e30,0xc0,0);
      *(undefined2 *)(unaff_x20 + 0x50) = 1;
      uVar8 = 0;
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      local_d0 = uVar8;
      __s8Dispatch0A4TimeV3nowACyFZ(lVar14);
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar13,0x3fd3333333333333,lVar14);
      local_c8 = *(code **)(lVar11 + 8);
      (*local_c8)(lVar14,lVar2);
      puVar5 = &DAT_10099b050;
      _swift_allocObject(&DAT_10099b050,0x18,7);
      _swift_weakInit(puVar5 + 0x10);
      local_88 = FUN_1000b8954;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = 0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_10099b090;
      local_80 = puVar5;
      aBlock = __Block_copy(&local_a8);
      _swift_release(local_80);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
      local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar6 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar5 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar7 = &DAT_100a75aa0;
      FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar10,&local_a8,puVar5,puVar7,lVar1,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (lVar13,lVar12,lVar10,aBlock);
      __Block_release(aBlock);
      (**(code **)(local_c0 + 8))(lVar10,lVar1);
      (**(code **)(local_b8 + 8))(lVar12,lStack_b0);
      (*local_c8)(lVar13,lVar2);
      return;
    }
    *(undefined1 *)(unaff_x20 + 0x51) = 1;
    FUN_100401b14(0);
    pcVar4 = FUN_1000b87ec;
    uVar8 = 0xbc;
  }
  FUN_1003fb48c(pcVar4,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000020,0x8000000100882e30
                ,uVar8,0);
  return;
}


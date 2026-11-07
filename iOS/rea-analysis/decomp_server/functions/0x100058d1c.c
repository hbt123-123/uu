// rea decompile_all
// name: FUN_100058d1c
// address: 0x100058d1c
// body: available
// range: 0x100058d1c-0x100059183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100058d1c(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined *puVar9;
  char cVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long lVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined1 auStack_140 [8];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  code *local_110;
  undefined8 uStack_108;
  code *local_100;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A4TimeVMa();
  local_100 = *(code **)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_100 + 0x40));
  lVar20 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar20 - extraout_x12;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar18 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar19 = lVar15 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + 0xb8) == param_1) {
    local_120 = lVar2;
    local_118 = lVar5;
    local_110 = param_5;
    uStack_108 = param_6;
    (*param_3)(&local_98);
    cVar10 = (char)local_98;
    if ((char)local_98 == '\x02') {
      __s10Foundation4DateVACycfC(uVar19);
      uVar16 = uVar19;
      __s10Foundation4DateV1loiySbAC_ACtFZ(uVar19,param_2);
      lVar2 = local_118;
      (**(code **)(extraout_x12_00 + 8))(uVar19,local_118);
      if ((uVar16 & 1) != 0) {
        local_130 = param_9;
        uVar6 = 0;
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        local_128 = uVar6;
        __s8Dispatch0A4TimeV3nowACyFZ(lVar20);
        local_138 = param_4;
        __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar15,0x3fa999999999999a,lVar20);
        local_100 = *(code **)((long)local_100 + 8);
        (*local_100)(lVar20,lVar4);
        puVar7 = &DAT_1009985d0;
        _swift_allocObject(&DAT_1009985d0,0x18,7);
        _swift_weakInit(puVar7 + 0x10,unaff_x20);
        (**(code **)(extraout_x12_00 + 0x10))(uVar19,param_2,lVar2);
        uVar16 = (ulong)*(byte *)(extraout_x12_00 + 0x50);
        uVar17 = uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff);
        uVar21 = lVar18 + uVar17 + 7 & 0xfffffffffffffff8;
        _swift_allocObject(param_7,uVar21 + 0x20,uVar16 | 7);
        *(undefined **)(param_7 + 0x10) = puVar7;
        *(long *)(param_7 + 0x18) = param_1;
        (**(code **)(extraout_x12_00 + 0x20))(param_7 + uVar17,uVar19,lVar2);
        uVar1 = uStack_108;
        uVar6 = local_138;
        *(undefined8 *)(param_7 + uVar21) = param_3;
        ((undefined8 *)(param_7 + uVar21))[1] = local_138;
        puVar8 = (undefined8 *)(param_7 + uVar21 + 0x10);
        *puVar8 = local_110;
        puVar8[1] = uStack_108;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        uStack_80 = local_130;
        local_78 = param_8;
        local_70 = param_7;
        aBlock = __Block_copy(&local_98);
        lVar2 = local_70;
        _swift_retain(uVar6);
        _swift_retain(uVar1);
        _swift_release(lVar2);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
        local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar8 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar7 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar9 = puVar7;
        FUN_10004eec4();
        lVar2 = local_120;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (puVar12,&local_98,puVar7,puVar9,local_120,puVar8);
        __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (lVar15,lVar14,puVar12,aBlock);
        __Block_release(aBlock);
        (**(code **)(lVar11 + 8))(puVar12,lVar2);
        (**(code **)(lVar13 + 8))(lVar14,lVar3);
        (*local_100)(lVar15,lVar4);
        return;
      }
      cVar10 = '\x02';
    }
    local_98 = (undefined *)CONCAT71(local_98._1_7_,cVar10);
    (*local_110)(&local_98);
  }
  else {
    local_98 = (undefined *)CONCAT71(local_98._1_7_,2);
    (*param_5)(&local_98);
  }
  return;
}


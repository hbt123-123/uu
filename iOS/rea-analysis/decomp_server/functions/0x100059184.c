// rea decompile_all
// name: FUN_100059184
// address: 0x100059184
// body: available
// range: 0x100059184-0x10005960b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100059184(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  char cVar9;
  long lVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long lVar14;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long lVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_130 [8];
  code *local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  code *local_108;
  undefined8 local_100;
  code *local_f8;
  undefined *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar11 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  local_f8 = *(code **)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_f8 + 0x40));
  lVar18 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar18 - extraout_x12;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar20 = lVar14 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + 0xb8) == param_1) {
    local_118 = lVar1;
    local_110 = lVar4;
    local_108 = param_5;
    local_100 = param_6;
    (*param_3)(&local_a0);
    cVar9 = (char)local_78;
    if ((char)local_78 == '\x02') {
      __s10Foundation4DateVACycfC(uVar20);
      uVar15 = uVar20;
      __s10Foundation4DateV1loiySbAC_ACtFZ(uVar20,param_2);
      lVar1 = local_110;
      (**(code **)(extraout_x12_00 + 8))(uVar20,local_110);
      if ((uVar15 & 1) != 0) {
        uVar5 = 0;
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        local_120 = uVar5;
        __s8Dispatch0A4TimeV3nowACyFZ(lVar18);
        local_128 = param_3;
        __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar14,0x3fa999999999999a,lVar18);
        local_f8 = *(code **)((long)local_f8 + 8);
        (*local_f8)(lVar18,lVar3);
        puVar6 = &DAT_1009985d0;
        _swift_allocObject(&DAT_1009985d0,0x18,7);
        _swift_weakInit(puVar6 + 0x10,unaff_x20);
        (**(code **)(extraout_x12_00 + 0x10))(uVar20,param_2,lVar1);
        uVar15 = (ulong)*(byte *)(extraout_x12_00 + 0x50);
        uVar17 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
        uVar19 = lVar16 + uVar17 + 7 & 0xfffffffffffffff8;
        puVar7 = &DAT_100998d78;
        _swift_allocObject(&DAT_100998d78,uVar19 + 0x20,uVar15 | 7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(long *)(puVar7 + 0x18) = param_1;
        (**(code **)(extraout_x12_00 + 0x20))(puVar7 + uVar17,uVar20,lVar1);
        uVar5 = local_100;
        *(code **)(puVar7 + uVar19) = local_128;
        *(undefined8 *)((long)(puVar7 + uVar19) + 8) = param_4;
        *(code **)(puVar7 + uVar19 + 0x10) = local_108;
        *(undefined8 *)((long)(puVar7 + uVar19 + 0x10) + 8) = local_100;
        local_80 = thunk_FUN_10007f270;
        local_a0 = PTR___NSConcreteStackBlock_100995490;
        uStack_98 = 0x42000000;
        local_90 = FUN_1000acdb4;
        puStack_88 = &DAT_100998d90;
        local_78 = puVar7;
        aBlock = __Block_copy(&local_a0);
        puVar6 = local_78;
        _swift_retain(param_4);
        _swift_retain(uVar5);
        _swift_release(puVar6);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar8 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar6 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar7 = puVar6;
        FUN_10004eec4();
        lVar1 = local_118;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (puVar11,&local_a0,puVar6,puVar7,local_118,puVar8);
        __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (lVar14,lVar13,puVar11,aBlock);
        __Block_release(aBlock);
        (**(code **)(lVar10 + 8))(puVar11,lVar1);
        (**(code **)(lVar12 + 8))(lVar13,lVar2);
        (*local_f8)(lVar14,lVar3);
        return;
      }
      local_80 = (code *)0x0;
      uStack_98 = 0;
      local_a0 = (undefined *)0x0;
      puStack_88 = (undefined *)0x0;
      local_90 = (code *)0x0;
      cVar9 = '\x02';
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,cVar9);
    (*local_108)(&local_a0);
  }
  else {
    local_80 = (code *)0x0;
    uStack_98 = 0;
    local_a0 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    local_90 = (code *)0x0;
    local_78 = (undefined *)CONCAT71(local_78._1_7_,2);
    (*param_5)(&local_a0);
  }
  return;
}


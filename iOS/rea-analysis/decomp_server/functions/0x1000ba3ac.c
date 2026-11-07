// rea decompile_all
// name: FUN_1000ba3ac
// address: 0x1000ba3ac
// body: available
// range: 0x1000ba3ac-0x1000ba8d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000ba53c) */

void FUN_1000ba3ac(void)

{
  char *pcVar1;
  char cVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  void *aBlock;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ID IVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x12;
  long lVar17;
  undefined8 unaff_x20;
  code *pcVar18;
  ulong uVar19;
  undefined1 auStack_170 [16];
  char acStack_160 [16];
  undefined1 auStack_150 [8];
  char *local_148;
  char *local_140;
  long local_138;
  long local_130;
  undefined1 *local_128;
  long local_120;
  long local_118;
  undefined8 *local_110;
  void *local_108;
  undefined8 local_100;
  ID local_f8;
  long local_f0;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  code *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_120 = *(long *)(lVar6 + -8);
  local_118 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  lVar6 = 0;
  local_128 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_138 = *(long *)(lVar6 + -8);
  local_130 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_138 + 0x40));
  lVar16 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_f0 = lVar16;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar7 + -8);
  lVar8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar19 = lVar16 - extraout_x12;
  FUN_1003b2558();
  lVar6 = 0;
  local_c8 = *(code **)(lVar17 + 0x10);
  local_140 = "$_windowLevelProtector";
  local_148 = "privacy_screen_image_vertical";
  local_d8 = "applyCachedImage(for:)";
  local_d0 = "privacy_screen_image_mac";
  local_e0 = " updated overlay in place";
  local_c0 = lVar8;
  local_b8 = lVar17;
  do {
    cVar2 = (&DAT_100a744f8)[lVar6];
    lVar6 = lVar6 + 1;
    (*local_c8)(lVar16,local_c0,lVar7);
    ppcVar3 = &local_d8;
    puVar4 = &DAT_d000000000000018;
    if (cVar2 != '\x01') {
      ppcVar3 = &local_e0;
      puVar4 = (undefined1 *)0xd00000000000001d;
    }
    pcVar1 = local_d0;
    puVar5 = (undefined1 *)0xd00000000000001d;
    if (cVar2 != '\0') {
      pcVar1 = *ppcVar3;
      puVar5 = puVar4;
    }
    __s10Foundation3URLV22appendingPathComponentyACSSF
              (uVar19,puVar5,(ulong)pcVar1 | 0x8000000000000000);
    _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
    pcVar18 = *(code **)(local_b8 + 8);
    (*pcVar18)(lVar16,lVar7);
    uVar15 = 0;
    uVar9 = uVar19;
    __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(uVar19,0);
    (*pcVar18)(uVar19,lVar7);
    uVar10 = uVar9;
    FUN_1000bd850(uVar9,uVar15,cVar2);
    if ((uVar10 & 1) == 0) {
      FUN_100006cdc(uVar9,uVar15);
    }
    else {
      puVar11 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      uVar10 = uVar9;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar9,uVar15);
      IVar12 = _objc_msgSend((ID)puVar11,"initWithData:",uVar10);
      FUN_100006cdc(uVar9,uVar15);
      if (IVar12 != 0) {
        uVar15 = 0;
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar11 = &DAT_10099b050;
        local_100 = uVar15;
        _swift_allocObject(&DAT_10099b050,0x18,7);
        _swift_weakInit(puVar11 + 0x10,unaff_x20);
        puVar13 = &DAT_10099b0f0;
        _swift_allocObject(&DAT_10099b0f0,0x28,7);
        *(undefined **)(puVar13 + 0x10) = puVar11;
        puVar13[0x18] = cVar2;
        *(ID *)(puVar13 + 0x20) = IVar12;
        local_90 = FUN_1000c112c;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        puStack_98 = &DAT_10099b108;
        local_88 = puVar13;
        local_108 = __Block_copy(&local_b0);
        local_f8 = IVar12;
        _swift_release(local_88);
        lVar17 = local_f0;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_f0);
        local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar14 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar11 = &DAT_100a75a98;
        local_110 = puVar14;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar14 = &DAT_100a75aa0;
        FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
        lVar8 = local_118;
        puVar4 = local_128;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_128,&local_b0,puVar11,puVar14,local_118,local_110);
        aBlock = local_108;
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar17,puVar4,local_108);
        __Block_release(aBlock);
        (**(code **)(local_120 + 8))(puVar4,lVar8);
        (**(code **)(local_138 + 8))(local_f0,local_130);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(char *)(uVar19 - 0x10) = cVar2;
        FUN_1003fb48c(FUN_1000c113c,uVar19 - 0x20,0xd00000000000009f,
                      (ulong)local_140 | 0x8000000000000000,0xd000000000000016,
                      (ulong)local_148 | 0x8000000000000000,0x2b2,0);
      }
    }
  } while (lVar6 != 3);
  return;
}


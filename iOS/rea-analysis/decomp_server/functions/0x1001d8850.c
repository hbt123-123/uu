// rea decompile_all
// name: FUN_1001d8850
// address: 0x1001d8850
// body: available
// range: 0x1001d8850-0x1001d8efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001d8850(void)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  dispatch_group_t group;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *aBlock;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  ulong uVar15;
  long extraout_x12;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined1 auStack_170 [8];
  long *local_168;
  undefined1 *local_160;
  long local_158;
  long local_150;
  long local_148;
  ulong local_140;
  long local_138;
  ulong *local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar6 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_108 = *(long *)(lVar7 + -8);
  local_100 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar14 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_110 = lVar14;
  __s8Dispatch0A3QoSVMa();
  local_120 = *(long *)(lVar7 + -8);
  local_118 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  local_128 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  plVar1 = (long *)(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions);
  _swift_beginAccess(plVar1,auStack_90,1,0);
  if (*(long *)(*plVar1 + 0x10) == 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001dd874,0,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                  0x800000010089eef0,0x35c,0);
  }
  else {
    local_160 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_158 = lVar16;
    local_150 = lVar18;
    local_148 = lVar6;
    group = _dispatch_group_create();
    local_f8 = *plVar1;
    local_130 = (ulong *)(local_f8 + 0x40);
    uVar15 = 1L << ((ulong)*(byte *)(local_f8 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if ((long)uVar15 < 0x40) {
      uVar17 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar17 = uVar17 & *local_130;
    local_138 = _TtC14UURemoteServer15TerminalManager::closingSessionIds;
    local_168 = plVar1;
    _swift_bridgeObjectRetain();
    lVar6 = 0;
    local_140 = uVar15 + 0x3f >> 6;
    while( true ) {
      while (uVar17 != 0) {
        uVar15 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 - 1 & uVar17;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar6 << 6;
        uVar2 = *(undefined4 *)(*(long *)(local_f8 + 0x30) + uVar15 * 4);
        uVar20 = *(undefined8 *)(*(long *)(local_f8 + 0x38) + uVar15 * 8);
        _swift_beginAccess(unaff_x20 + local_138,&local_c0,0x21,0);
        _swift_retain(uVar20);
        FUN_10006d93c(&local_c8,uVar2);
        _swift_endAccess(&local_c0);
        _dispatch_group_enter(group);
        if (DAT_100a73be0 != -1) {
          _swift_once(&DAT_100a73be0,FUN_1001dd6a8);
        }
        uVar3 = DAT_100a7d488;
        puVar8 = &DAT_1009a3ab0;
        _swift_allocObject(&DAT_1009a3ab0,0x18,7);
        _swift_unknownObjectWeakInit(puVar8 + 0x10,unaff_x20);
        puVar9 = &DAT_1009a3e20;
        _swift_allocObject(&DAT_1009a3e20,0x28,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(undefined4 *)(puVar9 + 0x18) = uVar2;
        *(dispatch_group_t *)(puVar9 + 0x20) = group;
        puVar10 = &DAT_1009a3c40;
        _swift_allocObject(&DAT_1009a3c40,0x18,7);
        _swift_weakInit(puVar10 + 0x10,uVar20);
        puVar11 = &DAT_1009a3e48;
        _swift_allocObject(&DAT_1009a3e48,0x30,7);
        *(undefined **)(puVar11 + 0x10) = puVar10;
        *(undefined8 *)(puVar11 + 0x18) = uVar3;
        *(code **)(puVar11 + 0x20) = FUN_1001e44ec;
        *(undefined **)(puVar11 + 0x28) = puVar9;
        local_a0 = FUN_1001e4538;
        local_c0 = PTR___NSConcreteStackBlock_100995490;
        local_b8 = 0x42000000;
        local_b0 = FUN_1000acdb4;
        puStack_a8 = &DAT_1009a3e60;
        local_98 = puVar11;
        aBlock = __Block_copy(&local_c0);
        _swift_retain(puVar8);
        _swift_retain(puVar10);
        _swift_retain(puVar9);
        lVar7 = local_128;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_128);
        local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar12 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar11 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar13 = &DAT_100a75aa0;
        FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
        lVar16 = local_100;
        lVar14 = local_110;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_110,&local_c8,puVar11,puVar13,local_100,puVar12);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar7,lVar14,aBlock);
        __Block_release(aBlock);
        _swift_release(puVar9);
        (**(code **)(local_108 + 8))(lVar14,lVar16);
        (**(code **)(local_120 + 8))(lVar7,local_118);
        puVar9 = local_98;
        _swift_release(uVar20);
        _swift_release(puVar8);
        _swift_release(puVar10);
        _swift_release(puVar9);
      }
      bVar5 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1001d8efc);
        (*pcVar19)();
      }
      if ((long)local_140 <= lVar6) break;
      uVar17 = local_130[lVar6];
    }
    _swift_release(local_f8);
    lVar6 = *local_168;
    *local_168 = (long)PTR___swiftEmptyDictionarySingleton_100995ea8;
    _swift_bridgeObjectRelease(lVar6);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001dda6c,0,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                  0x800000010089eef0,0x36e,0);
    puVar4 = local_160;
    __s8Dispatch0A4TimeV3nowACyFZ(local_160);
    lVar6 = local_158;
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_158,0x4008000000000000,puVar4);
    lVar7 = local_148;
    pcVar19 = *(code **)(local_150 + 8);
    (*pcVar19)(puVar4,local_148);
    lVar14 = lVar6;
    __sSo17OS_dispatch_groupC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
    (*pcVar19)(lVar6,lVar7);
    uVar17 = (ulong)((uint)lVar14 & 1);
    __s8Dispatch0A13TimeoutResultO2eeoiySbAC_ACtFZ(uVar17,1);
    if ((uVar17 & 1) == 0) {
      FUN_1003fb48c(FUN_1001ddac4,0,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                    0x800000010089eef0,0x374,0);
    }
    else {
      FUN_1003fb4bc(FUN_1001dda98,0,0xd000000000000095,0x8000000100889250,0xd000000000000012,
                    0x800000010089eef0,0x372,0);
    }
  }
  return;
}


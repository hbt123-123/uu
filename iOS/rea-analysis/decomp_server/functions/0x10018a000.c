// rea decompile_all
// name: FUN_10018a000
// address: 0x10018a000
// body: available
// range: 0x10018a000-0x10018a703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018a000(ulong param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  void *aBlock;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_190 [16];
  long alStack_180 [4];
  char *local_160;
  undefined8 local_158;
  ulong local_150;
  ulong local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  void *local_110;
  undefined *local_108;
  undefined *local_100;
  ulong local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined1 auStack_d8 [24];
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  local_e0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_120 = *(long *)(lVar4 + -8);
  local_118 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  lVar13 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_128 = lVar13;
  __s8Dispatch0A3QoSVMa();
  local_138 = *(long *)(lVar4 + -8);
  local_130 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_138 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar13;
  if (param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar14 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar14 == 0) {
    uVar15 = 0x8000000100893bb0;
  }
  else {
    if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10018a704);
      (*pcVar3)();
    }
    uVar18 = param_1 & 0xc000000000000001;
    _swift_beginAccess(local_e0 + 0x10,auStack_90,0,0);
    uVar20 = 0;
    local_158 = 0x8000000100893bb0;
    local_160 = "writeMultiContent(list:)";
    local_150 = uVar18;
    local_148 = uVar14;
    local_f8 = param_1;
    do {
      if (uVar18 == 0) {
        uVar16 = *(ulong *)(param_1 + uVar20 * 8 + 0x20);
        _swift_retain(uVar16);
      }
      else {
        uVar16 = uVar20;
        FUN_10016aa3c(uVar20,param_1);
      }
      uVar17 = *(ulong *)(uVar16 + 0x28);
      if ((uVar17 >> 0x3c < 0xf) && (lVar4 = *(long *)(*(long *)(uVar16 + 0x10) + 0x58), lVar4 != 0)
         ) {
        lVar19 = *(long *)(uVar16 + 0x20);
        lVar5 = local_e0 + 0x10;
        _swift_weakLoadStrong();
        if (lVar5 == 0) goto LAB_10018a14c;
        puVar6 = &DAT_1009a10b0;
        _swift_allocObject(&DAT_1009a10b0,0x18,7);
        _swift_weakInit(puVar6 + 0x10,lVar5);
        puVar7 = &DAT_1009a1150;
        _swift_allocObject(&DAT_1009a1150,0x30,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(long *)(puVar7 + 0x18) = lVar4;
        *(long *)(puVar7 + 0x20) = lVar19;
        *(ulong *)(puVar7 + 0x28) = uVar17;
        local_e8 = lVar5;
        FUN_10010bd10(lVar19,uVar17);
        FUN_10010bd10(lVar19,uVar17);
        _swift_retain(puVar6);
        IVar8 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
        if ((int)IVar8 == 0) {
          puVar10 = (undefined *)0x0;
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          local_f0 = puVar6;
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          local_a0 = FUN_10018b728;
          local_c0 = PTR___NSConcreteStackBlock_100995490;
          local_b8 = 0x42000000;
          local_b0 = FUN_1000acdb4;
          puStack_a8 = &DAT_1009a1168;
          local_100 = puVar10;
          local_98 = puVar7;
          local_110 = __Block_copy(&local_c0);
          puVar6 = local_98;
          _swift_retain(puVar7);
          _swift_release(puVar6);
          lVar4 = local_140;
          local_108 = puVar7;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ();
          local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar11 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar6 = &DAT_100a75a98;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar7 = puVar6;
          FUN_10004eec4();
          lVar2 = local_118;
          lVar5 = local_128;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_128,&local_c0,puVar6,puVar7,local_118,puVar11);
          aBlock = local_110;
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar4,lVar5,local_110);
          __Block_release(aBlock);
          _swift_release(uVar16);
          _swift_release(local_e8);
          _swift_release(local_108);
          FUN_100006cc8(lVar19,uVar17);
          uVar18 = local_150;
          (**(code **)(local_120 + 8))(lVar5,lVar2);
          uVar14 = local_148;
          (**(code **)(local_138 + 8))(lVar4,local_130);
          _swift_release(local_f0);
          param_1 = local_f8;
        }
        else {
          _swift_beginAccess(puVar6 + 0x10,auStack_d8,0,0);
          puVar10 = puVar6 + 0x10;
          _swift_weakLoadStrong();
          if (puVar10 == (undefined *)0x0) {
            _swift_release(uVar16);
            _swift_release(local_e8);
            _swift_release(puVar7);
            FUN_100006cc8(lVar19,uVar17);
          }
          else {
            puVar9 = puVar10 + 0x10;
            _swift_unknownObjectWeakLoadStrong();
            if (puVar9 != (undefined *)0x0) {
              local_100 = puVar10;
              local_f0 = puVar6;
              _swift_unknownObjectRelease();
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(long *)(lVar13 + -0x20) = lVar4;
              *(long *)(lVar13 + -0x18) = lVar19;
              *(ulong *)(lVar13 + -0x10) = uVar17;
              FUN_1003fb48c(FUN_10018b734,lVar13 + -0x30,0xd0000000000000a2,local_158,
                            &DAT_d000000000000018,(ulong)local_160 | 0x8000000000000000,0x75,7);
              puVar6 = local_100;
              uVar1 = (uint)(uVar17 >> 0x20);
              uVar12 = uVar1 >> 0x1e;
              if (uVar1 >> 0x1e < 2) {
                if (uVar12 == 0) {
                  if ((uVar17 & 0xff000000000000) != 0) {
LAB_10018a564:
                    IVar8 = *(ID *)(local_100 + 0x20);
                    lVar5 = lVar19;
                    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar19,uVar17);
                    _objc_msgSend(IVar8,"setData:forType:",lVar5,lVar4);
                    _swift_release(uVar16);
                    _swift_release(local_e8);
                    _swift_release(puVar7);
                    FUN_100006cc8(lVar19,uVar17);
                    _swift_release(local_f0);
                    _swift_release(local_100);
                    param_1 = local_f8;
                    goto LAB_10018a154;
                  }
                }
                else if ((long)(int)lVar19 != lVar19 >> 0x20) goto LAB_10018a564;
              }
              else if ((uVar12 == 2) && (*(long *)(lVar19 + 0x10) != *(long *)(lVar19 + 0x18)))
              goto LAB_10018a564;
              _objc_msgSend(*(ID *)(local_100 + 0x20),"setData:forType:",0,lVar4);
              _swift_release(uVar16);
              _swift_release(local_e8);
              _swift_release(puVar7);
              FUN_100006cc8(lVar19,uVar17);
              _swift_release(local_f0);
              _swift_release(puVar6);
              param_1 = local_f8;
              goto LAB_10018a154;
            }
            _swift_release(uVar16);
            _swift_release(local_e8);
            _swift_release(puVar7);
            FUN_100006cc8(lVar19,uVar17);
            _swift_release(puVar6);
            puVar6 = puVar10;
          }
          _swift_release(puVar6);
          param_1 = local_f8;
        }
      }
      else {
LAB_10018a14c:
        _swift_release(uVar16);
      }
LAB_10018a154:
      uVar20 = uVar20 + 1;
      uVar15 = local_158;
    } while (uVar14 != uVar20);
  }
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_10018a704,0,0xd0000000000000a2,uVar15,&DAT_d000000000000018,0x80000001008984f0,
                0x6d,7);
  return;
}


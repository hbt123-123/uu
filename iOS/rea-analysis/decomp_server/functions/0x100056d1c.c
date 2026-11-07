// rea decompile_all
// name: FUN_100056d1c
// address: 0x100056d1c
// body: available
// range: 0x100056d1c-0x100057cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100056d1c(char *param_1,long param_2,undefined8 *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  void *aBlock;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_220 [16];
  long lStack_210;
  byte abStack_208 [8];
  undefined1 auStack_200 [8];
  undefined8 *local_1f8;
  code *local_1f0;
  code *local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  ulong local_1a8;
  long local_1a0;
  undefined *local_198;
  long local_190;
  code *local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined1 *local_168;
  long local_160;
  long local_158;
  ulong local_150;
  long local_148;
  undefined *local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined1 auStack_118 [24];
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *local_d8;
  undefined1 auStack_80 [32];
  
  lVar9 = 0;
  local_138 = param_7;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_160 = *(long *)(lVar9 + -8);
  local_158 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_160 + 0x40));
  lVar9 = 0;
  local_168 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_178 = *(long *)(lVar9 + -8);
  local_170 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_178 + 0x40));
  lVar17 = (long)(auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined *)0x0;
  local_180 = lVar17;
  __s8Dispatch0A4TimeVMa();
  local_188 = *(code **)(puVar10 + -8);
  local_140 = puVar10;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_188 + 0x40));
  lVar17 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12;
  lVar9 = 0;
  local_148 = lVar17;
  __s10Foundation4DateVMa();
  local_130 = *(long *)(lVar9 + -8);
  lVar21 = *(long *)(local_130 + 0x40);
  local_128 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar18 = lVar17 - (lVar21 + 0xfU & 0xfffffffffffffff0);
  local_150 = uVar18;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = uVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar17 - extraout_x12_01;
  cVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    local_120 = param_2;
    if (cVar1 == '\x02') {
      puVar10 = &DAT_1009985d0;
      puVar11 = puVar10;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      lVar5 = local_120;
      local_1a8 = CONCAT44(local_1a8._4_4_,param_8);
      local_198 = puVar11;
      _swift_weakInit(puVar11 + 0x10,local_120);
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      local_1a0 = param_4;
      _swift_weakInit(puVar10 + 0x10,lVar5);
      lVar6 = local_128;
      lVar5 = local_130;
      pcVar19 = *(code **)(local_130 + 0x10);
      local_1d8 = param_9;
      (*pcVar19)(lVar9,param_9,local_128);
      local_1e8 = pcVar19;
      local_1c0 = lVar17;
      (*pcVar19)(lVar17,lVar9,lVar6);
      uVar23 = local_138;
      local_1e0 = (ulong)*(byte *)(lVar5 + 0x50);
      uVar18 = local_1e0 + 0xb9 & (local_1e0 ^ 0xffffffffffffffff);
      puVar11 = &DAT_100999200;
      _swift_allocObject(&DAT_100999200,uVar18 + lVar21,local_1e0 | 7);
      puVar16 = local_198;
      lVar17 = local_1a0;
      uVar22 = param_3[8];
      uVar25 = param_3[0xb];
      uVar24 = param_3[10];
      *(undefined8 *)(puVar11 + 0x60) = param_3[9];
      *(undefined8 *)(puVar11 + 0x58) = uVar22;
      *(undefined8 *)(puVar11 + 0x70) = uVar25;
      *(undefined8 *)(puVar11 + 0x68) = uVar24;
      uVar22 = param_3[0xc];
      *(undefined8 *)(puVar11 + 0x80) = param_3[0xd];
      *(undefined8 *)(puVar11 + 0x78) = uVar22;
      uVar22 = *(undefined8 *)((long)param_3 + 0x6d);
      *(undefined8 *)(puVar11 + 0x8d) = *(undefined8 *)((long)param_3 + 0x75);
      *(undefined8 *)(puVar11 + 0x85) = uVar22;
      uVar22 = *param_3;
      uVar25 = param_3[3];
      uVar24 = param_3[2];
      *(undefined8 *)(puVar11 + 0x20) = param_3[1];
      *(undefined8 *)(puVar11 + 0x18) = uVar22;
      *(undefined8 *)(puVar11 + 0x30) = uVar25;
      *(undefined8 *)(puVar11 + 0x28) = uVar24;
      uVar22 = param_3[4];
      uVar25 = param_3[7];
      uVar24 = param_3[6];
      *(undefined8 *)(puVar11 + 0x40) = param_3[5];
      *(undefined8 *)(puVar11 + 0x38) = uVar22;
      *(undefined **)(puVar11 + 0x10) = puVar10;
      *(undefined8 *)(puVar11 + 0x50) = uVar25;
      *(undefined8 *)(puVar11 + 0x48) = uVar24;
      *(long *)(puVar11 + 0x98) = local_1a0;
      *(undefined8 *)(puVar11 + 0xa0) = param_5;
      *(undefined8 *)(puVar11 + 0xa8) = param_6;
      *(undefined8 *)(puVar11 + 0xb0) = uVar23;
      bVar2 = (byte)local_1a8 & 1;
      puVar11[0xb8] = bVar2;
      local_1f0 = *(code **)(lVar5 + 0x20);
      local_1c8 = param_5;
      local_1b8 = puVar11;
      local_1b0 = puVar10;
      (*local_1f0)(puVar11 + uVar18,lVar9,lVar6);
      FUN_10007eca0(param_3,&local_100);
      FUN_10007eca0(param_3,&local_100);
      puVar10 = &DAT_100999228;
      _swift_allocObject(&DAT_100999228,0x95,7);
      uVar22 = *param_3;
      uVar25 = param_3[3];
      uVar24 = param_3[2];
      *(undefined8 *)(puVar10 + 0x20) = param_3[1];
      *(undefined8 *)(puVar10 + 0x18) = uVar22;
      *(undefined8 *)(puVar10 + 0x30) = uVar25;
      *(undefined8 *)(puVar10 + 0x28) = uVar24;
      uVar22 = param_3[4];
      uVar25 = param_3[7];
      uVar24 = param_3[6];
      *(undefined8 *)(puVar10 + 0x40) = param_3[5];
      *(undefined8 *)(puVar10 + 0x38) = uVar22;
      *(undefined8 *)(puVar10 + 0x50) = uVar25;
      *(undefined8 *)(puVar10 + 0x48) = uVar24;
      uVar22 = *(undefined8 *)((long)param_3 + 0x6d);
      *(undefined8 *)(puVar10 + 0x8d) = *(undefined8 *)((long)param_3 + 0x75);
      *(undefined8 *)(puVar10 + 0x85) = uVar22;
      uVar24 = param_3[0xb];
      uVar22 = param_3[10];
      uVar25 = param_3[0xc];
      *(undefined8 *)(puVar10 + 0x80) = param_3[0xd];
      *(undefined8 *)(puVar10 + 0x78) = uVar25;
      uVar26 = param_3[9];
      uVar25 = param_3[8];
      *(undefined8 *)(puVar10 + 0x70) = uVar24;
      *(undefined8 *)(puVar10 + 0x68) = uVar22;
      *(undefined **)(puVar10 + 0x10) = puVar16;
      *(undefined8 *)(puVar10 + 0x60) = uVar26;
      *(undefined8 *)(puVar10 + 0x58) = uVar25;
      if (*(long *)(local_120 + 0xb8) == lVar17) {
        local_1d0 = puVar10;
        FUN_10007eca0(param_3,&local_100);
        _swift_retain(puVar16);
        FUN_10007eca0(param_3,&local_100);
        _swift_retain(param_6);
        _swift_bridgeObjectRetain(uVar23);
        FUN_10007eca0(param_3,&local_100);
        _swift_retain(param_6);
        _swift_bridgeObjectRetain(uVar23);
        _swift_retain(puVar16);
        puVar15 = local_1b0;
        _swift_retain(local_1b0);
        local_1f8 = param_3;
        FUN_10005960c(&local_100,puVar16,param_3);
        puVar11 = local_100;
        uVar18 = local_150;
        if ((char)local_100 == '\x02') {
          __s10Foundation4DateVACycfC(local_150);
          uVar23 = local_1d8;
          uVar12 = uVar18;
          __s10Foundation4DateV1loiySbAC_ACtFZ(uVar18,local_1d8);
          lVar17 = local_128;
          (**(code **)(local_130 + 8))(uVar18,local_128);
          puVar15 = local_1b0;
          uVar3 = local_1e0;
          if ((uVar12 & 1) == 0) {
            _swift_beginAccess(local_1b0 + 0x10,&local_100,0,0);
            puVar11 = puVar15 + 0x10;
            _swift_weakLoadStrong();
            param_3 = local_1f8;
            lVar17 = local_1c0;
            puVar10 = local_1d0;
            uVar23 = local_138;
            if (puVar11 != (undefined *)0x0) {
              iVar8 = *(int *)(local_1f8 + 0xc);
              iVar7 = iVar8;
              _CGDisplayIsOnline();
              _CGDisplayIsActive();
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(undefined8 **)(lVar9 + -0x10) = param_3;
              *(bool *)(lVar9 + -8) = iVar7 != 0;
              *(bool *)(lVar9 + -7) = iVar8 != 0;
              *(byte *)(lVar9 + -6) = bVar2;
              FUN_1003fb4bc(thunk_FUN_10007f08c,lVar9 + -0x20,0xd0000000000000a5,0x800000010087d850,
                            0xd000000000000057,0x800000010087dd30,0x3d4,0);
              uVar23 = local_138;
              if ((local_1a8 & 1) == 0) {
                FUN_10005b088(param_3,0x2715,local_1c8,param_6);
              }
              else {
                FUN_100059d74(param_3,local_138,local_1a0,local_1c8,param_6);
              }
              lVar17 = local_1c0;
              _swift_release(local_1d0);
              puVar10 = puVar11;
              puVar15 = local_1b0;
            }
          }
          else {
            uVar20 = ~local_1e0;
            uVar12 = 0;
            FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
            __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
            lVar9 = local_190;
            local_1a8 = uVar12;
            __s8Dispatch0A4TimeV3nowACyFZ(local_190);
            __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_148,0x3fa999999999999a,lVar9);
            local_188 = *(code **)(local_188 + 8);
            (*local_188)(lVar9,local_140);
            puVar10 = &DAT_1009985d0;
            _swift_allocObject(&DAT_1009985d0,0x18,7);
            _swift_weakInit(puVar10 + 0x10,local_120);
            (*local_1e8)(uVar18,uVar23,lVar17);
            uVar20 = uVar3 + 0x20 & uVar20;
            uVar12 = lVar21 + uVar20 + 7 & 0xfffffffffffffff8;
            puVar11 = &DAT_100999250;
            _swift_allocObject(&DAT_100999250,uVar12 + 0x20,uVar3 | 7);
            *(undefined **)(puVar11 + 0x10) = puVar10;
            *(long *)(puVar11 + 0x18) = local_1a0;
            (*local_1f0)(puVar11 + uVar20,uVar18,lVar17);
            puVar16 = local_1b8;
            puVar10 = local_1d0;
            *(code **)(puVar11 + uVar12) = thunk_FUN_10007f080;
            *(undefined **)((long)(puVar11 + uVar12) + 8) = local_1d0;
            *(code **)(puVar11 + uVar12 + 0x10) = thunk_FUN_10007f070;
            *(undefined **)((long)(puVar11 + uVar12 + 0x10) + 8) = local_1b8;
            local_e0 = thunk_FUN_10007f0a4;
            local_100 = PTR___NSConcreteStackBlock_100995490;
            local_f8 = 0x42000000;
            local_f0 = FUN_1000acdb4;
            puStack_e8 = &DAT_100999268;
            local_d8 = puVar11;
            aBlock = __Block_copy(&local_100);
            puVar11 = local_d8;
            _swift_retain(puVar10);
            _swift_retain(puVar16);
            _swift_release(puVar11);
            lVar9 = local_180;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_180);
            local_100 = PTR___swiftEmptyArrayStorage_100995ea0;
            puVar13 = &DAT_100a75a90;
            FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
            puVar11 = &DAT_100a75a98;
            FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
            puVar16 = puVar11;
            FUN_10004eec4();
            lVar17 = local_158;
            puVar4 = local_168;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_168,&local_100,puVar11,puVar16,local_158,puVar13);
            lVar21 = local_148;
            __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (local_148,lVar9,puVar4,aBlock);
            __Block_release(aBlock);
            (**(code **)(local_160 + 8))(puVar4,lVar17);
            (**(code **)(local_178 + 8))(lVar9,local_170);
            (*local_188)(lVar21,local_140);
            param_3 = local_1f8;
            lVar17 = local_1c0;
            puVar15 = local_1b0;
            puVar16 = local_198;
            uVar23 = local_138;
          }
        }
        else {
          _swift_beginAccess(puVar15 + 0x10,auStack_118,0,0);
          puVar14 = puVar15 + 0x10;
          _swift_weakLoadStrong();
          param_3 = local_1f8;
          lVar17 = local_1c0;
          puVar10 = local_1d0;
          uVar23 = local_138;
          if (puVar14 != (undefined *)0x0) {
            puVar10 = puVar14;
            if (((ulong)puVar11 & 1) == 0) {
              FUN_100057cf8(local_1f8,local_1a0,local_1c8,param_6);
              _swift_release(local_1d0);
              lVar17 = local_1c0;
              uVar23 = local_138;
            }
            else {
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(undefined8 **)(lVar9 + -0x10) = param_3;
              FUN_1003fb4bc(thunk_FUN_10007f0b0,lVar9 + -0x20,0xd0000000000000a5,0x800000010087d850,
                            0xd000000000000050,0x800000010087dd90,0x3ef,0);
              uVar18 = (ulong)*(uint *)(param_3 + 0xc);
              FUN_10004adfc();
              if ((uVar18 & 1) == 0) {
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(undefined8 **)(lVar9 + -0x10) = param_3;
                *(byte *)(lVar9 + -8) = bVar2;
                FUN_1003fb4bc(thunk_FUN_10007f0b8,lVar9 + -0x20,0xd0000000000000a5,
                              0x800000010087d850,0xd000000000000050,0x800000010087dd90,0x3f1,0);
                uVar23 = local_138;
                if ((local_1a8 & 1) == 0) {
                  FUN_10005b088(param_3,0x2715,local_1c8,param_6);
                  _swift_release(local_1d0);
                  lVar17 = local_1c0;
                  puVar15 = local_1b0;
                  puVar16 = local_198;
                  uVar23 = local_138;
                }
                else {
                  FUN_100059d74(param_3,local_138,local_1a0,local_1c8,param_6);
                  _swift_release(local_1d0);
                  lVar17 = local_1c0;
                  puVar15 = local_1b0;
                  puVar16 = local_198;
                }
              }
              else {
                puVar11 = &DAT_1009985d0;
                puVar15 = puVar11;
                _swift_allocObject(&DAT_1009985d0,0x18,7);
                _swift_weakInit(puVar15 + 0x10,puVar14);
                puVar16 = &DAT_1009992a0;
                _swift_allocObject(&DAT_1009992a0,0x95,7);
                uVar23 = param_3[8];
                uVar24 = param_3[0xb];
                uVar22 = param_3[10];
                *(undefined8 *)(puVar16 + 0x60) = param_3[9];
                *(undefined8 *)(puVar16 + 0x58) = uVar23;
                *(undefined8 *)(puVar16 + 0x70) = uVar24;
                *(undefined8 *)(puVar16 + 0x68) = uVar22;
                uVar23 = param_3[0xc];
                *(undefined8 *)(puVar16 + 0x80) = param_3[0xd];
                *(undefined8 *)(puVar16 + 0x78) = uVar23;
                uVar23 = *(undefined8 *)((long)param_3 + 0x6d);
                *(undefined8 *)(puVar16 + 0x8d) = *(undefined8 *)((long)param_3 + 0x75);
                *(undefined8 *)(puVar16 + 0x85) = uVar23;
                uVar23 = *param_3;
                uVar24 = param_3[3];
                uVar22 = param_3[2];
                *(undefined8 *)(puVar16 + 0x20) = param_3[1];
                *(undefined8 *)(puVar16 + 0x18) = uVar23;
                *(undefined8 *)(puVar16 + 0x30) = uVar24;
                *(undefined8 *)(puVar16 + 0x28) = uVar22;
                uVar23 = param_3[4];
                uVar24 = param_3[7];
                uVar22 = param_3[6];
                *(undefined8 *)(puVar16 + 0x40) = param_3[5];
                *(undefined8 *)(puVar16 + 0x38) = uVar23;
                *(undefined **)(puVar16 + 0x10) = puVar15;
                *(undefined8 *)(puVar16 + 0x50) = uVar24;
                *(undefined8 *)(puVar16 + 0x48) = uVar22;
                _swift_allocObject(&DAT_1009985d0,0x18,7);
                _swift_weakInit(puVar11 + 0x10,puVar14);
                puVar15 = &DAT_1009992c8;
                _swift_allocObject(&DAT_1009992c8,0xc0,7);
                uVar23 = local_138;
                lVar21 = local_1a0;
                uVar22 = param_3[8];
                uVar25 = param_3[0xb];
                uVar24 = param_3[10];
                *(undefined8 *)(puVar15 + 0x60) = param_3[9];
                *(undefined8 *)(puVar15 + 0x58) = uVar22;
                *(undefined8 *)(puVar15 + 0x70) = uVar25;
                *(undefined8 *)(puVar15 + 0x68) = uVar24;
                uVar22 = param_3[0xc];
                *(undefined8 *)(puVar15 + 0x80) = param_3[0xd];
                *(undefined8 *)(puVar15 + 0x78) = uVar22;
                uVar22 = *(undefined8 *)((long)param_3 + 0x6d);
                *(undefined8 *)(puVar15 + 0x8d) = *(undefined8 *)((long)param_3 + 0x75);
                *(undefined8 *)(puVar15 + 0x85) = uVar22;
                uVar22 = *param_3;
                uVar25 = param_3[3];
                uVar24 = param_3[2];
                *(undefined8 *)(puVar15 + 0x20) = param_3[1];
                *(undefined8 *)(puVar15 + 0x18) = uVar22;
                *(undefined8 *)(puVar15 + 0x30) = uVar25;
                *(undefined8 *)(puVar15 + 0x28) = uVar24;
                uVar22 = param_3[4];
                uVar25 = param_3[7];
                uVar24 = param_3[6];
                *(undefined8 *)(puVar15 + 0x40) = param_3[5];
                *(undefined8 *)(puVar15 + 0x38) = uVar22;
                *(undefined **)(puVar15 + 0x10) = puVar11;
                *(undefined8 *)(puVar15 + 0x50) = uVar25;
                *(undefined8 *)(puVar15 + 0x48) = uVar24;
                *(long *)(puVar15 + 0x98) = local_1a0;
                *(undefined8 *)(puVar15 + 0xa0) = local_1c8;
                *(undefined8 *)(puVar15 + 0xa8) = param_6;
                puVar15[0xb0] = bVar2;
                *(undefined8 *)(puVar15 + 0xb8) = local_138;
                FUN_10007eca0(param_3,&local_100);
                FUN_10007eca0(param_3,&local_100);
                _swift_retain(param_6);
                _swift_bridgeObjectRetain(uVar23);
                *(undefined **)(lVar9 + -0x10) = &DAT_100998890;
                lVar17 = local_1c0;
                FUN_100058d1c(lVar21,local_1c0,thunk_FUN_10007f0c4,puVar16,thunk_FUN_100082a38,
                              puVar15,&DAT_100998878,FUN_10007ed80);
                _swift_release(local_1d0);
                _swift_release(puVar16);
                _swift_release(puVar15);
                puVar15 = local_1b0;
                puVar16 = local_198;
              }
            }
          }
        }
      }
      else {
        FUN_10007eca0(param_3,&local_100);
        puVar15 = local_1b0;
        _swift_beginAccess(local_1b0 + 0x10,auStack_118,0,0);
        puVar11 = puVar15 + 0x10;
        _swift_weakLoadStrong();
        if (puVar11 == (undefined *)0x0) {
          _swift_retain(puVar16);
          FUN_10007eca0(param_3,&local_100);
          _swift_retain(param_6);
          _swift_bridgeObjectRetain(uVar23);
          FUN_10007eca0(param_3,&local_100);
          _swift_retain(param_6);
          _swift_bridgeObjectRetain(uVar23);
          _swift_retain(puVar16);
          _swift_retain(puVar15);
          lVar17 = local_1c0;
        }
        else {
          iVar8 = *(int *)(param_3 + 0xc);
          local_1d0 = puVar10;
          local_140 = puVar11;
          _swift_retain(puVar16);
          FUN_10007eca0(param_3,&local_100);
          _swift_retain(param_6);
          _swift_bridgeObjectRetain(uVar23);
          FUN_10007eca0(param_3,&local_100);
          _swift_retain(param_6);
          _swift_bridgeObjectRetain(uVar23);
          _swift_retain(puVar16);
          _swift_retain(puVar15);
          iVar7 = iVar8;
          _CGDisplayIsOnline();
          _CGDisplayIsActive();
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined8 **)(lVar9 + -0x10) = param_3;
          *(bool *)(lVar9 + -8) = iVar7 != 0;
          *(bool *)(lVar9 + -7) = iVar8 != 0;
          *(byte *)(lVar9 + -6) = bVar2;
          FUN_1003fb4bc(thunk_FUN_10007f08c,lVar9 + -0x20,0xd0000000000000a5,0x800000010087d850,
                        0xd000000000000057,0x800000010087dd30,0x3d4,0);
          puVar10 = local_140;
          if ((local_1a8 & 1) == 0) {
            FUN_10005b088(param_3,0x2715,local_1c8,param_6);
          }
          else {
            FUN_100059d74(param_3,uVar23,local_1a0,local_1c8,param_6);
          }
          _swift_release(local_1d0);
          lVar17 = local_1c0;
          puVar16 = local_198;
        }
      }
      _swift_release(puVar10);
      FUN_10007ed50(param_3);
      _swift_release(local_1b8);
      _swift_release(puVar16);
      _swift_release(puVar15);
      FUN_10007ed50(param_3);
      _swift_bridgeObjectRelease(uVar23);
      _swift_release(param_6);
      (**(code **)(local_130 + 8))(lVar17,local_128);
      _swift_release(puVar16);
      FUN_10007ed50(param_3);
    }
    else {
      FUN_100057cf8(param_3,param_4,param_5,param_6);
    }
    _swift_release(local_120);
  }
  return;
}


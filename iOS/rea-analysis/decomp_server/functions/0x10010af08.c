// rea decompile_all
// name: FUN_10010af08
// address: 0x10010af08
// body: available
// range: 0x10010af08-0x10010b8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010b8cc to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010af08(double param_1,undefined4 param_2,ulong *param_3)

{
  float fVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  char *pcVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  float fVar23;
  double dVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined1 auStack_1a0 [16];
  undefined4 auStack_190 [4];
  char *local_180;
  char *local_178;
  long local_170;
  char *local_168;
  undefined1 *local_160;
  long local_158;
  long local_150;
  char *local_148;
  long local_140;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [24];
  undefined1 local_a0;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar22 + 0x40));
  lVar11 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  local_158 = *(long *)(lVar6 + -8);
  local_150 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_158 + 0x40));
  pcVar14 = (char *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar17 = param_3[2];
  if ((uVar17 != 0) && ((param_3[1] & 1) != 0)) {
    puVar21 = (undefined *)*param_3;
    local_160 = pcVar14;
    local_140 = lVar22;
    if (puVar21 + -1 < (undefined *)0x2) {
      lVar22 = *(long *)(uVar17 + 0x10);
      if (lVar22 != 0) {
        local_148 = *(char **)(unaff_x20 + 0x10);
        _swift_beginAccess(unaff_x20 + 0x18,auStack_b8,0,0);
        local_178 = "TerminalHandler.swift";
        local_180 = "lastWakeupTime";
        puVar19 = (undefined4 *)(uVar17 + 0x24);
        do {
          uVar2 = puVar19[-1];
          local_c0 = (undefined *)(ulong)uVar2;
          uVar25 = *puVar19;
          uVar27 = puVar19[1];
          fVar23 = (float)puVar19[5];
          dVar24 = (double)(ulong)(uint)fVar23;
          uVar15 = *(undefined8 *)(puVar19 + 7);
          uVar26 = *(undefined8 *)(puVar19 + 9);
          local_a0 = fVar23 <= 0.0;
          fVar1 = 0.0;
          if (0.0 < fVar23) {
            fVar1 = fVar23;
          }
          uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
          local_e8 = CONCAT44(uVar25,uVar2);
          local_e0 = (code *)CONCAT44(fVar1,uVar27);
          local_d8._0_2_ = (ushort)(byte)local_a0;
          local_f0 = puVar21;
          _swift_retain(uVar16);
          FUN_100008184(uVar15,uVar26);
          FUN_1003be2ac(&local_f0,&local_c0);
          _swift_release(uVar16);
          lVar6 = unaff_x20 + 0x18;
          _swift_unknownObjectWeakLoadStrong();
          puVar18 = local_160;
          if ((lVar6 != 0) &&
             (lVar6 = *(long *)(lVar6 + _TtC14UURemoteServer22StreamerConnectSession::wakeUpActivity
                               ), *(char *)(lVar6 + 0x18) == '\x01')) {
            __s10Foundation4DateVACycfC(local_160);
            __s10Foundation4DateV21timeIntervalSince1970Sdvg();
            (**(code **)(local_158 + 8))(puVar18,local_150);
            if (1.0 <= dVar24 - *(double *)(lVar6 + 0x20)) {
              *(double *)(lVar6 + 0x20) = dVar24;
              uVar16 = 0;
              FUN_1003e6e10();
              local_f0 = (undefined *)CONCAT71(local_f0._1_7_,1);
              uVar17 = 0x100000000;
              local_170 = uVar16;
              FUN_1003e6b94(0x100000000,0x20705520656b6157,0xef79616c70736944);
              FUN_100401b14(0);
              local_168 = pcVar14;
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(int *)(pcVar14 + -0x10) = (int)uVar17;
              if ((uVar17 >> 0x20 & 1) == 0) {
                FUN_1003fb48c(thunk_FUN_1000cdfe0,pcVar14 + -0x20,0xd00000000000009c,
                              (ulong)local_178 | 0x8000000000000000,0xd000000000000017,
                              (ulong)local_180 | 0x8000000000000000,0x128,0);
                pcVar14 = local_168;
                local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
                FUN_1003e6df8(uVar17 & 0xffffffff);
              }
              else {
                FUN_1003fb4ec(thunk_FUN_1000cdfd8,pcVar14 + -0x20,0xd00000000000009c,
                              (ulong)local_178 | 0x8000000000000000,0xd000000000000017,
                              (ulong)local_180 | 0x8000000000000000,0x12d,0);
                pcVar14 = local_168;
              }
            }
          }
          puVar19 = puVar19 + 0xc;
          puVar8 = &DAT_10099d658;
          _swift_allocObject(&DAT_10099d658,0x30,7);
          *(undefined **)(puVar8 + 0x10) = puVar21;
          *(uint *)(puVar8 + 0x18) = uVar2;
          *(undefined4 *)(puVar8 + 0x1c) = uVar25;
          *(undefined4 *)(puVar8 + 0x20) = uVar27;
          *(float *)(puVar8 + 0x24) = fVar1;
          puVar8[0x28] = local_a0;
          *(undefined4 *)(puVar8 + 0x2c) = param_2;
          local_d0 = thunk_FUN_10010bd44;
          local_f0 = PTR___NSConcreteStackBlock_100995490;
          local_e8 = 0x42000000;
          local_e0 = FUN_1000acdb4;
          local_d8 = &DAT_10099d670;
          local_c8 = puVar8;
          pvVar7 = __Block_copy(&local_f0);
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
          local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar9 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar8 = &DAT_100a75a98;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar10 = &DAT_100a75aa0;
          FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (lVar11,&local_c0,puVar8,puVar10,lVar4,puVar9);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar13,lVar11,pvVar7);
          __Block_release(pvVar7);
          FUN_100006cdc(uVar15,uVar26);
          (**(code **)(local_140 + 8))(lVar11,lVar4);
          (**(code **)(lVar12 + 8))(lVar13,lVar5);
          _swift_release(local_c8);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
    }
    else if (puVar21 + -3 < (undefined *)0x2) {
      lVar6 = *(long *)(unaff_x20 + 0x20);
      lVar20 = lVar6;
      _swift_retain();
      FUN_1003bde18();
      _swift_release(lVar6);
      lVar6 = *(long *)(lVar20 + 0x10);
      if (lVar6 == 0) {
        _swift_bridgeObjectRelease(lVar20);
        return;
      }
      _swift_beginAccess(unaff_x20 + 0x18,auStack_b8,0,0);
      local_148 = "TerminalHandler.swift";
      local_168 = "lastWakeupTime";
      puVar18 = (undefined1 *)(lVar20 + 0x38);
      local_170 = lVar20;
      do {
        uVar2 = *(uint *)(puVar18 + -0x10);
        local_c0 = (undefined *)(ulong)uVar2;
        uVar26 = *(undefined8 *)(puVar18 + -0xc);
        uVar25 = *(undefined4 *)(puVar18 + -4);
        local_a0 = *puVar18;
        uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
        _swift_retain(uVar15);
        FUN_1003bdab0(&local_f0,&local_c0);
        _swift_release(uVar15);
        lVar20 = unaff_x20 + 0x18;
        _swift_unknownObjectWeakLoadStrong();
        puVar3 = local_160;
        dVar24 = param_1;
        if ((lVar20 != 0) &&
           (lVar20 = *(long *)(lVar20 + _TtC14UURemoteServer22StreamerConnectSession::wakeUpActivity
                              ), *(char *)(lVar20 + 0x18) == '\x01')) {
          __s10Foundation4DateVACycfC(local_160);
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          (**(code **)(local_158 + 8))(puVar3,local_150);
          dVar24 = param_1 - *(double *)(lVar20 + 0x20);
          if (1.0 <= dVar24) {
            *(double *)(lVar20 + 0x20) = param_1;
            FUN_1003e6e10(0);
            local_f0 = (undefined *)CONCAT71(local_f0._1_7_,1);
            uVar17 = 0x100000000;
            FUN_1003e6b94(0x100000000,0x20705520656b6157,0xef79616c70736944);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(int *)(pcVar14 + -0x10) = (int)uVar17;
            if ((uVar17 >> 0x20 & 1) == 0) {
              FUN_1003fb48c(FUN_1000cdfe0,pcVar14 + -0x20,0xd00000000000009c,
                            (ulong)local_148 | 0x8000000000000000,0xd000000000000017,
                            (ulong)local_168 | 0x8000000000000000,0x128,0);
              local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
              FUN_1003e6df8(uVar17 & 0xffffffff);
              lVar22 = local_140;
            }
            else {
              FUN_1003fb4ec(FUN_1000cdfd8,pcVar14 + -0x20,0xd00000000000009c,
                            (ulong)local_148 | 0x8000000000000000,0xd000000000000017,
                            (ulong)local_168 | 0x8000000000000000,0x12d,0);
              lVar22 = local_140;
            }
          }
        }
        puVar8 = &DAT_10099d608;
        _swift_allocObject(&DAT_10099d608,0x30,7);
        *(undefined **)(puVar8 + 0x10) = puVar21;
        *(uint *)(puVar8 + 0x18) = uVar2;
        *(undefined8 *)(puVar8 + 0x1c) = uVar26;
        *(undefined4 *)(puVar8 + 0x24) = uVar25;
        puVar8[0x28] = local_a0;
        *(undefined4 *)(puVar8 + 0x2c) = param_2;
        local_d0 = FUN_10010bd44;
        local_f0 = PTR___NSConcreteStackBlock_100995490;
        local_e8 = 0x42000000;
        local_e0 = FUN_1000acdb4;
        local_d8 = &DAT_10099d620;
        local_c8 = puVar8;
        pvVar7 = __Block_copy(&local_f0);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
        local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar9 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar8 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar10 = &DAT_100a75aa0;
        FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (lVar11,&local_c0,puVar8,puVar10,lVar4,puVar9);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar13,lVar11,pvVar7);
        __Block_release(pvVar7);
        (**(code **)(lVar22 + 8))(lVar11,lVar4);
        (**(code **)(lVar12 + 8))(lVar13,lVar5);
        _swift_release(local_c8);
        puVar18 = puVar18 + 0x20;
        lVar6 = lVar6 + -1;
        param_1 = dVar24;
      } while (lVar6 != 0);
      _swift_bridgeObjectRelease(local_170);
    }
  }
  return;
}


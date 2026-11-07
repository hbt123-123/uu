// rea decompile_all
// name: FUN_100153dcc
// address: 0x100153dcc
// body: available
// range: 0x100153dcc-0x1001546bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100153dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  undefined8 *puVar17;
  code *pcVar18;
  ulong extraout_x8_03;
  code *pcVar19;
  long extraout_x12;
  ulong extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long unaff_x20;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 auStack_2f0 [16];
  long alStack_2e0 [4];
  undefined1 auStack_2c0 [8];
  undefined1 *local_2b8;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [48];
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong local_180;
  undefined *local_178 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined1 local_70;
  
  puVar2 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar28 = auStack_2c0 + -extraout_x8;
  puVar2 = &DAT_100a79890;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar28 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar23 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar13 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar26 = lVar14 - extraout_x12;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar25 + 0x40));
  lVar29 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar6 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 == 0) {
    FUN_100401b14();
    FUN_1003fb4bc(FUN_1001546bc,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000002d,
                  0x8000000100894060,0x53,0);
    return 0;
  }
  lVar22 = *(long *)(param_1 + 0x10);
  lVar20 = lVar22;
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_2b8 = puVar28;
  local_2b0 = lVar26;
  local_2a8 = lVar23;
  local_2a0 = lVar3;
  if (lVar22 != 0) {
    local_178[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fcb0(0,lVar22,0);
    puVar17 = (undefined8 *)(param_1 + 0x28);
    puVar2 = local_178[0];
    local_298 = lVar22;
    do {
      uVar21 = puVar17[-1];
      uVar27 = *puVar17;
      _swift_bridgeObjectRetain(uVar27);
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar29,uVar21,uVar27);
      _swift_bridgeObjectRelease(uVar27);
      uVar7 = *(ulong *)(puVar2 + 0x10);
      local_178[0] = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar7) {
        FUN_10006fcb0(1 < *(ulong *)(puVar2 + 0x18),uVar7 + 1,1);
      }
      puVar2 = local_178[0];
      *(ulong *)(local_178[0] + 0x10) = uVar7 + 1;
      (**(code **)(lVar25 + 0x20))
                (local_178[0] +
                 *(long *)(lVar25 + 0x48) * uVar7 +
                 ((ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar25 + 0x50) ^ 0xffffffffffffffff)),lVar29,lVar5);
      puVar17 = puVar17 + 2;
      lVar22 = lVar22 + -1;
      lVar20 = local_298;
    } while (lVar22 != 0);
  }
  if (*(long *)(puVar2 + 0x10) != 0) {
    lVar20 = lVar20 + 1;
    puVar17 = (undefined8 *)(param_1 + 0x28);
    do {
      lVar20 = lVar20 + -1;
      if (lVar20 == 0) {
        lVar5 = *(long *)(puVar2 + 0x10);
        lVar3 = 0;
        do {
          lVar23 = _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
          if (lVar5 == lVar3) {
            _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer,
                               local_178,0x21,0);
            __s10Foundation4DateVACycfC(lVar16);
            puVar8 = puVar2;
            FUN_100127398(puVar2,param_2,param_3,lVar16);
            (**(code **)(lVar15 + 8))(lVar16,lVar4);
            _swift_endAccess(local_178);
            if (((ulong)puVar8 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar2);
            }
            else {
              FUN_10007f314(unaff_x20 + lVar23,lVar13,&DAT_100a79890,&DAT_10080e600);
              lVar4 = local_2a0;
              lVar3 = local_2a8;
              lVar5 = lVar13;
              (**(code **)(local_2a8 + 0x30))(lVar13,1,local_2a0);
              if ((int)lVar5 != 1) {
                pcVar18 = *(code **)(lVar3 + 0x20);
                (*pcVar18)(local_2b0,lVar13,lVar4);
                FUN_1001288d4(&local_1c0,param_2,param_3);
                FUN_100401b14(0);
                (*(code *)PTR____chkstk_darwin_100995498)(s___pathLength__10088d850 + 0x20);
                *(undefined **)(lVar29 + -0x20) = puVar2;
                *(undefined8 *)(lVar29 + -0x18) = param_2;
                *(undefined8 *)(lVar29 + -0x10) = param_3;
                FUN_1003fb48c(FUN_10016bc2c,lVar29 + -0x30,extraout_x13_00 + 0x77,
                              extraout_x8_03 | 0x8000000000000000,0xd00000000000002d,
                              extraout_x12_00 | 0x8000000000000000,0x60,0);
                _swift_bridgeObjectRelease(puVar2);
                local_1c8 = 0;
                uStack_b0 = uStack_1b8;
                local_b8 = local_1c0;
                uStack_a0 = uStack_1a8;
                uStack_a8 = uStack_1b0;
                uStack_90 = uStack_198;
                local_98 = local_1a0;
                uStack_80 = uStack_188;
                uStack_88 = uStack_190;
                local_70 = 0;
                local_78 = local_180 & 0xcfffffffffffffff;
                FUN_100128ac0(&local_1c0,local_178);
                FUN_100193a8c(local_178,&local_b8);
                FUN_100128afc(&local_1c0);
                ppuVar9 = local_178;
                FUN_1001bd040(ppuVar9,0,0);
                lVar3 = 0;
                __s8Dispatch0A13WorkItemFlagsVMa();
                puVar28 = local_2b8;
                pcVar19 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
                puVar10 = local_2b8;
                (*pcVar19)(local_2b8,1,1,lVar3);
                FUN_10060edd8();
                _swift_beginAccess();
                uVar21 = *(undefined8 *)(puVar10 + 8);
                puVar2 = &DAT_100a79cf0;
                FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
                puVar8 = &DAT_100a79cf8;
                FUN_10003f840(&DAT_100a79cf8,&DAT_100a79cf0,&DAT_10080fb50,
                              &TargetProtocolConformanceDescriptor_1008488a0);
                FUN_1006170a4(uVar21,puVar28,FUN_1001548f4,0,puVar2,puVar8);
                _swift_release(ppuVar9);
                FUN_100040bb4(puVar28,&DAT_100a77040,&DAT_10080e910);
                (*pcVar19)(puVar28,1,1,lVar3);
                puVar2 = &DAT_10099f2e0;
                _swift_allocObject(&DAT_10099f2e0,0x18,7);
                _swift_unknownObjectWeakInit(puVar2 + 0x10,unaff_x20);
                lVar4 = local_2a0;
                lVar3 = local_2a8;
                (**(code **)(local_2a8 + 0x10))(lVar14,local_2b0,local_2a0);
                uVar7 = (ulong)*(byte *)(lVar3 + 0x50);
                uVar24 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
                puVar8 = &DAT_10099f980;
                _swift_allocObject(&DAT_10099f980,uVar24 + extraout_x13,uVar7 | 7);
                *(undefined **)(puVar8 + 0x10) = puVar2;
                (*pcVar18)(puVar8 + uVar24,lVar14,lVar4);
                _swift_beginAccess(puVar10,auStack_1f8,0,0);
                uVar27 = *(undefined8 *)(puVar10 + 8);
                _swift_beginAccess(puVar10,auStack_210,0,0);
                uVar1 = puVar10[0x10];
                _swift_retain(puVar2);
                puVar11 = &DAT_100a77058;
                FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
                puVar12 = &DAT_100a77060;
                FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                              &TargetProtocolConformanceDescriptor_1008488bc);
                puVar28 = local_2b8;
                FUN_10060913c(uVar27,local_2b8,uVar1,FUN_10016bca4,puVar8,puVar11,puVar12);
                _swift_release();
                _swift_release(uVar21);
                _swift_release(puVar8);
                FUN_1000914e4(local_178);
                _swift_unknownObjectRelease(lVar6);
                FUN_100128afc(&local_1c0);
                FUN_100040bb4(puVar28,&DAT_100a77040,&DAT_10080e910);
                (**(code **)(local_2a8 + 8))(local_2b0,local_2a0);
                _swift_release(puVar2);
                return 1;
              }
              _swift_bridgeObjectRelease(puVar2);
              FUN_100040bb4(lVar13,&DAT_100a79890,&DAT_10080e600);
            }
            FUN_100401b14(0);
            FUN_1003fb4bc(FUN_10015479c,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000002d,
                          0x8000000100894060,0x5c,0);
            _swift_unknownObjectRelease(lVar6);
            return 0;
          }
          puVar8 = puVar2 + *(long *)(lVar25 + 0x48) * lVar3 +
                            ((ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar25 + 0x50) ^ 0xffffffffffffffff));
          FUN_100128500();
          lVar3 = lVar3 + 1;
        } while (((ulong)puVar8 & 1) != 0);
        break;
      }
      uVar7 = 0x2f;
      __sSS9hasPrefixySbSSF(0x2f,0xe100000000000000,puVar17[-1],*puVar17);
      puVar17 = puVar17 + 2;
    } while ((uVar7 & 1) != 0);
  }
  _swift_bridgeObjectRelease(puVar2);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)(lVar29 + -0x10) = param_1;
  FUN_1003fb4ec(FUN_10016bc24,lVar29 + -0x20,0xd0000000000000a4,0x800000010088d870,
                0xd00000000000002d,0x8000000100894060,0x58,0);
  _swift_unknownObjectRelease(lVar6);
  return 0;
}


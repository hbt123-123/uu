// rea decompile_all
// name: FUN_1001d47ac
// address: 0x1001d47ac
// body: available
// range: 0x1001d47ac-0x1001d581b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001d47ac(uint param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,code *param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  code *param_14,undefined8 param_15)

{
  char *pcVar1;
  code cVar2;
  code cVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  void *aBlock;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte bVar17;
  long **pplVar18;
  undefined8 uVar19;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong extraout_x12;
  long lVar26;
  long unaff_x20;
  ulong uVar27;
  undefined4 uVar28;
  ulong uVar29;
  undefined8 auStack_200 [2];
  undefined8 auStack_1f0 [2];
  ulong auStack_1e0 [2];
  uint uStack_1d0;
  undefined1 auStack_1cc [4];
  long lStack_1c8;
  undefined8 local_1c0;
  ulong local_1b8;
  char *local_1b0;
  char *local_1a8;
  long local_1a0;
  undefined *local_198;
  undefined *local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  ulong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_110 [16];
  uint local_100;
  ulong local_f8;
  ulong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined *local_a0;
  long *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_168 = *(long *)(lVar6 + -8);
  local_160 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_168 + 0x40));
  lVar20 = (long)&local_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_170 = lVar20;
  __s8Dispatch0A3QoSVMa();
  local_180 = *(long *)(lVar6 + -8);
  local_178 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_180 + 0x40));
  lVar20 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  local_188 = lVar20;
  FUN_100401b14();
  lStack_c0 = param_9;
  pcVar9 = FUN_1001e455c;
  local_190 = (undefined *)param_2;
  local_158 = param_3;
  local_150 = param_6;
  local_148 = param_4;
  local_140 = param_7;
  local_138 = param_5;
  local_100 = param_1;
  local_f8 = param_2;
  uStack_f0 = param_3;
  local_e8 = param_4;
  uStack_e0 = param_5;
  local_d8 = param_6;
  uStack_d0 = param_7;
  local_c8 = param_8;
  FUN_1003fb48c(FUN_1001e455c,auStack_110,0xd000000000000095,0x8000000100889250,0xd00000000000004c,
                0x800000010089f120,0x161,0);
  FUN_1004061c4();
  if (((ulong)pcVar9 & 1) == 0) {
    local_198 = (undefined *)uVar7;
    if (DAT_100a73b60 != -1) {
      pcVar9 = (code *)&DAT_100a73b60;
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar6 = DAT_100b360a8;
    lVar21 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar21 == 0) ||
       (pcVar9 = *(code **)(lVar21 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession
                           ), pcVar9 == (code *)0x0)) {
LAB_1001d4a54:
      FUN_1003db8c4();
      (**(code **)(*(long *)pcVar9 + 0x108))(&local_98);
      _swift_release();
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0xa0))();
        _swift_release(local_98);
        if (((ulong)pcVar9 & 1) != 0) {
LAB_1001d4a98:
          if (param_9 == 0) {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(uint *)(lVar20 + -0x10) = param_1;
            FUN_1003fb4bc(FUN_1001e459c,lVar20 + -0x20,0xd000000000000095,0x8000000100889250,
                          0xd00000000000004c,0x800000010089f120,0x17a,0);
            pcVar1 = s__10089f190;
            uVar8 = 0x3ec;
            uVar7 = 0x1000000000000036;
            uVar19 = 2;
            goto LAB_1001d4bd8;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0x28) +
                           _TtC14UURemoteServer15StreamerManager::dispatcher);
          local_1a8 = s___Manager___suspend_10089f120;
          if ((lVar6 == 0) ||
             (lVar6 = *(long *)(lVar6 + _TtC14UURemoteServer18StreamerDispatcher::
                                        currentConnectSession), lVar6 == 0)) {
            lVar21 = 0;
          }
          else {
            lVar21 = lVar6;
            local_1a0 = lVar6;
            FUN_1000c7b64();
            lVar26 = *(long *)(lVar21 + 0x40);
            bVar17 = *(byte *)(lVar21 + 0x49);
            _swift_release(lVar21);
            lVar21 = local_1a0;
            if (((bVar17 & 1) == 0) && (lVar26 == 1)) {
              lVar21 = lVar6;
              FUN_1000c7b64();
              lVar26 = *(long *)(lVar21 + 0x40);
              bVar17 = *(byte *)(lVar21 + 0x48);
              bVar4 = *(byte *)(lVar21 + 0x49);
              _swift_release();
              lVar21 = local_1a0;
              local_1b8 = CONCAT44(local_1b8._4_4_,(uint)bVar4);
              if ((bVar4 & 1) == 0) {
                if ((bVar17 & 1) == 0) {
                  local_1c0 = 1;
                }
                else {
                  local_1c0 = *(undefined8 *)(&DAT_1008127b8 + lVar26 * 8);
                }
              }
              else {
                local_1c0 = 0;
              }
              uVar7 = *(undefined8 *)
                       (*(long *)(lVar6 + _TtC14UURemoteServer22StreamerConnectSession::
                                          ___lazy_storage___appDataHandler) + 0x50);
              uVar8 = *(undefined8 *)
                       (*(long *)(lVar6 + _TtC14UURemoteServer22StreamerConnectSession::
                                          ___lazy_storage___appDataHandler) + 0x58);
              _swift_bridgeObjectRetain(uVar8);
              uVar27 = 7;
              FUN_10000b50c(7,local_1c0,local_1b8 & 0xffffffff,uVar7,uVar8);
              _swift_bridgeObjectRelease(uVar8);
              if ((uVar27 & 1) == 0) {
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(uint *)(lVar20 + -0x10) = param_1;
                *(long *)(lVar20 + -8) = lVar21;
                FUN_1003fb4bc(FUN_1001e4730,lVar20 + -0x20,0xd000000000000095,0x8000000100889250,
                              0xd00000000000004c,0x800000010089f120,0x182,0);
                (*param_14)(0x708,0x1000000000000036,0x800000010089f170,2);
                return;
              }
            }
          }
          uVar7 = 0x796669726576;
          if ((param_8 == (code *)0x796669726576) && (param_9 == -0x1a00000000000000)) {
LAB_1001d4dc4:
            bVar17 = (byte)param_9;
            uVar27 = 0;
            FUN_1000b35b4();
            param_8 = (code *)0x0;
            if ((uVar27 & 1) != 0) {
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(uint *)(lVar20 + -0x10) = param_1;
              FUN_1003fb48c(FUN_1001e4728,lVar20 + -0x20,0xd000000000000095,0x8000000100889250,
                            0xd00000000000004c,(ulong)local_1a8 | 0x8000000000000000,0x189,0);
              uVar8 = 0x6c5f656369766564;
              uVar19 = 0xed000064656b636f;
              uVar7 = 0x191;
              goto LAB_1001d4e74;
            }
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            bVar17 = (byte)param_9;
            if (((ulong)param_8 & 1) != 0) goto LAB_1001d4dc4;
          }
          local_1b0 = "]: Process Exit & Stop Start";
          if (param_1 == 0) {
            if (local_158 != 0) {
              puVar10 = local_190;
              uVar27 = local_158;
              FUN_1001e0038();
              lVar6 = _TtC14UURemoteServer15TerminalManager::sessions;
              if (((ulong)puVar10 & 1) != 0) {
                local_1a0 = lVar21;
                _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,
                                   auStack_b8,0,0);
                pcVar9 = *(code **)(unaff_x20 + lVar6);
                FUN_100004bb4(&DAT_100a7d4e8,&DAT_100812788);
                param_8 = pcVar9;
                __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
                lVar6 = 0;
                uVar24 = 1L << ((ulong)(byte)pcVar9[0x20] & 0x3f);
                uVar29 = 0xffffffffffffffff;
                if ((long)uVar24 < 0x40) {
                  uVar29 = ~(-1L << (uVar24 & 0x3f));
                }
                uVar29 = uVar29 & *(ulong *)(pcVar9 + 0x40);
                if (uVar29 == 0) goto LAB_1001d4f84;
                do {
                  uVar22 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
                  uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                  uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                  uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10
                  ;
                  uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
                  uVar29 = uVar29 - 1 & uVar29;
                  while( true ) {
                    uVar22 = LZCOUNT(uVar22);
                    uVar23 = uVar22 | lVar6 << 6;
                    uVar28 = *(undefined4 *)(*(long *)(pcVar9 + 0x30) + uVar23 * 4);
                    puVar15 = (undefined8 *)
                              (*(long *)(*(long *)(pcVar9 + 0x38) + uVar23 * 8) +
                              _TtC14UURemoteServer15TerminalSession::name);
                    uVar8 = *puVar15;
                    uVar19 = puVar15[1];
                    uVar25 = (uVar22 & 0xffffffffffffffc0 | lVar6 << 6) >> 3;
                    *(ulong *)(param_8 + uVar25 + 0x40) =
                         *(ulong *)(param_8 + uVar25 + 0x40) | 1L << (uVar22 & 0x3f);
                    *(undefined4 *)(*(long *)(param_8 + 0x30) + uVar23 * 4) = uVar28;
                    puVar15 = (undefined8 *)(*(long *)(param_8 + 0x38) + uVar23 * 0x10);
                    *puVar15 = uVar8;
                    puVar15[1] = uVar19;
                    if (SCARRY8(*(long *)(param_8 + 0x10),1)) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d581c);
                      (*pcVar9)();
                    }
                    *(long *)(param_8 + 0x10) = *(long *)(param_8 + 0x10) + 1;
                    _swift_bridgeObjectRetain();
                    if (uVar29 != 0) break;
LAB_1001d4f84:
                    do {
                      lVar21 = lVar6 + 1;
                      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
                        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d5818);
                        (*pcVar9)();
                      }
                      if ((long)(uVar24 + 0x3f >> 6) <= lVar21) {
                        uVar29 = uVar27;
                        FUN_1001e063c(uVar27,uVar7,0,param_8);
                        _swift_release();
                        if ((uVar29 & 1) != 0) {
                          (*(code *)PTR____chkstk_darwin_100995498)();
                          *(undefined1 *)(lVar20 + -0x20) = 1;
                          *(ulong *)(lVar20 + -0x18) = uVar27;
                          *(undefined8 *)(lVar20 + -0x10) = uVar7;
                          FUN_1003fb4bc(FUN_1001e471c,lVar20 + -0x30,0xd000000000000095,
                                        (ulong)local_1b0 | 0x8000000000000000,0xd00000000000004c,
                                        (ulong)local_1a8 | 0x8000000000000000,0x19a,0);
                          _swift_bridgeObjectRelease(uVar7);
                          (*param_14)(0x199,0xd000000000000015,0x800000010089ea90,1);
                          return;
                        }
                        goto LAB_1001d524c;
                      }
                      uVar29 = *(ulong *)(pcVar9 + 0x40 + lVar21 * 8);
                      lVar6 = lVar6 + 1;
                    } while (uVar29 == 0);
                    uVar22 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1
                    ;
                    uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2
                    ;
                    uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                    uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar22 & 0xffff0000ffff) << 0x10;
                    uVar22 = uVar22 >> 0x20 | uVar22 << 0x20;
                    uVar29 = uVar29 - 1 & uVar29;
                    lVar6 = lVar21;
                  }
                } while( true );
              }
              _swift_bridgeObjectRelease(uVar7);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(undefined4 *)(lVar20 + -0x10) = 0;
              FUN_1003fb4bc(FUN_1001e4714,lVar20 + -0x20,0xd000000000000095,
                            (ulong)local_1b0 | 0x8000000000000000,0xd00000000000004c,
                            (ulong)local_1a8 | 0x8000000000000000,0x194,0);
              uVar8 = 0xd000000000000014;
              uVar19 = 0x800000010089f1b0;
              uVar7 = 400;
LAB_1001d4e74:
              (*param_14)(uVar7,uVar8,uVar19,1);
              return;
            }
            uVar27 = 0;
            uVar7 = 0;
            local_1a0 = lVar21;
LAB_1001d524c:
            FUN_1001e4a98();
            (*(code *)PTR____chkstk_darwin_100995498)();
            lVar6 = lVar20 + -0x20;
            *(int *)(lVar20 + -0x10) = (int)param_8;
            pcVar9 = FUN_1001e470c;
            FUN_1003fb48c(FUN_1001e470c,lVar6,0xd000000000000095,
                          (ulong)local_1b0 | 0x8000000000000000,0xd00000000000004c,
                          (ulong)local_1a8 | 0x8000000000000000,0x1a6,0);
            bVar17 = (byte)lVar6;
          }
          else {
            uVar27 = 0;
            uVar7 = 0;
            pcVar9 = param_8;
            param_8 = (code *)(ulong)param_1;
            local_1a0 = lVar21;
          }
          local_158 = param_10;
          FUN_1001e35cc();
          lVar6 = _TtC14UURemoteServer15TerminalManager::sessions;
          pplVar18 = &local_98;
          _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer15TerminalManager::sessions,pplVar18,
                             0x20,0);
          lVar6 = *(long *)(unaff_x20 + lVar6);
          if ((*(long *)(lVar6 + 0x10) != 0) &&
             (pcVar11 = param_8, thunk_FUN_1001a2c34(), ((ulong)pplVar18 & 1) != 0)) {
            uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + (long)pcVar11 * 8);
            local_1b8 = uVar8;
            _swift_endAccess(&local_98);
            _swift_retain(uVar8);
            _swift_bridgeObjectRelease(uVar7);
            (*(code *)PTR____chkstk_darwin_100995498)();
            uVar28 = SUB84(param_8,0);
            *(undefined4 *)(lVar20 + -0x10) = uVar28;
            FUN_1003fb48c(FUN_1001e45a4,lVar20 + -0x20,0xd000000000000095,
                          (ulong)local_1b0 | 0x8000000000000000,0xd00000000000004c,
                          (ulong)local_1a8 | 0x8000000000000000,0x1ac,0);
            puVar10 = &DAT_1009a3ab0;
            puVar12 = puVar10;
            _swift_allocObject(&DAT_1009a3ab0,0x18,7);
            local_198 = puVar12;
            _swift_unknownObjectWeakInit(puVar12 + 0x10,unaff_x20);
            puVar13 = &DAT_1009a3ec0;
            _swift_allocObject(&DAT_1009a3ec0,0x30,7);
            *(undefined **)(puVar13 + 0x10) = puVar12;
            *(undefined4 *)(puVar13 + 0x18) = uVar28;
            *(undefined8 *)(puVar13 + 0x20) = param_12;
            *(undefined8 *)(puVar13 + 0x28) = param_13;
            _swift_allocObject(&DAT_1009a3ab0,0x18,7);
            local_190 = puVar10;
            _swift_unknownObjectWeakInit(puVar10 + 0x10,unaff_x20);
            puVar12 = &DAT_1009a3ee8;
            _swift_allocObject(&DAT_1009a3ee8,0x79,7);
            uVar8 = local_140;
            uVar7 = local_150;
            uVar29 = local_158;
            uVar27 = local_1b8;
            *(undefined **)(puVar12 + 0x10) = puVar10;
            *(undefined4 *)(puVar12 + 0x18) = uVar28;
            *(code **)(puVar12 + 0x20) = param_14;
            *(undefined8 *)(puVar12 + 0x28) = param_15;
            *(undefined8 *)(puVar12 + 0x30) = local_148;
            *(undefined8 *)(puVar12 + 0x38) = local_138;
            *(undefined8 *)(puVar12 + 0x40) = local_150;
            *(undefined8 *)(puVar12 + 0x48) = local_140;
            *(ulong *)(puVar12 + 0x50) = local_158;
            *(undefined8 *)(puVar12 + 0x58) = param_11;
            *(undefined8 *)(puVar12 + 0x60) = param_12;
            *(undefined8 *)(puVar12 + 0x68) = param_13;
            *(code **)(puVar12 + 0x70) = pcVar9;
            puVar12[0x78] = bVar17 & 1;
            puVar10 = &DAT_1009a3c40;
            _swift_allocObject(&DAT_1009a3c40,0x18,7);
            _swift_weakInit(puVar10 + 0x10,uVar27);
            puVar14 = &DAT_1009a3f10;
            _swift_allocObject(&DAT_1009a3f10,0x58,7);
            *(undefined **)(puVar14 + 0x10) = puVar10;
            *(code **)(puVar14 + 0x18) = FUN_1001e464c;
            *(undefined **)(puVar14 + 0x20) = puVar12;
            *(undefined8 *)(puVar14 + 0x28) = uVar7;
            *(undefined8 *)(puVar14 + 0x30) = uVar8;
            *(ulong *)(puVar14 + 0x38) = uVar29;
            *(undefined8 *)(puVar14 + 0x40) = param_11;
            *(code **)(puVar14 + 0x48) = FUN_1001e45d8;
            *(undefined **)(puVar14 + 0x50) = puVar13;
            local_78 = FUN_1001e46d8;
            local_98 = (long *)PTR___NSConcreteStackBlock_100995490;
            local_90 = 0x42000000;
            local_88 = FUN_1000acdb4;
            puStack_80 = &DAT_1009a3f28;
            local_70 = puVar14;
            aBlock = __Block_copy(&local_98);
            _swift_bridgeObjectRetain(local_138);
            _swift_retain(puVar10);
            _swift_retain(puVar12);
            _swift_retain(puVar13);
            _swift_retain_n(param_13,2);
            _swift_retain_n(param_11,2);
            puVar5 = local_198;
            _swift_retain(local_198);
            _swift_retain(local_190);
            _swift_retain(param_15);
            lVar6 = local_188;
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_188);
            local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
            puVar15 = &DAT_100a75a90;
            FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
            puVar14 = &DAT_100a75a98;
            FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
            puVar16 = &DAT_100a75aa0;
            FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
            lVar21 = local_160;
            lVar20 = local_170;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (local_170,&local_a0,puVar14,puVar16,local_160,puVar15);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar6,lVar20,aBlock);
            __Block_release(aBlock);
            _swift_release(puVar13);
            _swift_release(puVar12);
            (**(code **)(local_168 + 8))(lVar20,lVar21);
            (**(code **)(local_180 + 8))(lVar6,local_178);
            _swift_release(local_1b8);
            puVar13 = local_70;
            _swift_release(puVar5);
            _swift_release(local_190);
            _swift_release(puVar10);
            _swift_release(puVar13);
            return;
          }
          _swift_endAccess(&local_98);
          *(byte *)(lVar20 + -0x10) = bVar17 & 1;
          *(code **)(lVar20 + -0x18) = pcVar9;
          *(undefined8 *)(lVar20 + -0x20) = param_15;
          *(undefined8 *)(lVar20 + -0x30) = param_13;
          *(code **)(lVar20 + -0x28) = param_14;
          *(undefined8 *)(lVar20 + -0x38) = param_12;
          *(undefined8 *)(lVar20 + -0x40) = param_11;
          FUN_1001d64b8(param_8,uVar27,uVar7,local_148,local_138,local_150,local_140,local_158);
          _swift_bridgeObjectRelease(uVar7);
          return;
        }
      }
      uVar7 = 0;
    }
    else {
      FUN_1000c7b64();
      uVar27 = *(ulong *)(pcVar9 + 0x68);
      cVar2 = pcVar9[0x70];
      cVar3 = pcVar9[0x71];
      _swift_release();
      if (((byte)cVar3 & 1) != 0) goto LAB_1001d4a54;
      if (((byte)cVar2 & 1) == 0) {
        if (uVar27 == 2) goto LAB_1001d4cac;
        goto LAB_1001d4a54;
      }
      if (uVar27 < 2) goto LAB_1001d4a54;
LAB_1001d4cac:
      FUN_1003db8c4();
      (**(code **)(*(long *)pcVar9 + 0x108))(&local_98);
      _swift_release();
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0xb8))();
        _swift_release(local_98);
        if (((ulong)pcVar9 & 1) == 0) goto LAB_1001d4cf0;
        goto LAB_1001d4a98;
      }
LAB_1001d4cf0:
      uVar7 = 1;
    }
    (*(code *)PTR____chkstk_darwin_100995498)(uVar7);
    *(uint *)(lVar20 + -0x10) = param_1;
    *(undefined1 *)(lVar20 + -0xc) = extraout_w8;
    FUN_1003fb4bc(FUN_1001e4590,lVar20 + -0x20,0xd000000000000095,extraout_x12 | 0x8000000000000000,
                  0xd00000000000004c,0x800000010089f120,0x173,0);
    pcVar1 = "device_not_controllable";
    uVar7 = 0xd000000000000017;
    uVar8 = 0x193;
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(lVar20 + -0x10) = param_1;
    FUN_1003fb4bc(FUN_1001e473c,lVar20 + -0x20,0xd000000000000095,0x8000000100889250,
                  0xd00000000000004c,0x800000010089f120,0x165,0);
    pcVar1 = 
    "Mac is not logged in. Please log in to your Mac account first before using the terminal.";
    uVar7 = 0xd000000000000058;
    uVar8 = 0x192;
  }
  uVar19 = 1;
LAB_1001d4bd8:
  (*param_14)(uVar8,uVar7,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,uVar19);
  return;
}


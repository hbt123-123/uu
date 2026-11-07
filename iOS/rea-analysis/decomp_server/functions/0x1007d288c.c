// rea decompile_all
// name: FUN_1007d288c
// address: 0x1007d288c
// body: available
// range: 0x1007d288c-0x1007d35ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_1007d288c(ID param_1)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  ID IVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  ID IVar17;
  ID IVar18;
  long lVar19;
  long local_130;
  ID local_128;
  ID local_120;
  undefined *local_c0;
  ulong local_b8;
  ulong uStack_b0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar1 = &DAT_100abc950;
  FUN_1007b4550();
  lVar6 = (long)&local_130 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar2 + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_120 = lVar6 - uVar14;
  local_128 = local_120 - uVar14;
  IVar17 = local_128 - uVar14;
  IVar18 = IVar17 - uVar14;
  lVar19 = IVar18 - uVar14;
  IVar3 = _objc_msgSend(param_1,"timestamp");
  if (IVar3 == 0) {
    (**(code **)(lVar16 + 0x38))(lVar6,1,1,lVar2);
LAB_1007d2a4c:
    FUN_1007c62b0(lVar6,&DAT_100abc950);
    return 0;
  }
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar19);
  pcVar15 = *(code **)(lVar16 + 0x20);
  (*pcVar15)(lVar6,lVar19,lVar2);
  (**(code **)(lVar16 + 0x38))(lVar6,0,1,lVar2);
  lVar4 = lVar6;
  (**(code **)(lVar16 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar4 == 1) goto LAB_1007d2a4c;
  local_130 = lVar19 - uVar14;
  (*pcVar15)(lVar19 - uVar14,lVar6,lVar2);
  pcVar12 = "category";
  uVar14 = _objc_msgSend(param_1,"category");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if ((uVar14 == 0x70747468) && (pcVar12 == (char *)0xe400000000000000)) {
    _swift_bridgeObjectRelease(0xe400000000000000);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar14,pcVar12,0x70747468,0xe400000000000000,0);
    _swift_bridgeObjectRelease(pcVar12);
    if ((uVar14 & 1) == 0) {
      pcVar12 = "type";
      uVar14 = _objc_msgSend(param_1,"type");
      lVar6 = local_130;
      if ((uVar14 == 0) ||
         (__sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(),
         pcVar12 == (char *)0x0)) {
LAB_1007d2b68:
        pcVar12 = "category";
        uVar14 = _objc_msgSend(param_1,"category");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if ((uVar14 == 0x6863756f74) && (pcVar12 == (char *)0xe500000000000000)) {
          _swift_bridgeObjectRelease(0xe500000000000000);
LAB_1007d2c04:
          lVar6 = local_130;
          (**(code **)(lVar16 + 0x10))(IVar18,local_130,lVar2);
          pcVar12 = "message";
          IVar3 = _objc_msgSend(param_1,"message");
          if (IVar3 == 0) {
            IVar3 = 0;
            pcVar12 = (char *)0x0;
          }
          else {
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          }
          uVar5 = 0;
          FUN_1007b5fec(0);
          _objc_allocWithZone();
          FUN_1007b605c(IVar18,0x7061742e6975,0xe600000000000000,IVar3,pcVar12,0,0,uVar5);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar14,pcVar12,0x6863756f74,0xe500000000000000,0);
          _swift_bridgeObjectRelease(pcVar12);
          lVar6 = local_130;
          if ((uVar14 & 1) != 0) goto LAB_1007d2c04;
          pcVar12 = "type";
          uVar14 = _objc_msgSend(param_1,"type");
          if ((uVar14 != 0) &&
             (__sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(),
             pcVar12 != (char *)0x0)) {
            if ((uVar14 == 0x697463656e6e6f63) && (pcVar12 == (char *)0xec00000079746976)) {
              _swift_bridgeObjectRelease(0xec00000079746976);
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar14,pcVar12,0x697463656e6e6f63,0xec00000079746976,0);
              _swift_bridgeObjectRelease(pcVar12);
              if ((uVar14 & 1) == 0) goto LAB_1007d2ffc;
            }
            pcVar12 = "category";
            puVar7 = (undefined1 *)_objc_msgSend(param_1,"category");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            if ((puVar7 == &DAT_d000000000000013) && (pcVar12 == (char *)0x80000001008dbca0)) {
              _swift_bridgeObjectRelease();
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (puVar7,pcVar12,&DAT_d000000000000013,0x80000001008dbca0,0);
              _swift_bridgeObjectRelease(pcVar12);
              lVar6 = local_130;
              if (((ulong)puVar7 & 1) == 0) goto LAB_1007d2ffc;
            }
            lVar6 = local_130;
            IVar18 = _objc_msgSend(param_1,"data");
            puVar1 = PTR___sypN_100995e88;
            if (IVar18 == 0) {
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
            }
            else {
              __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                        (IVar18,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,
                         PTR___sSSSHsWP_100995808);
              if (*(long *)(IVar18 + 0x10) == 0) {
                uStack_88 = 0;
                local_90 = 0;
                local_78 = 0;
                uStack_80 = 0;
                _swift_bridgeObjectRelease(IVar18);
              }
              else {
                _swift_bridgeObjectRetain(IVar18);
                lVar19 = 0x697463656e6e6f63;
                uVar14 = 0;
                FUN_1001a2c70(0x697463656e6e6f63);
                if ((uVar14 & 1) == 0) {
                  uStack_88 = 0;
                  local_90 = 0;
                  local_78 = 0;
                  uStack_80 = 0;
                  _swift_bridgeObjectRelease_n(IVar18,2);
                }
                else {
                  FUN_10003e8bc(*(long *)(IVar18 + 0x38) + lVar19 * 0x20,&local_90);
                  _swift_bridgeObjectRelease_n(IVar18,2);
                  puVar10 = PTR___sSSN_1009957f8;
                  if (local_78 != 0) {
                    puVar9 = &local_b8;
                    _swift_dynamicCast(puVar9,&local_90,puVar1 + 8,PTR___sSSN_1009957f8,6);
                    lVar19 = local_130;
                    if (((ulong)puVar9 & 1) != 0) {
                      uVar14 = local_b8 & 0xffffffffffff;
                      if ((uStack_b0 & 0x2000000000000000) != 0) {
                        uVar14 = uStack_b0 >> 0x38 & 0xf;
                      }
                      if (uVar14 == 0) {
                        (**(code **)(lVar16 + 8))(local_130,lVar2);
                        _swift_bridgeObjectRelease(uStack_b0);
                        return 0;
                      }
                      (**(code **)(lVar16 + 0x10))(IVar17,local_130,lVar2);
                      puVar1 = &DAT_100abc770;
                      FUN_1007b4550();
                      _swift_initStackObject();
                      *(undefined8 *)(puVar1 + 0x20) = 0x6574617473;
                      *(undefined8 *)(puVar1 + 0x18) = 2;
                      *(undefined8 *)(puVar1 + 0x10) = 1;
                      *(undefined **)(puVar1 + 0x48) = puVar10;
                      *(undefined8 *)(puVar1 + 0x28) = 0xe500000000000000;
                      *(ulong *)(puVar1 + 0x30) = local_b8;
                      *(ulong *)(puVar1 + 0x38) = uStack_b0;
                      _swift_bridgeObjectRetain(uStack_b0);
                      puVar8 = puVar1;
                      FUN_1007c7d18(puVar1);
                      _swift_setDeallocating(puVar1);
                      uVar5 = *(undefined8 *)(puVar1 + 0x10);
                      puVar10 = &DAT_100abc778;
                      FUN_1007b4550(&DAT_100abc778);
                      _swift_arrayDestroy(puVar1 + 0x20,uVar5,puVar10);
                      FUN_1007b5fec(0);
                      _objc_allocWithZone();
                      FUN_1007b605c(IVar17,&DAT_d000000000000013,0x80000001008dbca0,0,0,0,puVar8);
                      _swift_bridgeObjectRelease(puVar8);
                      (**(code **)(lVar16 + 8))(lVar19,lVar2);
                      _swift_bridgeObjectRelease(uStack_b0);
                      return IVar17;
                    }
                    goto LAB_1007d3348;
                  }
                }
              }
            }
            FUN_1007c62b0(&local_90,&DAT_100abce10);
LAB_1007d3348:
            (**(code **)(lVar16 + 8))(lVar6,lVar2);
            return 0;
          }
LAB_1007d2ffc:
          IVar18 = _objc_msgSend(param_1,"data");
          puVar1 = PTR___sypN_100995e88;
          if (IVar18 == 0) {
            uStack_88 = 0;
            local_90 = 0;
            local_78 = 0;
            uStack_80 = 0;
LAB_1007d318c:
            FUN_1007c62b0(&local_90,&DAT_100abce10);
          }
          else {
            __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                      (IVar18,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808
                      );
            if (*(long *)(IVar18 + 0x10) == 0) {
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
            }
            else {
              _swift_bridgeObjectRetain(IVar18);
              lVar19 = 0x6e6f69746361;
              uVar14 = 0;
              FUN_1001a2c70(0x6e6f69746361);
              if ((uVar14 & 1) == 0) {
                uStack_88 = 0;
                local_90 = 0;
                local_78 = 0;
                uStack_80 = 0;
              }
              else {
                FUN_10003e8bc(*(long *)(IVar18 + 0x38) + lVar19 * 0x20,&local_90);
              }
              _swift_bridgeObjectRelease(IVar18);
            }
            _swift_bridgeObjectRelease(IVar18);
            if (local_78 == 0) goto LAB_1007d318c;
            puVar9 = &local_b8;
            _swift_dynamicCast(puVar9,&local_90,puVar1 + 8,PTR___sSSN_1009957f8,6);
            if (((ulong)puVar9 & 1) != 0) {
              if (((local_b8 == 0xd000000000000014) && (uStack_b0 == 0x80000001008dbc80)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (local_b8,uStack_b0,0xd000000000000014,0x80000001008dbc80,0),
                 (local_b8 & 1) != 0)) {
                puVar10 = (undefined *)_objc_msgSend(param_1,"data");
                if (puVar10 == (undefined *)0x0) {
                  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
                  FUN_1007c7d18();
                }
                else {
                  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                            (puVar10,PTR___sSSN_1009957f8,puVar1 + 8,PTR___sSSSHsWP_100995808);
                  puVar1 = puVar10;
                  FUN_1007d421c();
                  _swift_bridgeObjectRelease(puVar10);
                }
                local_98 = puVar1;
                if (*(long *)(puVar1 + 0x10) == 0) {
                  uStack_88 = 0;
                  local_90 = 0;
                  local_78 = 0;
                  uStack_80 = 0;
                }
                else {
                  _swift_bridgeObjectRetain(puVar1);
                  lVar19 = 0x64656767756c70;
                  uVar14 = 0;
                  FUN_1001a2c70(0x64656767756c70);
                  if ((uVar14 & 1) == 0) {
                    uStack_88 = 0;
                    local_90 = 0;
                    local_78 = 0;
                    uStack_80 = 0;
                    _swift_bridgeObjectRelease(puVar1);
                  }
                  else {
                    FUN_10003e8bc(*(long *)(puVar1 + 0x38) + lVar19 * 0x20,&local_90);
                    _swift_bridgeObjectRelease(puVar1);
                    if (local_78 != 0) {
                      FUN_10007f3d4(&local_90,&local_b8);
                      puVar10 = puVar1;
                      _swift_isUniquelyReferenced_nonNull_native(puVar1);
                      lVar19 = 0x676e696772616863;
                      uVar14 = 0;
                      local_c0 = puVar1;
                      FUN_1007b853c(0x676e696772616863,0xe800000000000000,puVar10);
                      puVar1 = local_c0;
                      if ((uVar14 & 1) == 0) {
                        FUN_100060330();
                      }
                      else {
                        lVar19 = *(long *)(local_c0 + 0x38) + lVar19 * 0x20;
                        FUN_10003f094(lVar19);
                        FUN_10007f3d4(&local_b8,lVar19);
                      }
                      local_98 = puVar1;
                      _swift_bridgeObjectRelease(0x8000000000000000);
                      goto LAB_1007d348c;
                    }
                  }
                }
                FUN_1007c62b0(&local_90,&DAT_100abce10);
                FUN_1007d3ebc(&local_b8,0x676e696772616863,0xe800000000000000);
                FUN_1007c62b0(&local_b8,&DAT_100abce10);
LAB_1007d348c:
                FUN_1007d3ebc(&local_90,0x64656767756c70,0xe700000000000000);
                FUN_1007c62b0(&local_90,&DAT_100abce10);
                IVar18 = local_128;
                (**(code **)(lVar16 + 0x10))(local_128,lVar6,lVar2);
                puVar1 = local_98;
                FUN_1007b5fec(0);
                _objc_allocWithZone();
                _swift_bridgeObjectRetain(puVar1);
                FUN_1007b605c(IVar18,0x622e656369766564,0xee00797265747461,0,0,0,puVar1);
                _swift_bridgeObjectRelease(puVar1);
                (**(code **)(lVar16 + 8))(lVar6,lVar2);
                _swift_bridgeObjectRelease(puVar1);
                _swift_bridgeObjectRelease(uStack_b0);
                return IVar18;
              }
              _swift_bridgeObjectRelease(uStack_b0);
            }
          }
          local_128 = _objc_msgSend((ID)&objc::class_t::SentryLevelBridge,"breadcrumbLevel:",param_1
                                   );
          if (5 < local_128) {
            local_128 = 0;
          }
          (**(code **)(lVar16 + 0x10))(local_120,lVar6,lVar2);
          pcVar13 = "category";
          IVar3 = _objc_msgSend(param_1,"category");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
          pcVar12 = "message";
          IVar17 = _objc_msgSend(param_1,"message");
          if (IVar17 == 0) {
            IVar17 = 0;
            pcVar12 = (char *)0x0;
          }
          else {
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          }
          IVar11 = _objc_msgSend(param_1,"data");
          if (IVar11 == 0) {
            IVar11 = 0;
          }
          else {
            __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                      (IVar11,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808
                      );
          }
          uVar5 = 0;
          FUN_1007b5fec(0);
          _objc_allocWithZone();
          IVar18 = local_120;
          FUN_1007b605c(local_120,IVar3,pcVar13,IVar17,pcVar12,local_128,IVar11,uVar5);
          _swift_bridgeObjectRelease(pcVar13);
          _swift_bridgeObjectRelease(IVar11);
        }
        _swift_bridgeObjectRelease(pcVar12);
      }
      else {
        if ((uVar14 == 0x697461676976616e) && (pcVar12 == (char *)0xea00000000006e6f)) {
          _swift_bridgeObjectRelease(0xea00000000006e6f);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar14,pcVar12,0x697461676976616e,0xea00000000006e6f,0);
          _swift_bridgeObjectRelease(pcVar12);
          if ((uVar14 & 1) == 0) goto LAB_1007d2b68;
        }
        FUN_1007d48f8(param_1);
        IVar18 = param_1;
      }
      pcVar15 = *(code **)(lVar16 + 8);
      goto LAB_1007d2ca8;
    }
  }
  FUN_1007d3750(param_1);
  pcVar15 = *(code **)(lVar16 + 8);
  lVar6 = local_130;
  IVar18 = param_1;
LAB_1007d2ca8:
  (*pcVar15)(lVar6,lVar2);
  return IVar18;
}


// rea decompile_all
// name: FUN_1007d48f8
// address: 0x1007d48f8
// body: available
// range: 0x1007d48f8-0x1007d5247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1007d48f8(ID param_1)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long local_170 [4];
  long local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar1 = &DAT_100abc950;
  FUN_1007b4550();
  plVar6 = (long *)((long)local_170 -
                   (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar2 + -8);
  uVar10 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = ((long)plVar6 - uVar10) - uVar10;
  lVar13 = lVar12 - uVar10;
  lVar14 = lVar13 - uVar10;
  IVar3 = _objc_msgSend(param_1,"timestamp");
  if (IVar3 == 0) {
    (**(code **)(lVar16 + 0x38))(plVar6,1,1,lVar2);
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar14);
    pcVar15 = *(code **)(lVar16 + 0x20);
    (*pcVar15)(plVar6,lVar14,lVar2);
    (**(code **)(lVar16 + 0x38))(plVar6,0,1,lVar2);
    plVar4 = plVar6;
    (**(code **)(lVar16 + 0x30))(plVar6,1,lVar2);
    if ((int)plVar4 != 1) {
      local_170[2] = (long)plVar6 - uVar10;
      local_170[3] = lVar14 - uVar10;
      (*pcVar15)(lVar14 - uVar10,plVar6,lVar2);
      pcVar9 = "category";
      uVar10 = _objc_msgSend(param_1,"category");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if ((uVar10 == 0x6566696c2e707061) && (pcVar9 == (char *)0xed0000656c637963)) {
        _swift_bridgeObjectRelease(0xed0000656c637963);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar10,pcVar9,0x6566696c2e707061,0xed0000656c637963,0);
        _swift_bridgeObjectRelease(pcVar9);
        if ((uVar10 & 1) == 0) {
          IVar3 = _objc_msgSend(param_1,"data");
          lVar13 = local_170[3];
          puVar1 = PTR___sypN_100995e88;
          if (IVar3 == 0) {
            uStack_88 = 0;
            local_90 = 0;
            local_78 = 0;
            uStack_80 = 0;
LAB_1007d4eb8:
            lVar14 = local_170[2];
            FUN_1007c62b0(&local_90,&DAT_100abce10);
          }
          else {
            __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                      (IVar3,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808)
            ;
            if (*(long *)(IVar3 + 0x10) == 0) {
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
              _swift_bridgeObjectRelease(IVar3);
              goto LAB_1007d4eb8;
            }
            _swift_bridgeObjectRetain(IVar3);
            lVar14 = 0x6e6f697469736f70;
            uVar10 = 0;
            FUN_1001a2c70(0x6e6f697469736f70);
            if ((uVar10 & 1) == 0) {
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
              _swift_bridgeObjectRelease_n(IVar3,2);
              goto LAB_1007d4eb8;
            }
            FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar14 * 0x20,&local_90);
            _swift_bridgeObjectRelease_n(IVar3,2);
            lVar14 = local_170[2];
            if (local_78 == 0) goto LAB_1007d4eb8;
            plVar6 = &local_150;
            _swift_dynamicCast(plVar6,&local_90,puVar1 + 8,PTR___sSSN_1009957f8,6);
            if (((ulong)plVar6 & 1) != 0) {
              local_170[0] = local_150;
              local_170[1] = uStack_148;
              pcVar9 = "category";
              uVar10 = _objc_msgSend(param_1,"category");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              if ((uVar10 == 0xd000000000000012) && (pcVar9 == (char *)0x80000001008dbcc0)) {
                _swift_bridgeObjectRelease();
LAB_1007d5128:
                lVar14 = local_170[3];
                lVar13 = local_170[1];
                (**(code **)(lVar16 + 0x10))(lVar12,local_170[3],lVar2);
                puVar1 = &DAT_100abc770;
                FUN_1007b4550();
                _swift_initStackObject();
                *(undefined8 *)(puVar1 + 0x20) = 0x6e6f697469736f70;
                *(undefined8 *)(puVar1 + 0x18) = 2;
                *(undefined8 *)(puVar1 + 0x10) = 1;
                *(undefined **)(puVar1 + 0x48) = PTR___sSSN_1009957f8;
                *(undefined8 *)(puVar1 + 0x28) = 0xe800000000000000;
                *(long *)(puVar1 + 0x30) = local_170[0];
                *(long *)(puVar1 + 0x38) = lVar13;
                _swift_bridgeObjectRetain(lVar13);
                puVar7 = puVar1;
                FUN_1007c7d18(puVar1);
                _swift_setDeallocating(puVar1);
                uVar11 = *(undefined8 *)(puVar1 + 0x10);
                puVar8 = &DAT_100abc778;
                FUN_1007b4550(&DAT_100abc778);
                _swift_arrayDestroy(puVar1 + 0x20,uVar11,puVar8);
                FUN_1007b5fec(0);
                _objc_allocWithZone();
                FUN_1007b605c(lVar12,0xd000000000000012,0x80000001008dbcc0,0,0,0,puVar7);
                _swift_bridgeObjectRelease(puVar7);
                (**(code **)(lVar16 + 8))(lVar14,lVar2);
                _swift_bridgeObjectRelease(lVar13);
                return lVar12;
              }
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar10,pcVar9,0xd000000000000012,0x80000001008dbcc0,0);
              _swift_bridgeObjectRelease(pcVar9);
              lVar13 = local_170[3];
              if ((uVar10 & 1) != 0) goto LAB_1007d5128;
              _swift_bridgeObjectRelease(local_170[1]);
            }
          }
          IVar3 = _objc_msgSend(param_1,"data");
          if (IVar3 == 0) {
            uStack_88 = 0;
            local_90 = 0;
            local_78 = 0;
            uStack_80 = 0;
          }
          else {
            __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                      (IVar3,PTR___sSSN_1009957f8,puVar1 + 8,PTR___sSSSHsWP_100995808);
            if (*(long *)(IVar3 + 0x10) == 0) {
              uStack_88 = 0;
              local_90 = 0;
              local_78 = 0;
              uStack_80 = 0;
              _swift_bridgeObjectRelease(IVar3);
            }
            else {
              _swift_bridgeObjectRetain(IVar3);
              lVar12 = 0x6e6565726373;
              uVar10 = 0;
              FUN_1001a2c70(0x6e6565726373);
              if ((uVar10 & 1) == 0) {
                uStack_88 = 0;
                local_90 = 0;
                local_78 = 0;
                uStack_80 = 0;
                _swift_bridgeObjectRelease_n(IVar3,2);
              }
              else {
                FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar12 * 0x20,&local_90);
                _swift_bridgeObjectRelease_n(IVar3,2);
                puVar8 = PTR___sSSN_1009957f8;
                if (local_78 != 0) {
                  plVar6 = &local_150;
                  _swift_dynamicCast(plVar6,&local_90,puVar1 + 8,PTR___sSSN_1009957f8,6);
                  if (((ulong)plVar6 & 1) != 0) {
                    (**(code **)(lVar16 + 0x10))(lVar14,lVar13,lVar2);
                    puVar1 = &DAT_100abc770;
                    FUN_1007b4550();
                    _swift_initStackObject();
                    *(undefined8 *)(puVar1 + 0x20) = 0x6f74;
                    *(undefined8 *)(puVar1 + 0x18) = 2;
                    *(undefined8 *)(puVar1 + 0x10) = 1;
                    *(undefined **)(puVar1 + 0x48) = puVar8;
                    *(undefined8 *)(puVar1 + 0x28) = 0xe200000000000000;
                    *(long *)(puVar1 + 0x30) = local_150;
                    *(undefined8 *)(puVar1 + 0x38) = uStack_148;
                    _swift_bridgeObjectRetain_n(uStack_148,2);
                    puVar7 = puVar1;
                    FUN_1007c7d18(puVar1);
                    _swift_setDeallocating(puVar1);
                    uVar11 = *(undefined8 *)(puVar1 + 0x10);
                    puVar8 = &DAT_100abc778;
                    FUN_1007b4550(&DAT_100abc778);
                    _swift_arrayDestroy(puVar1 + 0x20,uVar11,puVar8);
                    uVar11 = 0;
                    FUN_1007b5fec(0);
                    _objc_allocWithZone();
                    FUN_1007b605c(lVar14,0x697461676976616e,0xea00000000006e6f,local_150,uStack_148,
                                  0,puVar7,uVar11);
                    _swift_bridgeObjectRelease(uStack_148);
                    _swift_bridgeObjectRelease(puVar7);
                    (**(code **)(lVar16 + 8))(lVar13,lVar2);
                    _swift_bridgeObjectRelease(uStack_148);
                    return lVar14;
                  }
                  goto LAB_1007d50d4;
                }
              }
            }
          }
          FUN_1007c62b0(&local_90,&DAT_100abce10);
LAB_1007d50d4:
          (**(code **)(lVar16 + 8))(lVar13,lVar2);
          return 0;
        }
      }
      IVar3 = _objc_msgSend(param_1,"data");
      lVar12 = local_170[3];
      puVar1 = PTR___sypN_100995e88;
      if (IVar3 == 0) {
        lStack_138 = 0;
        local_140 = 0;
        uStack_148 = 0;
        local_150 = 0;
      }
      else {
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                  (IVar3,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
        if (*(long *)(IVar3 + 0x10) == 0) {
          lStack_138 = 0;
          local_140 = 0;
          uStack_148 = 0;
          local_150 = 0;
          _swift_bridgeObjectRelease(IVar3);
        }
        else {
          _swift_bridgeObjectRetain(IVar3);
          lVar14 = 0x6574617473;
          uVar10 = 0;
          FUN_1001a2c70(0x6574617473);
          if ((uVar10 & 1) == 0) {
            lStack_138 = 0;
            local_140 = 0;
            uStack_148 = 0;
            local_150 = 0;
            _swift_bridgeObjectRelease_n(IVar3,2);
          }
          else {
            FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar14 * 0x20,&local_150);
            _swift_bridgeObjectRelease_n(IVar3,2);
            if (lStack_138 != 0) {
              FUN_10007f3d4(&local_150,&local_90);
              (**(code **)(lVar16 + 0x10))(lVar13,lVar12,lVar2);
              local_150 = 0;
              uStack_148 = 0xe000000000000000;
              __sSS6appendyySSF(0x2e707061,0xe400000000000000);
              __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                        (&local_90,&local_150,puVar1 + 8,
                         PTR___ss26DefaultStringInterpolationVN_100995bf0,
                         PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
              uVar11 = uStack_148;
              lVar14 = local_150;
              uVar5 = 0;
              FUN_1007b5fec(0);
              _objc_allocWithZone();
              FUN_1007b605c(lVar13,lVar14,uVar11,0,0,0,0,uVar5);
              _swift_bridgeObjectRelease(uVar11);
              FUN_10003f094(&local_90);
              (**(code **)(lVar16 + 8))(lVar12,lVar2);
              return lVar13;
            }
          }
        }
      }
      (**(code **)(lVar16 + 8))(lVar12,lVar2);
      puVar1 = &DAT_100abce10;
      plVar6 = &local_150;
      goto LAB_1007d4e50;
    }
  }
  puVar1 = &DAT_100abc950;
LAB_1007d4e50:
  FUN_1007c62b0(plVar6,puVar1);
  return 0;
}


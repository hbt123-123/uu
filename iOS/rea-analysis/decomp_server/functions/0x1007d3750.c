// rea decompile_all
// name: FUN_1007d3750
// address: 0x1007d3750
// body: available
// range: 0x1007d3750-0x1007d3cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1007d3750(ID param_1)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined1 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  code *pcVar17;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8;
  long local_b0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar1 = &DAT_100abc950;
  FUN_1007b4550();
  uVar6 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = auStack_d0 + -uVar6;
  puVar8 = puVar15 + -uVar6;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  uVar6 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)puVar8 - uVar6;
  lVar14 = lVar7 - uVar6;
  lVar16 = (lVar14 - uVar6) - uVar6;
  lVar11 = lVar16 - uVar6;
  IVar3 = _objc_msgSend(param_1,"timestamp");
  if (IVar3 == 0) {
    (**(code **)(lVar12 + 0x38))(puVar8,1,1,lVar2);
    goto LAB_1007d3bc8;
  }
  local_b0 = lVar14 - uVar6;
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar16);
  pcVar10 = *(code **)(lVar12 + 0x20);
  (*pcVar10)(puVar8,lVar16,lVar2);
  pcVar17 = *(code **)(lVar12 + 0x38);
  (*pcVar17)(puVar8,0,1,lVar2);
  pcVar13 = *(code **)(lVar12 + 0x30);
  puVar4 = puVar8;
  (*pcVar13)(puVar8,1,lVar2);
  if ((int)puVar4 == 1) goto LAB_1007d3bc8;
  local_b8 = pcVar17;
  (*pcVar10)(lVar11,puVar8,lVar2);
  IVar3 = _objc_msgSend(param_1,"data");
  if (IVar3 == 0) {
    uStack_78 = 0;
    local_80 = (undefined *)0x0;
    local_68 = 0;
    uStack_70 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (IVar3,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
    if (*(long *)(IVar3 + 0x10) == 0) {
      uStack_78 = 0;
      local_80 = (undefined *)0x0;
      local_68 = 0;
      uStack_70 = 0;
      _swift_bridgeObjectRelease(IVar3);
    }
    else {
      _swift_bridgeObjectRetain(IVar3);
      lVar16 = 0x6c7275;
      uVar6 = 0;
      FUN_1001a2c70(0x6c7275);
      if ((uVar6 & 1) == 0) {
        uStack_78 = 0;
        local_80 = (undefined *)0x0;
        local_68 = 0;
        uStack_70 = 0;
        _swift_bridgeObjectRelease_n(IVar3,2);
      }
      else {
        FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar16 * 0x20,&local_80);
        _swift_bridgeObjectRelease_n(IVar3,2);
        if (local_68 != 0) {
          puVar5 = &local_90;
          _swift_dynamicCast(puVar5,&local_80,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
          if (((ulong)puVar5 & 1) == 0) goto LAB_1007d3c14;
          local_c8 = local_90;
          IVar3 = _objc_msgSend(param_1,"data");
          if (IVar3 == 0) {
            uStack_78 = 0;
            local_80 = (undefined *)0x0;
            local_68 = 0;
            uStack_70 = 0;
            uVar9 = uStack_88;
            pcVar17 = local_b8;
LAB_1007d3c8c:
            FUN_1007c62b0(&local_80,&DAT_100abce10);
            (*pcVar17)(puVar15,1,1,lVar2);
          }
          else {
            local_c0 = uStack_88;
            __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                      (IVar3,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808)
            ;
            if (*(long *)(IVar3 + 0x10) == 0) {
              uStack_78 = 0;
              local_80 = (undefined *)0x0;
              local_68 = 0;
              uStack_70 = 0;
              _swift_bridgeObjectRelease(IVar3);
              uVar9 = local_c0;
              pcVar17 = local_b8;
              goto LAB_1007d3c8c;
            }
            _swift_bridgeObjectRetain(IVar3);
            lVar16 = 0x5f74736575716572;
            uVar6 = 0xed00007472617473;
            FUN_1001a2c70(0x5f74736575716572);
            pcVar17 = local_b8;
            if ((uVar6 & 1) == 0) {
              uStack_78 = 0;
              local_80 = (undefined *)0x0;
              local_68 = 0;
              uStack_70 = 0;
              _swift_bridgeObjectRelease_n(IVar3,2);
              uVar9 = local_c0;
              goto LAB_1007d3c8c;
            }
            FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar16 * 0x20,&local_80);
            _swift_bridgeObjectRelease_n(IVar3,2);
            uVar9 = local_c0;
            if (local_68 == 0) goto LAB_1007d3c8c;
            puVar8 = puVar15;
            _swift_dynamicCast(puVar15,&local_80,PTR___sypN_100995e88 + 8,lVar2,6);
            (*pcVar17)(puVar15,(uint)puVar8 ^ 1,1,lVar2);
            puVar8 = puVar15;
            (*pcVar13)(puVar15,1,lVar2);
            lVar16 = local_b0;
            if ((int)puVar8 != 1) {
              (*pcVar10)(local_b0,puVar15,lVar2);
              puVar1 = PTR___swiftEmptyDictionarySingleton_100995ea8;
              local_80 = PTR___swiftEmptyDictionarySingleton_100995ea8;
              IVar3 = _objc_msgSend(param_1,"data");
              if (IVar3 != 0) {
                __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                          (IVar3,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,
                           PTR___sSSSHsWP_100995808);
                FUN_1007d2624(IVar3,unaff_x20,&local_80);
                _swift_bridgeObjectRelease(IVar3);
                puVar1 = local_80;
              }
              pcVar10 = *(code **)(lVar12 + 0x10);
              (*pcVar10)(lVar14,lVar16,lVar2);
              (*pcVar10)(lVar7,lVar11,lVar2);
              FUN_1007b71e0(0);
              _objc_allocWithZone();
              _swift_bridgeObjectRetain(puVar1);
              uVar9 = local_c0;
              FUN_1007b721c(lVar14,lVar7,0x656372756f736572,0xed0000707474682e,local_c8,local_c0,
                            puVar1);
              _swift_bridgeObjectRelease(uVar9);
              _swift_bridgeObjectRelease(puVar1);
              pcVar10 = *(code **)(lVar12 + 8);
              (*pcVar10)(lVar16,lVar2);
              (*pcVar10)(lVar11,lVar2);
              _swift_bridgeObjectRelease(puVar1);
              return lVar14;
            }
          }
          (**(code **)(lVar12 + 8))(lVar11,lVar2);
          _swift_bridgeObjectRelease(uVar9);
          puVar8 = puVar15;
LAB_1007d3bc8:
          FUN_1007c62b0(puVar8,&DAT_100abc950);
          return 0;
        }
      }
    }
  }
  FUN_1007c62b0(&local_80,&DAT_100abce10);
LAB_1007d3c14:
  (**(code **)(lVar12 + 8))(lVar11,lVar2);
  return 0;
}


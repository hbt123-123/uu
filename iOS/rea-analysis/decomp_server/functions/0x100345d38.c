// rea decompile_all
// name: FUN_100345d38
// address: 0x100345d38
// body: available
// range: 0x100345d38-0x1003463eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_100345d38(undefined8 param_1,ID param_2,long param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 *puVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long unaff_x20;
  ulong uVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  ID local_88;
  long local_80;
  undefined8 local_78;
  undefined8 *local_70;
  
  puVar2 = (undefined8 *)0x0;
  local_88 = param_2;
  local_80 = param_3;
  local_78 = param_1;
  local_70 = param_4;
  __s10Foundation10URLRequestVMa();
  lVar19 = puVar2[-1];
  uVar17 = (long)&local_c0 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar21 = uVar17 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar20 = *(long *)(lVar4 + -8);
  uVar12 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar21 - uVar12;
  lVar18 = lVar15 - uVar12;
  puVar3 = &DAT_100a82470;
  FUN_100004bb4(&DAT_100a82470,&DAT_100819d70);
  puVar6 = local_70;
  uVar7 = local_78;
  lVar5 = local_80;
  uVar12 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (lVar18 - uVar12) - uVar12;
  lVar14 = lVar13 - uVar12;
  if (param_5 == 0) {
    local_a0 = lVar15;
    local_98 = lVar18;
    local_90 = lVar20;
    if ((ulong)local_70 >> 0x3c < 0xf) {
      uVar1 = (uint)((ulong)local_70 >> 0x20);
      uVar11 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar11 == 0) {
          if (((ulong)local_70 & 0xff000000000000) == 0) goto LAB_100345eb8;
        }
        else {
          if ((long)(int)local_80 == local_80 >> 0x20) goto LAB_100345ed4;
LAB_100346058:
          FUN_10010bd10(local_80,local_70);
        }
        uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
        lVar15 = *(long *)(unaff_x20 + 0x30);
        local_b8 = lVar13;
        local_b0 = lVar18 - uVar12;
        local_a8 = lVar14 - uVar12;
        FUN_10003f030(unaff_x20 + 0x10,uVar7);
        lVar21 = lVar5;
        puVar9 = puVar6;
        (**(code **)(lVar15 + 8))(lVar5,puVar6,uVar7,lVar15);
        FUN_100006cc8(lVar5,puVar6);
        lVar15 = lVar5;
        puVar2 = puVar9;
        if (unaff_x21 == 0) {
          local_c0 = param_5;
          FUN_10007f314(unaff_x20 + _TtC9Alamofire24StringResponseSerializer::encoding,local_a8,
                        &DAT_100a82470,&DAT_100819d70);
          if (local_88 != 0) {
            pcVar10 = "textEncodingName";
            IVar8 = _objc_msgSend(local_88,"textEncodingName");
            if (IVar8 != 0) {
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              lVar5 = local_a8;
              FUN_10007f314(local_a8,lVar14,&DAT_100a82470,&DAT_100819d70);
              lVar15 = lVar14;
              (**(code **)(local_90 + 0x30))(lVar14,1,lVar4);
              if ((int)lVar15 == 1) {
                FUN_100040bb4(lVar14,&DAT_100a82470,&DAT_100819d70);
                lVar15 = local_b8;
                FUN_100311e24(local_b8,IVar8,pcVar10);
                FUN_100040bb4(lVar5,&DAT_100a82470,&DAT_100819d70);
                FUN_1002796b0(lVar15,lVar5);
              }
              else {
                _swift_bridgeObjectRelease(pcVar10);
                FUN_100040bb4(lVar14,&DAT_100a82470,&DAT_100819d70);
              }
            }
          }
          lVar5 = local_b0;
          FUN_10007f314(local_a8,local_b0,&DAT_100a82470,&DAT_100819d70);
          lVar14 = local_90;
          pcVar16 = *(code **)(local_90 + 0x30);
          lVar15 = lVar5;
          (*pcVar16)(lVar5,1,lVar4);
          lVar13 = local_98;
          if ((int)lVar15 == 1) {
            __sSS10FoundationE8EncodingV9isoLatin1ACvgZ(local_98);
            lVar15 = lVar5;
            (*pcVar16)(lVar5,1,lVar4);
            lVar18 = local_a0;
            if ((int)lVar15 != 1) {
              FUN_100040bb4(lVar5,&DAT_100a82470,&DAT_100819d70);
            }
          }
          else {
            (**(code **)(lVar14 + 0x20))(local_98,lVar5,lVar4);
            lVar18 = local_a0;
          }
          pcVar16 = *(code **)(lVar14 + 0x10);
          (*pcVar16)(lVar18,lVar13,lVar4);
          lVar15 = lVar21;
          __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(lVar21,puVar9,lVar18);
          if (puVar2 != (undefined8 *)0x0) {
            FUN_100006cdc(lVar21,puVar9);
            (**(code **)(lVar14 + 8))(lVar13,lVar4);
            FUN_100040bb4(local_a8,&DAT_100a82470,&DAT_100819d70);
            goto LAB_10034602c;
          }
          lVar15 = 0;
          FUN_100277ad0(0);
          puVar2 = &DAT_100a824a8;
          FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70)
          ;
          _swift_allocError(lVar15,puVar2,0,0);
          (*pcVar16)(puVar2,lVar13,lVar4);
          uVar7 = 0;
          FUN_100278368(0);
          _swift_storeEnumTagMultiPayload(puVar2,uVar7,1);
          _swift_storeEnumTagMultiPayload(puVar2,lVar15,10);
          _swift_willThrow();
          FUN_100006cdc(lVar21,puVar9);
          (**(code **)(lVar14 + 8))(lVar13,lVar4);
          FUN_100040bb4(local_a8,&DAT_100a82470,&DAT_100819d70);
          param_5 = local_c0;
        }
        goto LAB_100346028;
      }
      if (uVar11 == 2) {
        if (*(long *)(local_80 + 0x10) != *(long *)(local_80 + 0x18)) goto LAB_100346058;
      }
      else {
LAB_100345eb8:
        FUN_100006cc8(local_80,local_70);
      }
    }
LAB_100345ed4:
    FUN_10007f314(uVar7,lVar21,&DAT_100a82c30,&DAT_1008171f0);
    lVar5 = lVar21;
    (**(code **)(lVar19 + 0x30))(lVar21,1,puVar2);
    if ((int)lVar5 != 1) {
      uVar12 = uVar17;
      (**(code **)(lVar19 + 0x20))(uVar17,lVar21,puVar2);
      __s10Foundation10URLRequestV10httpMethodSSSgvg();
      (**(code **)(lVar19 + 8))(uVar17,puVar2);
      if (lVar21 != 0) {
        FUN_100153074(uVar12,lVar21,
                      *(undefined8 *)
                       (unaff_x20 + _TtC9Alamofire24StringResponseSerializer::emptyRequestMethods));
        _swift_bridgeObjectRelease(lVar21);
        if ((uVar12 & 1) != 0) {
          lVar15 = 0;
          puVar2 = (undefined8 *)0xe000000000000000;
          goto LAB_10034602c;
        }
      }
    }
    if (local_88 != 0) {
      uVar12 = _objc_msgSend(local_88,"statusCode");
      FUN_100344174(uVar12,unaff_x20);
      if ((uVar12 & 1) != 0) {
        lVar15 = 0;
        puVar2 = (undefined8 *)0xe000000000000000;
        goto LAB_10034602c;
      }
    }
    lVar15 = 0;
    FUN_100277ad0(0);
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar15,puVar6,0,0);
    uVar7 = 0;
    FUN_100278368(0);
    _swift_storeEnumTagMultiPayload(puVar6,uVar7,6);
    _swift_storeEnumTagMultiPayload(puVar6,lVar15,10);
    _swift_willThrow();
  }
  else {
    _swift_willThrow();
  }
LAB_100346028:
  _swift_errorRetain(param_5);
LAB_10034602c:
  auVar22._8_8_ = puVar2;
  auVar22._0_8_ = lVar15;
  return auVar22;
}


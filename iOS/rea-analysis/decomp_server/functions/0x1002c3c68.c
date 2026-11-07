// rea decompile_all
// name: FUN_1002c3c68
// address: 0x1002c3c68
// body: available
// range: 0x1002c3c68-0x1002c42eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c3c68(undefined8 param_1,long param_2,long param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x21;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [2];
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_90;
  long local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  puVar14 = &DAT_100a83a38;
  local_a8 = param_5;
  local_a0 = param_6;
  local_98 = param_7;
  local_94 = param_4;
  local_90 = param_1;
  local_78 = param_3;
  FUN_100004bb4(&DAT_100a83a38,&DAT_100818330);
  puVar10 = (undefined *)
            ((long)&local_f0 -
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  local_80 = puVar10;
  __s10Foundation13URLComponentsVMa();
  local_b8 = *(long *)(lVar2 + -8);
  puVar10 = puVar10 + -(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100a83428;
  local_c0 = puVar10;
  lStack_b0 = lVar2;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  uVar11 = *(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = (long)puVar10 - uVar11;
  lVar12 = local_c8 - uVar11;
  lVar3 = 0;
  local_88 = lVar12;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar12 = lVar12 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar2 = *(long *)(lVar4 + -8);
  lVar13 = lVar12 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = *(undefined **)(param_2 + 0x18);
  puVar10 = *(undefined **)(param_2 + 0x20);
  FUN_10003f030(param_2,puVar14);
  (**(code **)(puVar10 + 8))(lVar13);
  puVar9 = local_80;
  lVar8 = local_88;
  if (unaff_x21 != 0) {
    return;
  }
  uVar17 = local_90;
  local_e8 = lVar15;
  local_e0 = lVar3;
  local_d8 = lVar12;
  local_d0 = lVar4;
  if (local_78 == 0) goto LAB_1002c40e8;
  __s10Foundation10URLRequestV10httpMethodSSSgvg();
  lVar4 = local_d8;
  if (puVar10 == (undefined *)0x0) {
LAB_1002c3f78:
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar14 != (undefined *)0x0) {
      local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1002bb634();
      _swift_bridgeObjectRelease(puVar14);
      puVar10 = local_70;
    }
    uVar17 = local_90;
    lVar4 = local_d0;
    uVar11 = 0;
    uVar16 = 0x2d746e65746e6f43;
    FUN_1002bbc2c(0x2d746e65746e6f43,0xec00000065707954,puVar10);
    if ((uVar11 & 1) == 0) {
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c42e8);
        (*pcVar1)();
      }
      uVar11 = *(ulong *)(puVar10 + 0x10);
      _swift_bridgeObjectRelease(puVar10);
      if (uVar11 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002c42ec);
        (*pcVar1)();
      }
    }
    else {
      _swift_bridgeObjectRelease();
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
      local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar10 != (undefined *)0x0) {
        FUN_1002bb634();
        _swift_bridgeObjectRelease(puVar10);
      }
      FUN_1002bba74(0x2d746e65746e6f43,0xec00000065707954,&DAT_d000000000000030,0x80000001008a9bd0);
      puVar14 = local_70;
      puVar10 = local_70;
      FUN_1002bc258(local_70);
      _swift_bridgeObjectRelease(puVar14);
      __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar10);
    }
    lVar8 = local_78;
    FUN_1002bf818(local_78);
    uVar11 = (ulong)local_94;
    lVar3 = lVar8;
    FUN_1002c42ec();
    _swift_bridgeObjectRelease(lVar8);
    FUN_1002bd428(lVar3,uVar11);
    __s10Foundation10URLRequestV8httpBodyAA4DataVSgvs();
  }
  else {
    if ((local_94 & 0xff) == 0) {
      puVar5 = &DAT_100a83a48;
      FUN_100004bb4(&DAT_100a83a48,&DAT_100818350);
      _swift_initStaticObject();
      local_70 = puVar14;
      puStack_68 = puVar10;
      *(undefined ***)(lVar13 + -0x10) = &local_70;
      uVar11 = 0;
      FUN_100152a38(FUN_10009ff84,lVar13 + -0x20,puVar5);
      _swift_arrayDestroy(puVar5 + 0x20,3,&DAT_1009ad298);
      _swift_bridgeObjectRelease();
      puVar14 = puVar10;
      lVar4 = local_d8;
      if ((uVar11 & 1) == 0) goto LAB_1002c3f78;
    }
    else {
      if ((local_94 & 0xff) != 1) {
        _swift_bridgeObjectRelease();
        puVar14 = puVar10;
        goto LAB_1002c3f78;
      }
      _swift_bridgeObjectRelease();
    }
    __s10Foundation10URLRequestV3urlAA3URLVSgvg(lVar8);
    lVar12 = local_e0;
    lVar3 = local_e8;
    lVar15 = lVar8;
    (**(code **)(local_e8 + 0x30))(lVar8,1,local_e0);
    if ((int)lVar15 == 1) {
      FUN_100040bb4(lVar8,&DAT_100a83428,&DAT_100817bb0);
      puVar6 = (undefined8 *)0x0;
      FUN_100277ad0();
      puVar7 = puVar6;
      FUN_1002c272c();
      _swift_allocError(puVar6,puVar7,0,0);
      *puVar7 = 0x8000000000000000;
      _swift_storeEnumTagMultiPayload(puVar7,puVar6,5);
      _swift_willThrow();
      (**(code **)(lVar2 + 8))(lVar13,local_d0);
      return;
    }
    local_f0 = lVar2;
    (**(code **)(lVar3 + 0x20))(lVar4,lVar8,lVar12);
    __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC(puVar9,lVar4,0);
    lVar8 = lStack_b0;
    lVar2 = local_b8;
    puVar10 = puVar9;
    (**(code **)(local_b8 + 0x30))(puVar9,1,lStack_b0);
    puVar14 = local_c0;
    if ((int)puVar10 == 1) {
      (**(code **)(lVar3 + 8))(lVar4,lVar12);
      FUN_100040bb4(puVar9,&DAT_100a83a38,&DAT_100818330);
      uVar17 = local_90;
      lVar2 = local_f0;
      lVar4 = local_d0;
    }
    else {
      puVar10 = local_c0;
      (**(code **)(lVar2 + 0x20))(local_c0,puVar9,lVar8);
      if (*(long *)(local_78 + 0x10) == 0) {
        (**(code **)(lVar2 + 8))(puVar14,lVar8);
        (**(code **)(lVar3 + 8))(local_d8,lVar12);
        uVar17 = local_90;
        lVar2 = local_f0;
        lVar4 = local_d0;
      }
      else {
        __s10Foundation13URLComponentsV19percentEncodedQuerySSSgvg();
        lVar2 = local_f0;
        if (puVar9 == (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          puVar14 = (undefined *)0xe000000000000000;
        }
        else {
          local_70 = puVar10;
          puStack_68 = puVar9;
          _swift_bridgeObjectRetain(puVar9);
          __sSS6appendyySSF(0x26,0xe100000000000000);
          _swift_bridgeObjectRelease(puVar9);
          puVar14 = puStack_68;
          puVar10 = local_70;
        }
        lVar4 = local_78;
        FUN_1002bf818(local_78);
        uVar11 = (ulong)local_94;
        lVar8 = lVar4;
        FUN_1002c42ec();
        _swift_bridgeObjectRelease(lVar4);
        local_70 = puVar10;
        puStack_68 = puVar14;
        _swift_bridgeObjectRetain(puVar14);
        __sSS6appendyySSF(lVar8,uVar11);
        _swift_bridgeObjectRelease(puVar14);
        _swift_bridgeObjectRelease(uVar11);
        puVar14 = local_c0;
        __s10Foundation13URLComponentsV19percentEncodedQuerySSSgvs(local_70,puStack_68);
        lVar4 = local_c8;
        __s10Foundation13URLComponentsV3urlAA3URLVSgvg(local_c8);
        __s10Foundation10URLRequestV3urlAA3URLVSgvs(lVar4);
        (**(code **)(local_b8 + 8))(puVar14,lStack_b0);
        (**(code **)(local_e8 + 8))(local_d8,local_e0);
        uVar17 = local_90;
        lVar4 = local_d0;
      }
    }
  }
LAB_1002c40e8:
  (**(code **)(lVar2 + 0x20))(uVar17,lVar13,lVar4);
  return;
}


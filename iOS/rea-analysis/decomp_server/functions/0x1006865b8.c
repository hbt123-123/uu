// rea decompile_all
// name: FUN_1006865b8
// address: 0x1006865b8
// body: available
// range: 0x1006865b8-0x100686b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1006865b8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ID IVar5;
  code **ppcVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  long unaff_x21;
  long lVar13;
  undefined1 auStack_b0 [16];
  ulong auStack_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  code *local_58;
  
  puVar3 = (undefined1 *)0x0;
  puVar11 = param_2;
  __sSS10FoundationE8EncodingVMa();
  lVar13 = *(long *)(puVar3 + -8);
  lVar2 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 < 1) {
    FUN_10068f620();
    _swift_allocError(&DAT_1009e6258,puVar3,0,0);
    *puVar3 = 5;
    _swift_willThrow();
    return;
  }
  bVar1 = *(byte *)(unaff_x20 + 0x31);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      IVar5 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"stringValue");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
      return;
    }
    if (bVar1 != 1) {
      return;
    }
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
    return;
  }
  if (4 < bVar1) {
    return;
  }
  if (bVar1 == 3) {
    if (param_2[2] != 0) {
      lVar4 = 1;
      FUN_10068c64c(1);
      if (((ulong)puVar11 & 1) != 0) {
        FUN_10003e8bc(param_2[7] + lVar4 * 0x20,&local_80);
        puVar10 = PTR___sypN_100995e88;
        ppcVar6 = &local_58;
        puVar11 = &local_80;
        _swift_dynamicCast(ppcVar6,puVar11,PTR___sypN_100995e88 + 8,PTR___sSbN_1009958c8,6);
        if (((int)ppcVar6 != 0) && (((ulong)local_58 & 1) != 0)) {
          thunk_FUN_100686184(&local_80);
          puVar7 = &DAT_100aba008;
          FUN_100004bb4(&DAT_100aba008,&DAT_10084dd90);
          ppcVar6 = &local_58;
          _swift_dynamicCast(ppcVar6,&local_80,puVar10 + 8,puVar7,6);
          if ((int)ppcVar6 == 0) {
            return;
          }
          *(undefined8 *)((long)auStack_a0 + lVar2) = param_1;
          *(undefined8 **)((long)auStack_a0 + lVar2 + 8) = param_2;
          *(long *)((long)auStack_a0 + lVar2 + 0x10) = param_3;
          pcVar8 = FUN_100691014;
          FUN_10068222c(FUN_100691014,auStack_b0 + lVar2,local_58);
          if (unaff_x21 != 0) {
            _swift_errorRelease();
            _swift_bridgeObjectRelease(local_58);
            return;
          }
          _swift_bridgeObjectRelease(local_58);
          local_80 = 0x5b;
          uStack_78 = 0xe100000000000000;
          puVar10 = &DAT_100aba010;
          local_58 = pcVar8;
          FUN_100004bb4(&DAT_100aba010,&DAT_10084dd98);
          puVar7 = &DAT_100aba018;
          FUN_10003f840(&DAT_100aba018,&DAT_100aba010,&DAT_10084dd98,PTR___sSayxGSKsMc_100995888);
          uVar9 = 0x2c;
          uVar12 = 0xe100000000000000;
          __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar10,puVar7);
          _swift_bridgeObjectRelease(pcVar8);
          __sSS6appendyySSF(uVar9,uVar12);
          _swift_bridgeObjectRelease(uVar12);
          uVar9 = 0x5d;
LAB_100686b40:
          __sSS6appendyySSF(uVar9,0xe100000000000000);
          return;
        }
      }
    }
  }
  else if (param_2[2] != 0) {
    lVar4 = 1;
    FUN_10068c64c(1);
    if (((ulong)puVar11 & 1) != 0) {
      FUN_10003e8bc(param_2[7] + lVar4 * 0x20,&local_80);
      puVar10 = PTR___sypN_100995e88;
      ppcVar6 = &local_58;
      puVar11 = &local_80;
      _swift_dynamicCast(ppcVar6,puVar11,PTR___sypN_100995e88 + 8,PTR___sSbN_1009958c8,6);
      if (((int)ppcVar6 != 0) && (((ulong)local_58 & 1) != 0)) {
        thunk_FUN_100686184(&local_80);
        puVar7 = &DAT_100aba020;
        FUN_100004bb4(&DAT_100aba020,&DAT_10084dda0);
        ppcVar6 = &local_58;
        _swift_dynamicCast(ppcVar6,&local_80,puVar10 + 8,puVar7,6);
        if ((int)ppcVar6 == 0) {
          return;
        }
        *(code **)((long)auStack_a0 + lVar2) = local_58;
        *(undefined8 *)((long)auStack_a0 + lVar2 + 8) = param_1;
        *(undefined8 **)((long)auStack_a0 + lVar2 + 0x10) = param_2;
        *(long *)((long)auStack_a0 + lVar2 + 0x18) = param_3;
        _swift_bridgeObjectRetain(local_58);
        pcVar8 = FUN_100691440;
        FUN_100681f94(FUN_100691440,auStack_b0 + lVar2,local_58);
        if (unaff_x21 != 0) {
          _swift_errorRelease();
          _swift_bridgeObjectRelease_n(local_58,2);
          return;
        }
        _swift_bridgeObjectRelease_n(local_58,2);
        local_80 = 0x7b;
        uStack_78 = 0xe100000000000000;
        puVar10 = &DAT_100aba010;
        local_58 = pcVar8;
        FUN_100004bb4(&DAT_100aba010,&DAT_10084dd98);
        puVar7 = &DAT_100aba018;
        FUN_10003f840(&DAT_100aba018,&DAT_100aba010,&DAT_10084dd98,PTR___sSayxGSKsMc_100995888);
        uVar9 = 0x2c;
        uVar12 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,puVar10,puVar7);
        _swift_bridgeObjectRelease(pcVar8);
        __sSS6appendyySSF(uVar9,uVar12);
        _swift_bridgeObjectRelease(uVar12);
        uVar9 = 0x7d;
        goto LAB_100686b40;
      }
    }
  }
  if (param_2[2] != 0) {
    lVar4 = 0;
    FUN_10068c64c(0);
    if (((ulong)puVar11 & 1) == 0) {
      pcVar8 = (code *)0x1;
      goto LAB_100686958;
    }
    FUN_10003e8bc(param_2[7] + lVar4 * 0x20,&local_80);
    uVar9 = 0;
    FUN_10068f660(0);
    ppcVar6 = &local_58;
    puVar11 = &local_80;
    _swift_dynamicCast(ppcVar6,puVar11,PTR___sypN_100995e88 + 8,uVar9,6);
    pcVar8 = local_58;
    if ((int)ppcVar6 != 0) goto LAB_100686958;
  }
  pcVar8 = (code *)0x1;
LAB_100686958:
  FUN_100686290(pcVar8);
  if (unaff_x21 == 0) {
    (**(code **)(lVar13 + 0x10))((long)&local_80 + lVar2,param_1,puVar3);
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC
              (pcVar8,puVar11,(long)&local_80 + lVar2);
    FUN_100006cdc(pcVar8,puVar11);
  }
  else {
    _swift_errorRelease();
  }
  return;
}


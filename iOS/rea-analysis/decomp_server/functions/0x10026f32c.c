// rea decompile_all
// name: FUN_10026f32c
// address: 0x10026f32c
// body: available
// range: 0x10026f32c-0x10026fa7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026f32c(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ID IVar10;
  undefined8 uVar11;
  ID IVar12;
  ID IVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long unaff_x20;
  undefined8 uVar22;
  long lVar23;
  code *pcVar24;
  undefined1 auStack_f0 [8];
  char *local_e8;
  code *pcStack_e0;
  long local_d8;
  undefined8 local_d0;
  long local_a8 [6];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  puVar9 = auStack_f0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar23 = *(long *)(lVar3 + -8);
  lVar21 = (long)puVar9 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar7 = *(long *)(param_1 + 0x18);
  lVar8 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,lVar7);
  if (((uint)uVar22 >> 3 & 1) == 0) {
    uVar22 = 0x74736575716552;
    local_d0 = param_4;
    (**(code **)(lVar8 + 8))(puVar9,lVar7,lVar8);
    puVar4 = puVar9;
    (**(code **)(lVar23 + 0x30))(puVar9,1,lVar3);
    if ((int)puVar4 == 1) {
      FUN_100272160(puVar9);
      puVar2 = &DAT_100a81370;
      FUN_100004bb4(&DAT_100a81370,&DAT_100815510);
      _swift_allocObject();
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      pcVar24 = *(code **)(unaff_x20 + 0x10);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      _swift_retain(uVar11);
      uVar14 = 0xe700000000000000;
      (*pcVar24)(0x74736575716552,0xe700000000000000,0xd000000000000011,0x80000001008a8760,param_2);
      _swift_release(uVar11);
      *(undefined8 *)(puVar2 + 0x20) = uVar22;
      *(undefined8 *)(puVar2 + 0x28) = uVar14;
      (*param_3)(puVar2);
      _swift_bridgeObjectRelease(puVar2);
    }
    else {
      local_d8 = lVar23;
      (**(code **)(lVar23 + 0x20))(lVar21,puVar9,lVar3);
      pcVar24 = *(code **)(unaff_x20 + 0x10);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar14 = uVar11;
      _swift_retain(uVar11);
      __s10Foundation10URLRequestV11descriptionSSvg();
      uVar15 = 0xe700000000000000;
      (*pcVar24)(0x74736575716552,0xe700000000000000,uVar14,puVar9,param_2);
      _swift_bridgeObjectRelease(puVar9);
      _swift_release(uVar11);
      IVar6 = 0;
      uVar16 = 1;
      FUN_10026b294(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
      uVar1 = *(ulong *)(IVar6 + 0x10);
      uVar19 = uVar1 + 1;
      IVar13 = IVar6;
      if (*(ulong *)(IVar6 + 0x18) >> 1 <= uVar1) {
        IVar13 = (ID)(1 < *(ulong *)(IVar6 + 0x18));
        uVar16 = uVar19;
        FUN_10026b294(IVar13,uVar19,1,IVar6);
      }
      *(ulong *)(IVar13 + 0x10) = uVar19;
      lVar7 = IVar13 + uVar1 * 0x10;
      *(undefined8 *)(lVar7 + 0x20) = uVar22;
      *(undefined8 *)(lVar7 + 0x28) = uVar15;
      uVar20 = (uint)*(undefined8 *)(unaff_x20 + 0x50);
      IVar6 = IVar13;
      if ((uVar20 >> 2 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x18);
        lVar8 = *(long *)(param_1 + 0x20);
        FUN_10003f030(param_1,lVar7);
        (**(code **)(lVar8 + 0x10))(lVar7,lVar8);
        lVar8 = lVar7;
        __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
        if (lVar8 != 0) {
          lVar23 = lVar7;
          _swift_isUniquelyReferenced_nonNull_native(lVar7);
          local_a8[0] = lVar7;
          FUN_100271670(lVar8,FUN_10027163c,0,lVar23,local_a8);
          _swift_bridgeObjectRelease(lVar8);
          lVar7 = local_a8[0];
        }
        pcVar24 = *(code **)(unaff_x20 + 0x10);
        IVar6 = *(ID *)(unaff_x20 + 0x18);
        _swift_retain(IVar6);
        lVar8 = lVar7;
        puVar2 = PTR___sSSN_1009957f8;
        __sSD11descriptionSSvg
                  (lVar7,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
        _swift_bridgeObjectRelease(lVar7);
        uVar22 = 0x2074736575716552;
        uVar17 = 0xef73726564616548;
        (*pcVar24)(0x2074736575716552,0xef73726564616548,lVar8,puVar2,param_2);
        uVar16 = uVar17;
        _swift_bridgeObjectRelease(puVar2);
        _swift_release();
        uVar1 = *(ulong *)(IVar13 + 0x10);
        uVar19 = uVar1 + 1;
        if (*(ulong *)(IVar13 + 0x18) >> 1 <= uVar1) {
          IVar6 = (ID)(1 < *(ulong *)(IVar13 + 0x18));
          uVar16 = uVar19;
          FUN_10026b294(IVar6,uVar19,1,IVar13);
          IVar13 = IVar6;
        }
        *(ulong *)(IVar13 + 0x10) = uVar19;
        lVar7 = IVar13 + uVar1 * 0x10;
        *(undefined8 *)(lVar7 + 0x20) = uVar22;
        *(ulong *)(lVar7 + 0x28) = uVar17;
        uVar20 = (uint)*(undefined8 *)(unaff_x20 + 0x50);
      }
      if ((uVar20 >> 1 & 1) != 0) {
        __s10Foundation10URLRequestV14httpBodyStreamSo07NSInputE0CSgvg();
        IVar12 = IVar13;
        if (IVar6 != 0) {
          pcStack_e0 = *(code **)(unaff_x20 + 0x10);
          uVar22 = *(undefined8 *)(unaff_x20 + 0x18);
          local_e8 = "HTTP Request Method";
          _swift_retain(uVar22);
          pcVar18 = "description";
          IVar6 = _objc_msgSend(IVar6,"description");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
          uVar17 = (ulong)local_e8 | 0x8000000000000000;
          puVar9 = &DAT_d000000000000013;
          (*pcStack_e0)(&DAT_d000000000000013,uVar17,IVar6,pcVar18,param_2);
          uVar16 = uVar17;
          _swift_bridgeObjectRelease(pcVar18);
          _swift_release(uVar22);
          uVar1 = *(ulong *)(IVar13 + 0x10);
          uVar19 = uVar1 + 1;
          if (*(ulong *)(IVar13 + 0x18) >> 1 <= uVar1) {
            IVar12 = (ID)(1 < *(ulong *)(IVar13 + 0x18));
            uVar16 = uVar19;
            FUN_10026b294(IVar12,uVar19,1,IVar13);
          }
          *(ulong *)(IVar12 + 0x10) = uVar19;
          lVar7 = IVar12 + uVar1 * 0x10;
          *(undefined1 **)(lVar7 + 0x20) = puVar9;
          *(ulong *)(lVar7 + 0x28) = uVar17;
        }
        IVar6 = 0;
        __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
        IVar13 = IVar12;
        if (uVar16 >> 0x3c < 0xf) {
          pcVar24 = *(code **)(unaff_x20 + 0x20);
          uVar22 = *(undefined8 *)(unaff_x20 + 0x28);
          _swift_retain(uVar22);
          IVar10 = IVar6;
          uVar19 = uVar16;
          (*pcVar24)(IVar6,uVar16);
          _swift_release(uVar22);
          pcVar24 = *(code **)(unaff_x20 + 0x10);
          uVar22 = *(undefined8 *)(unaff_x20 + 0x18);
          _swift_retain(uVar22);
          uVar11 = 0x2074736575716552;
          uVar14 = 0xec00000079646f42;
          (*pcVar24)(0x2074736575716552,0xec00000079646f42,IVar10,uVar19,param_2);
          _swift_bridgeObjectRelease(uVar19);
          _swift_release(uVar22);
          uVar19 = *(ulong *)(IVar12 + 0x10);
          if (*(ulong *)(IVar12 + 0x18) >> 1 <= uVar19) {
            IVar13 = (ID)(1 < *(ulong *)(IVar12 + 0x18));
            FUN_10026b294(IVar13,uVar19 + 1,1,IVar12);
          }
          *(ulong *)(IVar13 + 0x10) = uVar19 + 1;
          lVar7 = IVar13 + uVar19 * 0x10;
          *(undefined8 *)(lVar7 + 0x20) = uVar11;
          *(undefined8 *)(lVar7 + 0x28) = uVar14;
          FUN_100006cc8(IVar6);
        }
      }
      if (((*(byte *)(unaff_x20 + 0x50) & 1) != 0) &&
         (__s10Foundation10URLRequestV10httpMethodSSSgvg(), uVar16 != 0)) {
        pcVar24 = *(code **)(unaff_x20 + 0x10);
        uVar22 = *(undefined8 *)(unaff_x20 + 0x18);
        _swift_retain(uVar22);
        uVar11 = 0x80000001008a8780;
        puVar9 = &DAT_d000000000000013;
        (*pcVar24)(&DAT_d000000000000013,0x80000001008a8780,IVar6,uVar16,param_2);
        _swift_bridgeObjectRelease(uVar16);
        _swift_release(uVar22);
        uVar19 = *(ulong *)(IVar13 + 0x10);
        IVar6 = IVar13;
        if (*(ulong *)(IVar13 + 0x18) >> 1 <= uVar19) {
          IVar6 = (ID)(1 < *(ulong *)(IVar13 + 0x18));
          FUN_10026b294(IVar6,uVar19 + 1,1,IVar13);
        }
        *(ulong *)(IVar6 + 0x10) = uVar19 + 1;
        lVar7 = IVar6 + uVar19 * 0x10;
        *(undefined1 **)(lVar7 + 0x20) = puVar9;
        *(undefined8 *)(lVar7 + 0x28) = uVar11;
        IVar13 = IVar6;
      }
      (*param_3)(IVar13);
      _swift_bridgeObjectRelease(IVar13);
      (**(code **)(local_d8 + 8))(lVar21,lVar3);
    }
  }
  else {
    lVar3 = *(long *)(lVar7 + -8);
    lVar21 = lVar21 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar2 = &DAT_1009a9818;
    _swift_allocObject(&DAT_1009a9818,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    FUN_1000b142c(param_2,local_a8);
    puVar5 = &DAT_1009a99f0;
    _swift_allocObject(&DAT_1009a99f0,0x50,7);
    *(undefined **)(puVar5 + 0x10) = puVar2;
    *(code **)(puVar5 + 0x18) = param_3;
    *(undefined8 *)(puVar5 + 0x20) = param_4;
    thunk_FUN_1000a0074(local_a8,puVar5 + 0x28);
    pcVar24 = *(code **)(lVar8 + 0x28);
    _swift_retain(puVar2);
    _swift_retain(param_4);
    (*pcVar24)(lVar21,FUN_1002721dc,puVar5,lVar7,lVar8);
    _swift_release(puVar5);
    (**(code **)(lVar3 + 8))(lVar21,lVar7);
    _swift_release(puVar2);
  }
  return;
}


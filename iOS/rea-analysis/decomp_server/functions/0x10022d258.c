// rea decompile_all
// name: FUN_10022d258
// address: 0x10022d258
// body: available
// range: 0x10022d258-0x10022d73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022d258(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_140 [8];
  undefined8 local_138;
  long local_130;
  undefined *local_128;
  undefined1 auStack_120 [40];
  undefined8 local_f8 [3];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined *puStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [5];
  
  puVar6 = &DAT_100a7f020;
  local_138 = param_3;
  FUN_100004bb4(&DAT_100a7f020,&DAT_100813c38);
  local_130 = *(long *)(puVar6 + -8);
  local_128 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar11 = auStack_140 + -extraout_x8;
  lVar10 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___sypN_100995e88;
  do {
    if (lVar10 == 0) {
      return;
    }
    param_1 = param_1 + 0x20;
    FUN_10003e8bc(param_1,auStack_88);
    FUN_10003e8bc(auStack_88,auStack_a8);
    puVar7 = &DAT_100a7f028;
    FUN_100004bb4(&DAT_100a7f028,&DAT_100813c40);
    puVar8 = local_f8;
    _swift_dynamicCast(puVar8,auStack_a8,puVar6 + 8,puVar7,0);
    uVar2 = local_f8[0];
    if ((int)puVar8 == 0) {
      puVar7 = &DAT_100a7f030;
      FUN_100004bb4(&DAT_100a7f030,&DAT_100813c48);
      puVar8 = local_f8;
      _swift_dynamicCast(puVar8,auStack_a8,puVar6 + 8,puVar7,0);
      uVar2 = local_f8[0];
      if ((int)puVar8 != 0) {
        uVar1 = *(undefined8 *)(param_2 + 0x18);
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        FUN_1000ce034(param_2,uVar1);
        __ss24UnkeyedEncodingContainerP06nestedaC0sAA_pyFTj(&local_d0,uVar1,uVar3);
        FUN_10022d258(uVar2,&local_d0,local_138);
        _swift_bridgeObjectRelease(uVar2);
        FUN_10003f094(&local_d0);
        lVar4 = -0x78;
        goto LAB_10022d4c0;
      }
      puVar9 = &local_d0;
      _swift_dynamicCast(puVar9,auStack_a8,puVar6 + 8,PTR___sSiN_100995968,0);
      if ((int)puVar9 != 0) {
        uVar3 = CONCAT71(uStack_cf,local_d0);
        uVar2 = *(undefined8 *)(param_2 + 0x18);
        uVar1 = *(undefined8 *)(param_2 + 0x20);
        FUN_1000ce034(param_2,uVar2);
        __ss24UnkeyedEncodingContainerP6encodeyySiKFTj(uVar3,uVar2,uVar1);
        FUN_10003f094(auStack_88);
        goto joined_r0x00010022d330;
      }
      puVar9 = &local_d0;
      _swift_dynamicCast(puVar9,auStack_a8,puVar6 + 8,PTR___sSdN_1009958f0,0);
      if ((int)puVar9 == 0) {
        puVar9 = &local_d0;
        _swift_dynamicCast(puVar9,auStack_a8,puVar6 + 8,PTR___sSbN_1009958c8,0);
        uVar5 = local_d0;
        if ((int)puVar9 != 0) {
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          uVar1 = *(undefined8 *)(param_2 + 0x20);
          FUN_1000ce034(param_2,uVar2);
          __ss24UnkeyedEncodingContainerP6encodeyySbKFTj(uVar5,uVar2,uVar1);
          goto LAB_10022d594;
        }
        puVar9 = &local_d0;
        _swift_dynamicCast(puVar9,auStack_a8,puVar6 + 8,PTR___sSSN_1009957f8,0);
        if ((int)puVar9 == 0) {
          puVar7 = &DAT_100a7f038;
          FUN_100004bb4(&DAT_100a7f038,&DAT_100813c50);
          puVar9 = &local_d0;
          _swift_dynamicCast(puVar9,auStack_a8,puVar6 + 8,puVar7,0);
          if ((int)puVar9 == 0) {
            FUN_10003e8bc(auStack_88,&local_d0);
            puVar9 = &local_d0;
            puVar6 = puVar6 + 8;
            __sSS10describingSSx_tclufC(puVar9,puVar6);
            goto LAB_10022d69c;
          }
          FUN_1000a0074(&local_d0,local_f8);
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          uVar1 = *(undefined8 *)(param_2 + 0x20);
          FUN_1000ce034(param_2,uVar2);
          __ss24UnkeyedEncodingContainerP12superEncoders0E0_pyFTj(auStack_120,uVar2,uVar1);
          uVar1 = uStack_d8;
          uVar2 = local_e0;
          FUN_10003f030(local_f8,local_e0);
          __sSE6encode2toys7Encoder_p_tKFTj(auStack_120,uVar2,uVar1);
          if (unaff_x21 == 0) {
            FUN_10003f094(auStack_120);
            FUN_10003f094(auStack_88);
            FUN_10003f094(local_f8);
            goto LAB_10022d334;
          }
          FUN_10003f094(auStack_120);
          FUN_10003f094(auStack_88);
          puVar8 = local_f8;
          goto LAB_10022d708;
        }
        puVar9 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
        puVar6 = puStack_c8;
LAB_10022d69c:
        uVar2 = *(undefined8 *)(param_2 + 0x18);
        uVar1 = *(undefined8 *)(param_2 + 0x20);
        FUN_1000ce034(param_2,uVar2);
        __ss24UnkeyedEncodingContainerP6encodeyySSKFTj(puVar9,puVar6,uVar2,uVar1);
        if (unaff_x21 != 0) {
          FUN_10003f094(auStack_88);
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_10022d70c;
        }
        FUN_10003f094(auStack_88);
        _swift_bridgeObjectRelease(puVar6);
        puVar6 = PTR___sypN_100995e88;
      }
      else {
        uVar3 = CONCAT71(uStack_cf,local_d0);
        uVar2 = *(undefined8 *)(param_2 + 0x18);
        uVar1 = *(undefined8 *)(param_2 + 0x20);
        FUN_1000ce034(param_2,uVar2);
        __ss24UnkeyedEncodingContainerP6encodeyySdKFTj(uVar3,uVar2,uVar1);
LAB_10022d594:
        puVar8 = auStack_88;
        if (unaff_x21 != 0) {
LAB_10022d708:
          FUN_10003f094(puVar8);
          goto LAB_10022d70c;
        }
        FUN_10003f094(puVar8);
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      FUN_1000ce034(param_2,uVar1);
      __ss24UnkeyedEncodingContainerP12superEncoders0E0_pyFTj(&local_d0,uVar1,uVar3);
      uVar3 = uStack_b0;
      uVar1 = local_b8;
      puVar9 = &local_d0;
      FUN_10003f030(puVar9,local_b8);
      FUN_10022d870();
      __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
                (puVar11,&DAT_1009a6520,&DAT_1009a6520,puVar9,uVar1,uVar3);
      FUN_10022cb9c(puVar11,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      (**(code **)(local_130 + 8))(puVar11,local_128);
      FUN_10003f094(auStack_88);
      lVar4 = -0xc0;
LAB_10022d4c0:
      FUN_10003f094(&stack0xfffffffffffffff0 + lVar4);
      puVar6 = PTR___sypN_100995e88;
joined_r0x00010022d330:
      if (unaff_x21 != 0) {
LAB_10022d70c:
        FUN_10003f094(auStack_a8);
        return;
      }
    }
LAB_10022d334:
    FUN_10003f094(auStack_a8);
    lVar10 = lVar10 + -1;
  } while( true );
}


// rea decompile_all
// name: FUN_1001c4d48
// address: 0x1001c4d48
// body: available
// range: 0x1001c4d48-0x1001c5013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001c4e58) */

void FUN_1001c4d48(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x21;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  byte local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  undefined1 local_51;
  
  puVar1 = &DAT_100a7d070;
  FUN_100004bb4(&DAT_100a7d070,&DAT_100811ab0);
  lVar11 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + -extraout_x8;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  FUN_10003f030(param_2,uVar6);
  FUN_1001c5014();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (puVar7,&DAT_1009a2d78,&DAT_1009a2d78,lVar2,uVar6,uVar5);
  if (unaff_x21 == 0) {
    local_88 = 0;
    puVar3 = puVar1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF(&local_88,puVar1);
    _swift_bridgeObjectRelease(puVar3);
    local_51 = 0;
    FUN_1001c5054();
    puVar4 = &DAT_1009a2ce8;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_88,&DAT_1009a2ce8,&local_51,puVar1,&DAT_1009a2ce8,puVar3);
    if (local_88 < 2) {
      if (local_88 == 0) {
        local_51 = 1;
        FUN_1001c5118();
        __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                  (&local_88,&DAT_1009a2e78,&local_51,puVar1,&DAT_1009a2e78,puVar4);
        (**(code **)(lVar11 + 8))(puVar7,puVar1);
        bVar10 = 0;
        uVar6 = CONCAT71(uStack_87,local_88);
        uVar5 = uStack_80;
        uVar8 = 0;
        uVar9 = local_78;
      }
      else {
        (**(code **)(lVar11 + 8))(puVar7,puVar1);
        uVar6 = 0;
        bVar10 = 0xc0;
        uVar5 = 0;
        uVar8 = 0;
        uVar9 = 0;
      }
    }
    else if (local_88 == 2) {
      uVar5 = 0;
      FUN_1000ae6d0(0);
      local_51 = 1;
      uVar6 = uVar5;
      FUN_1001c50d4();
      __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                (&local_88,uVar5,&local_51,puVar1,uVar5,uVar6);
      (**(code **)(lVar11 + 8))(puVar7,puVar1);
      uVar6 = CONCAT71(uStack_87,local_88);
      bVar10 = 0x40;
      uVar5 = 0;
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      local_51 = 1;
      FUN_1001c5094();
      __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
                (&local_88,&DAT_1009a2df0,&local_51,puVar1,&DAT_1009a2df0,puVar4);
      (**(code **)(lVar11 + 8))(puVar7,puVar1);
      uVar6 = CONCAT71(uStack_87,local_88);
      bVar10 = local_68 | 0x80;
      uVar5 = uStack_80;
      uVar8 = uStack_70;
      uVar9 = local_78;
    }
    FUN_10003f094(param_2);
    *param_1 = uVar6;
    param_1[1] = uVar5;
    param_1[2] = uVar9;
    param_1[3] = uVar8;
    *(byte *)(param_1 + 4) = bVar10;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}


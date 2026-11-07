// rea decompile_all
// name: FUN_1003c50f8
// address: 0x1003c50f8
// body: available
// range: 0x1003c50f8-0x1003c5433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003c5344) */

void FUN_1003c50f8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  long local_a0 [4];
  undefined *local_80;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar6 = &DAT_100a8c688;
  local_a0[0] = param_1;
  FUN_100004bb4(&DAT_100a8c688,&DAT_100822420);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a8c730;
  local_a0[2] = (long)local_a0 - extraout_x8;
  FUN_100004bb4(&DAT_100a8c730,&DAT_1008224d0);
  local_a0[1] = *(long *)(puVar6 + -8);
  local_80 = puVar6;
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(local_a0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = ((long)local_a0 - extraout_x8) - extraout_x8_00;
  lVar7 = 0;
  FUN_1003c5a40();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar12 = (undefined8 *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100406944();
  *puVar12 = puVar8;
  puVar12[1] = puVar6;
  iVar3 = *(int *)(lVar7 + 0x18);
  lVar9 = 0;
  FUN_1003c63e0();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))((long)puVar12 + (long)iVar3,1,1,lVar9);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003d0c7c();
  local_a0[3] = lVar11;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar11,&DAT_1009b9840,&DAT_1009b9840,lVar7,uVar1,uVar2);
  lVar11 = local_a0[2];
  lVar7 = local_a0[1];
  if (unaff_x21 == 0) {
    puVar6 = &DAT_100a8c740;
    FUN_100004bb4(&DAT_100a8c740,&DAT_1008224d8);
    local_61 = 0;
    puVar10 = puVar6;
    FUN_1003d0cbc();
    puVar5 = local_80;
    lVar4 = local_a0[3];
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar6,&local_61,local_80,puVar6,puVar10);
    _swift_bridgeObjectRelease(puVar8);
    *puVar12 = CONCAT71(uStack_57,local_58);
    puVar6 = &DAT_100a8c750;
    FUN_100004bb4(&DAT_100a8c750,&DAT_1008224e0);
    local_61 = 1;
    puVar8 = &DAT_100a8c758;
    FUN_1003d0e80(&DAT_100a8c758,&DAT_100a8c760,&TargetProtocolConformanceDescriptor_1008227d8,
                  PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar6,&local_61,puVar5,puVar6,puVar8);
    puVar12[1] = CONCAT71(uStack_57,local_58);
    local_58 = 2;
    puVar6 = &DAT_100a8c768;
    FUN_100005c90(&DAT_100a8c768,FUN_1003c63e0,&TargetProtocolConformanceDescriptor_100822480);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar11,lVar9,&local_58,puVar5,lVar9,puVar6);
    (**(code **)(lVar7 + 8))(lVar4,puVar5);
    FUN_1003d0d60(lVar11,(long)puVar12 + (long)iVar3);
    FUN_100082394(puVar12,local_a0[0],FUN_1003c5a40);
    FUN_10003f094(param_2);
  }
  else {
    FUN_10003f094(param_2);
  }
  FUN_1000d27dc(puVar12,FUN_1003c5a40);
  return;
}


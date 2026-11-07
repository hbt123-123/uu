// rea decompile_all
// name: FUN_100412108
// address: 0x100412108
// body: available
// range: 0x100412108-0x1004122cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004122a8) */
/* WARNING: Removing unreachable block (ram,0x00010041221c) */

undefined1  [16] FUN_100412108(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [15];
  undefined1 local_61;
  long local_58;
  
  puVar2 = &DAT_100a8e508;
  FUN_100004bb4(&DAT_100a8e508,&DAT_100825798);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_10003f030(param_1,lVar7);
  lVar4 = lVar3;
  FUN_1004120c8();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_70 + -extraout_x8,&DAT_1009bce48,&DAT_1009bce48,lVar4,lVar7,uVar1);
  if (unaff_x21 == 0) {
    puVar5 = &DAT_100a8e3d8;
    FUN_100004bb4(&DAT_100a8e3d8,&DAT_100824d58);
    local_61 = 0;
    puVar6 = &DAT_100a8e510;
    FUN_100414294(&DAT_100a8e510,PTR___sSSSesWP_100995828,PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar5,&local_61,puVar2,puVar5,puVar6);
    lVar7 = local_58;
    local_61 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,puVar5,&local_61,puVar2,puVar5,puVar6);
    (**(code **)(lVar8 + 8))(auStack_70 + -extraout_x8,puVar2);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
    local_58 = lVar3;
  }
  auVar9._8_8_ = local_58;
  auVar9._0_8_ = lVar7;
  return auVar9;
}


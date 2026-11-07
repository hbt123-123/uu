// rea decompile_all
// name: FUN_10003cbe8
// address: 0x10003cbe8
// body: available
// range: 0x10003cbe8-0x10003cd97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010003ccd8) */

void FUN_10003cbe8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  uint local_70 [7];
  undefined1 local_51;
  
  puVar3 = &DAT_100a759e8;
  FUN_100004bb4(&DAT_100a759e8,&DAT_100809aa8);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  FUN_10003f030(param_1,uVar1);
  FUN_10003f054();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)local_70 - extraout_x8,&DAT_100997940,&DAT_100997940,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_70[0] = local_70[0] & 0xffffff00;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(local_70,puVar3);
    local_70[0] = CONCAT31(local_70[0]._1_3_,1);
    puVar5 = local_70;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys5Int32VSgAFm_xtKF(puVar5,puVar3);
    local_51 = 2;
    FUN_10003f0b4();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_70,&DAT_1009979b8,&local_51,puVar3,&DAT_1009979b8,puVar5);
    (**(code **)(lVar6 + 8))((long)local_70 - extraout_x8,puVar3);
    FUN_10003f094(param_1);
  }
  else {
    FUN_10003f094(param_1);
  }
  return;
}


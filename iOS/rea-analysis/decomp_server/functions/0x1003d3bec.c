// rea decompile_all
// name: FUN_1003d3bec
// address: 0x1003d3bec
// body: available
// range: 0x1003d3bec-0x1003d3d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d3bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [14];
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar3 = &DAT_100a8c9c0;
  FUN_100004bb4(&DAT_100a8c9c0,&DAT_1008229d8);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003d49e8();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1009b9d18,&DAT_1009b9d18,param_1,uVar1,uVar2);
  local_61 = 0;
  puVar4 = &DAT_100a8c9d0;
  local_58 = param_2;
  FUN_100004bb4(&DAT_100a8c9d0,&DAT_1008229e0);
  puVar5 = &DAT_100a8c9d8;
  FUN_1003d5308(&DAT_100a8c9d8,FUN_1003d4a28,PTR___sSayxGSEsSERzlMc_100995880);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_58,&local_61,puVar3,puVar4,puVar5);
  if (unaff_x21 == 0) {
    local_62 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(param_3,&local_62,puVar3);
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  return;
}


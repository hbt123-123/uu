// rea decompile_all
// name: FUN_1005d9e74
// address: 0x1005d9e74
// body: available
// range: 0x1005d9e74-0x1005da067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005d9fd0) */

void FUN_1005d9e74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100aae090;
  FUN_100004bb4(&DAT_100aae090,&DAT_10083f4f8);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1005da1c8();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1009d9480,&DAT_1009d9480,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_52,puVar3)
    ;
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[4],&local_53,puVar3);
    local_54 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (unaff_x20[5],*(undefined1 *)(unaff_x20 + 6),&local_54,puVar3);
    local_60 = unaff_x20[7];
    local_61 = 4;
    puVar4 = &DAT_100aae0a0;
    FUN_100004bb4(&DAT_100aae0a0,&DAT_10083f500);
    puVar5 = &DAT_100aae0a8;
    FUN_1005da960(&DAT_100aae0a8,PTR___sSSSEsWP_100995800,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_60,&local_61,puVar3,puVar4,puVar5);
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  return;
}


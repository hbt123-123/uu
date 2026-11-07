// rea decompile_all
// name: FUN_1005fea64
// address: 0x1005fea64
// body: available
// range: 0x1005fea64-0x1005fedbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fea64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long extraout_x8;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100aaf988;
  FUN_100004bb4(&DAT_100aaf988,&BYTE_1008473c0);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_100600530();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&DAT_1009dd6d0,&DAT_1009dd6d0,param_1,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(*unaff_x20,&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_51 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[1],&local_51,puVar3);
    local_51 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[2],&local_51,puVar3);
    local_51 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[3],&local_51,puVar3);
    local_51 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[4],&local_51,puVar3);
    local_51 = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[5],&local_51,puVar3);
    local_51 = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[6],&local_51,puVar3);
    local_51 = 7;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[7],&local_51,puVar3);
    local_51 = 8;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[8],&local_51,puVar3);
    local_51 = 9;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[9],&local_51,puVar3);
    local_51 = 10;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[10],&local_51,puVar3);
    local_51 = 0xb;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[0xb],&local_51,puVar3);
    local_51 = 0xc;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[0xc],&local_51,puVar3);
    local_51 = 0xd;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[0xd],&local_51,puVar3);
    local_51 = 0xe;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(unaff_x20[0xe],&local_51,puVar3);
    uVar4 = (ulong)(uint)unaff_x20[0xf];
    local_51 = 0xf;
    __ss22KeyedEncodingContainerV6encode_6forKeyys5Int32V_xtKF(uVar4,&local_51,puVar3);
    local_51 = *(undefined1 *)(unaff_x20 + 0x10);
    local_52 = 0x10;
    FUN_100600570();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_51,&local_52,puVar3,&DAT_1009dd518,uVar4);
    (**(code **)(lVar6 + 8))(puVar5,puVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,puVar3);
  }
  return;
}


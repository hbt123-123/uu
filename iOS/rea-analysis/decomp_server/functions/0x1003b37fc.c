// rea decompile_all
// name: FUN_1003b37fc
// address: 0x1003b37fc
// body: available
// range: 0x1003b37fc-0x1003b3b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b37fc(long param_1)

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
  undefined1 auStack_60 [4];
  undefined1 local_5c [4];
  ulong local_58;
  
  puVar3 = &DAT_100a8bd00;
  FUN_100004bb4(&DAT_100a8bd00,&DAT_100820b20);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003b3b08();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1009b90c8,&DAT_1009b90c8,param_1,uVar1,uVar2);
  local_58 = local_58 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&local_58,puVar3);
  if (unaff_x21 == 0) {
    local_58._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_58,puVar3)
    ;
    local_58._0_1_ = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[4],unaff_x20[5],&local_58,puVar3);
    local_58 = CONCAT71(local_58._1_7_,3);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[6],unaff_x20[7],&local_58,puVar3);
    local_58 = unaff_x20[8];
    local_5c[0] = 4;
    puVar4 = &DAT_100a756e8;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    puVar5 = &DAT_100a8bd10;
    FUN_1003bd9a4(&DAT_100a8bd10,PTR___sSSSEsWP_100995800,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_58,local_5c,puVar3,puVar4,puVar5);
    local_5c[0] = *(undefined1 *)((long)unaff_x20 + 0x4c);
    local_58._0_1_ = 5;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int32VSg_xtKF
              ((ulong)*(uint5 *)(unaff_x20 + 9),&local_58,puVar3);
    local_5c[0] = *(undefined1 *)((long)unaff_x20 + 0x54);
    local_58._0_1_ = 6;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int32VSg_xtKF
              ((ulong)*(uint5 *)(unaff_x20 + 10),&local_58,puVar3);
    local_58._0_1_ = 7;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0xb],unaff_x20[0xc],&local_58,puVar3);
    local_58._0_1_ = 8;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0xd],unaff_x20[0xe],&local_58,puVar3);
    local_58._0_1_ = 9;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (unaff_x20[0xf],unaff_x20[0x10],&local_58,puVar3);
    local_5c[0] = *(undefined1 *)((long)unaff_x20 + 0x8c);
    local_58 = CONCAT71(local_58._1_7_,10);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyys5Int32VSg_xtKF
              ((ulong)*(uint5 *)(unaff_x20 + 0x11),&local_58,puVar3);
    local_58 = unaff_x20[0x12];
    local_5c[0] = 0xb;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&local_58,local_5c,puVar3,puVar4,puVar5);
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  return;
}


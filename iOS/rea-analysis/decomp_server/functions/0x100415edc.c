// rea decompile_all
// name: FUN_100415edc
// address: 0x100415edc
// body: available
// range: 0x100415edc-0x1004161cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100415edc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  
  puVar3 = &DAT_100a8e668;
  FUN_100004bb4(&DAT_100a8e668,&BYTE_100825ae8);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_100416518();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&DAT_1009bd380,&DAT_1009bd380,param_1,uVar1,uVar2);
  auStack_60[0xf] = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(*unaff_x20,auStack_60 + 0xf,puVar3);
  if (unaff_x21 == 0) {
    auStack_60[0xe] = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[1],auStack_60 + 0xe,puVar3);
    auStack_60[0xd] = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[2],auStack_60 + 0xd,puVar3);
    auStack_60[0xc] = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[3],auStack_60 + 0xc,puVar3);
    auStack_60[0xb] = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[4],auStack_60 + 0xb,puVar3);
    auStack_60[10] = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[5],auStack_60 + 10,puVar3);
    auStack_60[9] = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[6],auStack_60 + 9,puVar3);
    auStack_60[8] = 7;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[7],auStack_60 + 8,puVar3);
    auStack_60[7] = 8;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[8],auStack_60 + 7,puVar3);
    auStack_60[6] = 9;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[9],auStack_60 + 6,puVar3);
    auStack_60[5] = 10;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[10],auStack_60 + 5,puVar3);
    auStack_60[4] = 0xb;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[0xb],auStack_60 + 4,puVar3);
    auStack_60[3] = 0xc;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[0xc],auStack_60 + 3,puVar3);
    auStack_60[2] = 0xd;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[0xd],auStack_60 + 2,puVar3);
    auStack_60[1] = 0xe;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[0xe],auStack_60 + 1,puVar3);
    (**(code **)(lVar5 + 8))(puVar4,puVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,puVar3);
  }
  return;
}


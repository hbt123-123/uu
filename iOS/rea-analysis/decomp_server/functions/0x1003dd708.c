// rea decompile_all
// name: FUN_1003dd708
// address: 0x1003dd708
// body: available
// range: 0x1003dd708-0x1003dd957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003dd8a0) */

void FUN_1003dd708(long param_1)

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
  undefined1 auStack_60 [7];
  undefined1 local_59;
  ulong local_58;
  
  puVar3 = &DAT_100a8cd70;
  FUN_100004bb4(&DAT_100a8cd70,&DAT_100823130);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  FUN_1003ddb68();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar6,&DAT_1009ba578,&DAT_1009ba578,param_1,uVar1,uVar2);
  local_58 = local_58 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(*unaff_x20,&local_58,puVar3);
  if (unaff_x21 == 0) {
    local_58._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[1],&local_58,puVar3);
    local_58._0_1_ = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&local_58,puVar3)
    ;
    local_58._0_1_ = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[4],&local_58,puVar3);
    local_58._0_1_ = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[5],unaff_x20[6],&local_58,puVar3)
    ;
    local_58 = CONCAT71(local_58._1_7_,5);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[7],unaff_x20[8],&local_58,puVar3)
    ;
    local_58 = unaff_x20[9];
    local_59 = 6;
    puVar4 = &DAT_100a756e8;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    puVar5 = &DAT_100a8bd10;
    FUN_1003bd9a4(&DAT_100a8bd10,PTR___sSSSEsWP_100995800,PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_58,&local_59,puVar3,puVar4,puVar5);
    local_58 = CONCAT71(local_58._1_7_,7);
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[10],&local_58,puVar3);
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,puVar3);
  }
  return;
}


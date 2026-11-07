// rea decompile_all
// name: FUN_10000c25c
// address: 0x10000c25c
// body: available
// range: 0x10000c25c-0x10000c3db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000c25c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_80 [15];
  undefined1 local_71;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &DAT_100101d08;
  FUN_10000eb08(&DAT_100101d08,&DAT_1000cb808);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar3);
  FUN_100012bb0();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_80 + -extraout_x8,&DAT_1000f2070,&DAT_1000f2070,param_1,uVar3,uVar1);
  uVar3 = *unaff_x20;
  local_70 = local_70 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(uVar3,unaff_x20[1],&local_70,puVar2);
  if (unaff_x21 == 0) {
    uStack_68 = unaff_x20[3];
    local_70 = unaff_x20[2];
    uStack_58 = unaff_x20[5];
    uStack_60 = unaff_x20[4];
    local_71 = 1;
    FUN_1000108b4();
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_70,&local_71,puVar2,&DAT_1000f10a8,uVar3);
    local_70._0_1_ = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[6],unaff_x20[7],&local_70,puVar2)
    ;
    local_70 = CONCAT71(local_70._1_7_,3);
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[8],unaff_x20[9],&local_70,puVar2)
    ;
  }
  (**(code **)(lVar4 + 8))(auStack_80 + -extraout_x8,puVar2);
  return;
}


// rea decompile_all
// name: FUN_1003c4f04
// address: 0x1003c4f04
// body: available
// range: 0x1003c4f04-0x1003c50f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c4f04(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  undefined8 local_58;
  
  puVar3 = &DAT_100a8c798;
  FUN_100004bb4(&DAT_100a8c798,&DAT_1008224f8);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar7);
  FUN_1003d0c7c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (auStack_60 + -extraout_x8,&DAT_1009b9840,&DAT_1009b9840,param_1,uVar7,uVar1);
  local_58 = *unaff_x20;
  local_59 = 0;
  puVar4 = &DAT_100a8c740;
  FUN_100004bb4(&DAT_100a8c740,&DAT_1008224d8);
  puVar5 = puVar4;
  FUN_1003d0df0();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_58,&local_59,puVar3,puVar4,puVar5);
  if (unaff_x21 == 0) {
    local_58 = unaff_x20[1];
    local_59 = 1;
    puVar4 = &DAT_100a8c750;
    FUN_100004bb4(&DAT_100a8c750,&DAT_1008224e0);
    puVar5 = &DAT_100a8c7a8;
    FUN_1003d0e80(&DAT_100a8c7a8,&DAT_100a8c7b0,&TargetProtocolConformanceDescriptor_100822760,
                  PTR___sSayxGSEsSERzlMc_100995880);
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              (&local_58,&local_59,puVar3,puVar4,puVar5);
    lVar6 = 0;
    FUN_1003c5a40();
    iVar2 = *(int *)(lVar6 + 0x18);
    local_58 = CONCAT71(local_58._1_7_,2);
    uVar7 = 0;
    FUN_1003c63e0(0);
    puVar4 = &DAT_100a8c7b8;
    FUN_100005c90(&DAT_100a8c7b8,FUN_1003c63e0,&TargetProtocolConformanceDescriptor_100822458);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              ((long)unaff_x20 + (long)iVar2,&local_58,puVar3,uVar7,puVar4);
  }
  (**(code **)(lVar8 + 8))(auStack_60 + -extraout_x8,puVar3);
  return;
}


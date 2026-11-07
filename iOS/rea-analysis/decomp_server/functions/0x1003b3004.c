// rea decompile_all
// name: FUN_1003b3004
// address: 0x1003b3004
// body: available
// range: 0x1003b3004-0x1003b316f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b3004(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  uStack_78 = *(undefined8 *)(param_2 + 0x10);
  local_80 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = 0xff;
  FUN_1003b3170(0xff,uStack_78,*(undefined8 *)(param_2 + 0x18));
  pTVar4 = &TargetProtocolConformanceDescriptor_100822198;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100822198,uVar3);
  lVar5 = 0;
  __ss22KeyedEncodingContainerVMa(0,uVar3,pTVar4);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_80 - extraout_x8,uVar3,uVar3,pTVar4,uVar1,uVar2);
  local_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(*unaff_x20,&local_51,lVar5);
  uVar2 = uStack_78;
  uVar1 = local_80;
  if (unaff_x21 == 0) {
    local_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[1],unaff_x20[2],&local_52,lVar5);
    local_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
              ((long)unaff_x20 + (long)*(int *)(param_2 + 0x30),&local_53,lVar5,uVar2,uVar1);
  }
  (**(code **)(lVar6 + 8))((long)&local_80 - extraout_x8,lVar5);
  return;
}


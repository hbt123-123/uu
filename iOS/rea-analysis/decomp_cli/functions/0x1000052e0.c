// rea decompile_all
// name: FUN_1000052e0
// address: 0x1000052e0
// body: available
// range: 0x1000052e0-0x100005457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000052e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 local_58;
  
  uVar2 = 0xff;
  local_90 = param_3;
  local_88 = param_2;
  local_80 = param_6;
  FUN_10000fbac(0xff,param_4,param_5,param_6);
  pTVar3 = &TargetProtocolConformanceDescriptor_1000cf0c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000cf0c0,uVar2);
  lVar4 = 0;
  __ss22KeyedEncodingContainerVMa(0,uVar2,pTVar3);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10000eba0(param_1,uVar5);
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            ((long)&local_90 - extraout_x8,uVar2,uVar2,pTVar3,uVar5,uVar1);
  local_58 = local_88;
  local_61 = 0;
  uVar5 = 0;
  __sSaMa(0,param_4);
  local_70 = local_80;
  puVar6 = PTR___sSayxGSEsSERzlMc_1000f0370;
  _swift_getWitnessTable(PTR___sSayxGSEsSERzlMc_1000f0370,uVar5,&local_70);
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&local_58,&local_61,lVar4,uVar5,puVar6);
  if (unaff_x21 == 0) {
    local_58 = CONCAT71(local_58._1_7_,1);
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(local_90,&local_58,lVar4);
  }
  (**(code **)(lVar7 + 8))((long)&local_90 - extraout_x8,lVar4);
  return;
}


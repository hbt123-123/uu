// rea decompile_all
// name: FUN_100075fc4
// address: 0x100075fc4
// body: available
// range: 0x100075fc4-0x1000761eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100076144) */

void FUN_100075fc4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined1 *local_80;
  long local_78;
  
  lVar3 = 0;
  local_90 = param_1;
  FUN_10006affc();
  local_98 = *(long *)(lVar3 + -8);
  lVar7 = *(long *)(local_98 + 0x40);
  uVar4 = 0xff;
  local_88 = lVar3;
  local_80 = auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_100077dc4(0xff,param_3,param_4);
  pTVar5 = &TargetProtocolConformanceDescriptor_1000d4da0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d4da0,uVar4);
  lVar3 = 0;
  __ss22KeyedDecodingContainerVMa(0,uVar4,pTVar5);
  lVar12 = *(long *)(lVar3 + -8);
  lVar10 = (long)(auStack_a0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_78 = lVar3;
  FUN_1000767bc(0,param_3,param_4);
  lVar8 = *(long *)(lVar6 + -8);
  lVar11 = lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10006b084(lVar11,0,0xe000000000000000,0,param_3,param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_10000eba0(param_2,uVar1);
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar10,uVar4,uVar4,pTVar5,uVar1,uVar2);
  lVar7 = local_88;
  uVar1 = local_90;
  lVar3 = local_98;
  if (unaff_x21 == 0) {
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d4650,local_88);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(local_80,lVar7);
    (**(code **)(lVar12 + 8))(lVar10,local_78);
    (**(code **)(lVar3 + 0x28))(lVar11,local_80,lVar7);
    (**(code **)(lVar8 + 0x10))(uVar1,lVar11,lVar6);
    FUN_100001428(param_2);
    pcVar9 = *(code **)(lVar8 + 8);
  }
  else {
    FUN_100001428(param_2);
    pcVar9 = *(code **)(lVar8 + 8);
  }
  (*pcVar9)(lVar11,lVar6);
  return;
}


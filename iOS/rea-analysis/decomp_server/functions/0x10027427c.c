// rea decompile_all
// name: FUN_10027427c
// address: 0x10027427c
// body: available
// range: 0x10027427c-0x10027444f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002743d4) */

void FUN_10027427c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long local_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  local_80 = *(long *)(param_3 + -8);
  lVar10 = (long)&local_a0 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0xff;
  local_78 = param_1;
  local_70 = lVar10;
  FUN_100274ab8(0xff);
  pTVar6 = &TargetProtocolConformanceDescriptor_100815e48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100815e48,uVar5);
  lVar7 = 0;
  __ss22KeyedDecodingContainerVMa(0,uVar5,pTVar6);
  local_98 = *(long *)(lVar7 + -8);
  lVar10 = lVar10 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  lStack_90 = param_3;
  local_88 = param_4;
  local_68 = lVar7;
  FUN_100274540(0,param_3,param_4);
  lVar9 = *(long *)(lVar8 + -8);
  lVar11 = lVar10 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar1);
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar10,uVar5,uVar5,pTVar6,uVar1,uVar2);
  uVar1 = local_78;
  lVar4 = local_80;
  lVar3 = lStack_90;
  lVar7 = local_98;
  if (unaff_x21 == 0) {
    local_a0 = lVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF(local_70,lStack_90);
    (**(code **)(lVar7 + 8))(lVar10,local_68);
    (**(code **)(lVar4 + 0x20))(lVar11,local_70,lVar3);
    (**(code **)(local_a0 + 0x20))(uVar1,lVar11,lVar8);
  }
  FUN_10003f094(param_2);
  return;
}


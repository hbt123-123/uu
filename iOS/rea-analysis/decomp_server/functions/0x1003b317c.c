// rea decompile_all
// name: FUN_1003b317c
// address: 0x1003b317c
// body: available
// range: 0x1003b317c-0x1003b340f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b3394) */
/* WARNING: Removing unreachable block (ram,0x0001003b3324) */

void FUN_1003b317c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  long alStack_c0 [6];
  long local_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  alStack_c0[2] = *(long *)(param_3 + -8);
  alStack_c0[3] = param_1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(alStack_c0[2] + 0x40));
  lVar11 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0xff;
  local_90 = lVar11;
  FUN_1003b3170(0xff);
  pTVar6 = &TargetProtocolConformanceDescriptor_100822198;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100822198,uVar5);
  lVar7 = 0;
  __ss22KeyedDecodingContainerVMa(0,uVar5,pTVar6);
  alStack_c0[5] = *(long *)(lVar7 + -8);
  local_70 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(alStack_c0[5] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  lVar7 = 0;
  local_88 = param_3;
  uStack_80 = param_4;
  FUN_1003b3410(0,param_3,param_4,param_5);
  lVar10 = *(long *)(lVar7 + -8);
  alStack_c0[4] = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)(lVar11 - extraout_x8_01);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_10003f030(param_2,uVar1);
  local_78 = lVar11;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar11,uVar5,uVar5,pTVar6,uVar1,uVar2);
  uVar1 = uStack_80;
  lVar4 = local_88;
  lVar3 = local_90;
  lVar11 = alStack_c0[5];
  lVar7 = alStack_c0[4];
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar8 = &local_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar8,local_70);
    *puVar12 = puVar8;
    local_52 = 1;
    puVar8 = &local_52;
    lVar9 = local_70;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    puVar12[1] = puVar8;
    puVar12[2] = lVar9;
    local_53 = 2;
    alStack_c0[1] = lVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (lVar3,lVar4,&local_53,local_70,lVar4,uVar1);
    (**(code **)(lVar11 + 8))(local_78,local_70);
    (**(code **)(alStack_c0[2] + 0x20))((long)puVar12 + (long)*(int *)(lVar7 + 0x30),lVar3,lVar4);
    (**(code **)(lVar10 + 0x10))(alStack_c0[3],puVar12,lVar7);
    FUN_10003f094(param_2);
    (**(code **)(lVar10 + 8))(puVar12,lVar7);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}


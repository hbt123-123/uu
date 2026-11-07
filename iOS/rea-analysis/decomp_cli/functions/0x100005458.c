// rea decompile_all
// name: FUN_100005458
// address: 0x100005458
// body: available
// range: 0x100005458-0x100005637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000055f4) */
/* WARNING: Removing unreachable block (ram,0x000100005588) */

undefined1  [16] FUN_100005458(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  uVar3 = 0xff;
  local_80 = param_3;
  FUN_10000fbac(0xff);
  pTVar4 = &TargetProtocolConformanceDescriptor_1000cf0c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000cf0c0,uVar3);
  lVar5 = 0;
  __ss22KeyedDecodingContainerVMa(0,uVar3,pTVar4);
  lVar9 = *(long *)(lVar5 + -8);
  local_78 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = param_1;
  FUN_10000eba0(param_1,uVar7);
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_80 - extraout_x8,uVar3,uVar3,pTVar4,uVar7,uVar1);
  if (unaff_x21 == 0) {
    uVar7 = 0;
    __sSaMa(0,param_2);
    local_61 = 0;
    local_70 = local_80;
    puVar8 = PTR___sSayxGSesSeRzlMc_1000f0388;
    _swift_getWitnessTable(PTR___sSayxGSesSeRzlMc_1000f0388,uVar7,&local_70);
    lVar2 = local_78;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_58,uVar7,&local_61,local_78,uVar7,puVar8);
    lVar5 = CONCAT71(uStack_57,local_58);
    local_58 = 1;
    puVar6 = &local_58;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar6,lVar2);
    (**(code **)(lVar9 + 8))((long)&local_80 - extraout_x8,lVar2);
    FUN_100001428(param_1);
  }
  else {
    FUN_100001428(param_1);
    lVar5 = lVar9;
  }
  auVar10._8_8_ = puVar6;
  auVar10._0_8_ = lVar5;
  return auVar10;
}

